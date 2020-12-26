// Bibliotheken einbinden
#include <algorithm>
#include <vector>
#include <array>
#include <iostream>
#include <string>
#include <fstream>

// Punktvektor aus Datei auslesen
std::vector<std::array<double, 2>> read_points_from_file(std::string filename) {
    std::vector<std::array<double, 2>> returnVector;
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cout << "Fehler beim öffnen der Datei: " << filename << std::endl;
    } else {
        double x, y;
        while (inFile >> x >> y) {
            returnVector.push_back({x, y});
        }
        inFile.close();
    }
    return returnVector;
}
// Punktvektor in Datei schreiben
void write_points_to_file(std::string filename, const std::vector<std::array<double, 2>>& points) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cout << "Fehler beim öffnen der Datei: " << filename << std::endl;
    } else {
        for (std::array<double, 2> point : points) {
            outFile << point[0] << " " << point[1] << '\n';
        }
        outFile.close();
    }
}
// Punktvektor nach y-Wert sortieren
bool sort_by_y(std::array<double, 2> a, std::array<double, 2> b) {
    return (a[1]>b[1]) || (a[1]==b[1] && a[0]<b[0]);
}
// Punktvektor nach Winkel sortieren
bool sort_by_angle(std::array<double, 2> a, std::array<double, 2> b) {
    return (a[0]*b[1]-a[1]*b[0] > 0) || ( a[0]*b[1]-a[1]*b[0] == 0 && std::abs(a[0])> std::abs(b[0]));
}
// Vielfaches von Punkt auf Teil von Vektor addieren
void add_to_each(std::vector<std::array<double, 2>>& v, const std::array<double, 2>& e, int first=0, int factor=1) {
    if (v.size()-1 < first || e.size() != 2) { // Prüfe Parameter auf korrekte Länge
        return;
    }
    for (int i=first; i<v.size(); i++) {
        v[i][0] += e[0]*factor;
        v[i][1] += e[1]*factor;
    }
}
// Geradenabstand berechnen
double determinant(std::array<double, 2> a, std::array<double, 2> b, std::array<double, 2> c) {
    return (b[0] - a[0])*(c[1] - a[1]) - (c[0] - a[0])*(b[1] - a[1]);
}
// Graham Scan anwenden
void graham_scan(std::vector<std::array<double, 2>>& points) {
    std::vector<std::array<double, 2>> vNew;
    if (points.size() > 2) { // Sicherstellen, dass Vektor genügend Punkte hat
        // Graham Scan Algorithmus, Implementation mit Stack
        vNew = {points[0], points[1]};
        int i = 2;
        int n = points.size();
        while (i < points.size()) {
            if (determinant(vNew[vNew.size()-1], vNew[vNew.size()-2], points[i]) < 0 || vNew.size() == 2) {
                vNew.push_back(points[i]);
                i++;
            } else {
                vNew.pop_back();
            }
        }
    }
    points = vNew; // überschreibe Vektor mit Vektor aus Hüllpunkten
}

// konvexe Hülle berechnen und als Punktvektor zurückgeben
void convex_hull(std::vector<std::array<double, 2>>& points) {
    std::sort(points.begin(), points.end(), sort_by_y); // Punkte nach y-Werten sortieren

    add_to_each(points, points[0], 1, -1); // Punkt 1 von allen anderen Punkten subtrahieren
    std::sort(points.begin()+1, points.end(), sort_by_angle); // Punkte nach Winkel zu P0 sortieren
    add_to_each(points, points[0], 1); // Punkt 1 auf alle andere Punkte addieren

    graham_scan(points); // graham_scan ausführen
}

int main(int argc, char** argv) {
    if (argc > 2) { // Prüfe auf korrekte Anzahl von Argumenten
        std::string inputFile = argv[1];  // Eingabedateiname aus erstem Argument auslesen
        std::string outputFile = argv[2]; // Ausgabedateiname aus zweitem Argument auslesen
        std::vector<std::array<double, 2>> points = read_points_from_file(inputFile); // Punktvektor aus Datei generieren
        
        convex_hull(points); // Hüllpunktenvektor zwischenspeichern
        write_points_to_file(outputFile, points); // Hüllpunkte in Datei schreiben
        return 0;
    } else { // Fehlermeldung bei fehlenden Argumenten
        std::cout << 
            "Fehlende Argumente!\n" <<
            "Syntax: \"" << argv[0] << " Eingabedatei.txt Ausgabedatei.txt\"" << 
        std::endl;
        return 1;
    }
}
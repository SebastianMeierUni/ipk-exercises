#include <vector>
#include "prettyPrint.hpp"

int main(int argc, char** argv) {
    // Vektoren deklarieren und initialisieren
    std::vector<double> vector1;
    std::vector<std::string> vector2(8);
    std::vector<double> vector3 = {{4.4, 2.1, 4.2, 4.01, 10.55, 6.3, 8.4, 10.5, 6.6}};
    std::vector<int> vector4(5);

    // Vektoren bearbeiten
    vector2.push_back("hi");
    vector3[1] = 4.3;

    // Vektoren ausgeben
    prettyPrint::vector(vector1, "Vektor 1:");
    prettyPrint::vector(vector2, "Vektor 2:");
    prettyPrint::vector(vector3, "Vektor 3:");
    prettyPrint::vector(vector4, "Vektor 4:");

    // Antwort zu Frage in a)
    // Standartwert string : ""
    // Standartwert int/double : 0
    std::cout << "-> Ein nicht festgelegter int/double wird als 0 initialisiert" << std::endl;
    std::cout << "-> Ein nicht festgelegter std::string wird leer initialisiert" << std::endl;
}
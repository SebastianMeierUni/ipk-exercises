#include <iostream>
#include <vector>

namespace vctr {
    // Suche minMax-Werte in Vektoren
    std::pair<double, double> minMax(const std::vector<double> &vector) {
        std::pair<double, double> pair;
        if (vector.size()>0) {
            pair = {vector[0], vector[0]};
            for (long unsigned int i=1; i<vector.size(); i++) {
                if (vector[i] < pair.first) {
                    pair.first = vector[i];
                }
                if (vector[i] > pair.second) {
                    pair.second = vector[i];
                }
            }
        }
        return pair;
    }
}

int main(int argc, char**argv) {
    // Vektoren deklarieren
    std::vector<double> vector1 = {4.4, 2.1, 4.2, 4.01, 10.55, 6.3, 8.4, 10.5, 6.6};
    std::vector<double> vector2 = {9,8,7,6,5,4,3,2,1,0};
    std::vector<double> vector3;

    // min/Max Werte ausgeben
    {
    std::cout << "Vektor 1 minimaler/maximaler Wert: " << std::endl;
    std::pair<double, double> outputPair = vctr::minMax(vector1);
    std::cout << outputPair.first << ", " << outputPair.second << std::endl;
    }
    {
    std::cout << "Vektor 2 minimaler/maximaler Wert: " << std::endl;
    std::pair<double, double> outputPair = vctr::minMax(vector2);
    std::cout << outputPair.first << ", " << outputPair.second << std::endl;
    }
    {
    std::cout << "Vektor 3 minimaler/maximaler Wert: " << std::endl;
    std::pair<double, double> outputPair = vctr::minMax(vector3);
    std::cout << outputPair.first << ", " << outputPair.second << std::endl;
    }
}
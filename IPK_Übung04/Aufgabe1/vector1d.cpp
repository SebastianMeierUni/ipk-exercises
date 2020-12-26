#include <vector>
#include <cmath>
#include "prettyPrint.hpp"

namespace vctr {
    // runde einen Vektor
    void round(std::vector<double>& v) {
        for (int i=0; i<v.size(); i++) {
            v[i] = std::round(v[i]);
        }
    }
}

int main(int argc, char**argv) {
    // Vektor deklarieren
    std::vector<double> vector1 = {4.4, 2.1, 4.2, 4.01, 10.55, 6.3, 8.4, 10.5, 6.6};
    std::vector<double> vector2;

    // Vektoren runden
    vctr::round(vector1);
    vctr::round(vector2);

    // Vektoren ausgeben
    prettyPrint::vector(vector1, "gerundete Vektor1-Werte:");
    prettyPrint::vector(vector2, "gerundete Vektor2-Werte:");
}
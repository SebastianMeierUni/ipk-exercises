#include <vector>
#include "prettyPrint.hpp"

namespace vctr {
    // Erstelle umgekerten Vektor
    std::vector<double> reversed(const std::vector<double> &v) {
        std::vector<double> vOut;
        if (v.size()>0) {
            for (int i=v.size()-1; i>=0; i--) {
                vOut.push_back(v[i]);
            }
        }
        return vOut;
    }
}

int main(int argc, char**argv) {
    // Vektor deklarieren
    std::vector<double> vector1 = {4.4, 2.1, 4.2, 4.01, 10.55, 6.3, 8.4, 10.5, 6.6};
    std::vector<double> vector2;

    // Vektore umkehren und ausgeben
    prettyPrint::vector(vctr::reversed(vector1), "umgekehrter Vektor 1:");
    prettyPrint::vector(vctr::reversed(vector2), "umgekehrter Vektor 2:");
}
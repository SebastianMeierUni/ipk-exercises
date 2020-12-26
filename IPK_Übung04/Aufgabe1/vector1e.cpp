#include <utility>
#include "prettyPrint.hpp"

namespace vctr {
    // kehre Vektor-Werte um
    template <typename T>
    void reverse(std::vector<T> &v) {
        if (v.size()>0) {
            for (int i=0; i<(v.size()/2); i++) {
                std::swap(v[i], v[v.size()-(i+1)]);
            }
        }
    }
}

int main(int argc, char** argv) {
    // Vektoren deklarieren
    std::vector<double> vector1 = {4.4, 2.1, 4.2, 4.01, 10.55, 6.3, 8.4, 10.5, 6.6};
    std::vector<double> vector2 = {4.1, 2.2, 4.3, 4.04, 10.05, 6.6, 8.7, 10.8};
    std::vector<double> vector3;
    std::vector<std::string> vector4 = {"a", "b", "c", "d", "e"};

    // Vektoren umkehren
    vctr::reverse(vector1);
    vctr::reverse(vector2);
    vctr::reverse(vector3);
    vctr::reverse(vector4);

    // Vektoren ausgeben
    prettyPrint::vector(vector1, "umgekehrter Vektor1:");
    prettyPrint::vector(vector2, "umgekehrter Vektor2:");
    prettyPrint::vector(vector3, "umgekehrter Vektor3:");
    prettyPrint::vector(vector4, "umgekehrter Vektor4:");
}
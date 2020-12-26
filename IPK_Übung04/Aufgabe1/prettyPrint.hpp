#include <iostream>
#include <vector>

namespace prettyPrint {
    template <typename T>
    void vector(const std::vector<T> &v, std::string s) {
        // Inhalte des Vektors ausgeben
        std::cout << s << std::endl;
        if (v.size()>0) { // Vektor darf nicht leer sein
            for (long unsigned int i=0; i<v.size()-1; i++) {
                std::cout << v[i] << ", ";
            }   std::cout << v[v.size()-1] << std::endl;
        }
    }
}
#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>
#include <algorithm>
#include <cmath>
#include <array> //Verändert

//Funktion bekommt eine Referenz eines Vektors und berechnet den Mittelwert. Der Rückgabewert ist der berechnete Mittelwert.
double mean(const std::vector<double>& v);

//Funktion bekommt eine Referenz eines Vektors und berechnet den Median. Der Rückgabewert ist der berechnete Median.
double median(const std::vector<double>& v);

//Funktion bekommt eine Referenz eines Vektors und gibt das k-te statistiache Moment aller Einträge im Vektor zurück.
double moment(const std::vector<double>& v,int k);

//Funktion bekommt eine Referenz eines Vektors und berechnet die Standardabweichung. Der Rückgabewert ist Standardabweichung.
double standard_deviation(const std::vector<double>& v);

//Funktion bekommt ein q als Basis und einen Exponenten als k. q^k wird zurück gegeben.
int  dieKtePotenz( double q, int k);

#endif  // IO_HH


#include "fcpp.hh"
// (a)
bool teiler (int teiler, int zahl) {

// Ersetzen Sie die Null durch Ihren Code.
   return(cond (zahl%teiler==0, true ,false));
}

// (b)
int teileranzahl (int index, int anzahl, int zahl) {
  // Ersetzen Sie die Null durch Ihren Code. 
  return(cond(index==zahl , anzahl , cond( teiler(index,zahl) , teileranzahl(index+1,anzahl+1,zahl) , teileranzahl(index+1 , anzahl , zahl))));
}

// (c)
int teilersumme (int index, int summe, int zahl) {

  // Ersetzen Sie die Null durch Ihren Code.
  return(cond(index == zahl, summe , cond( teiler(index,zahl) , teilersumme(index+1, summe+index, zahl) , teilersumme(index+1 , summe , zahl))));
}

// (d)
bool vollkommen (int zahl) {

  // Ersetzen Sie die Null durch Ihren Code.
  return(cond(zahl==teilersumme(1,0,zahl) , 1 , 0 ));
}

// (e) 
int suchevollkommen (int zahl) {
  // Ersetzen Sie die Null durch Ihren Code.
  return(cond(vollkommen(zahl),zahl, suchevollkommen(zahl + 1)));
}

// (f) 
int main(int argc, char *argv[]) {
  // Fügen Sie hier Ihren Code ein, zum Beispiel
  print(suchevollkommen(497)); // 496 und 8128 sind die nächsten vollkommen Zahlen nach der 28
  return(0);
}

//
// Created by Maria Hilda Bermejo on 2019-07-02.
//

#ifndef SOBRECARGA_ENTERO_H
#define SOBRECARGA_ENTERO_H

#include <iostream>
using namespace std;

class Entero {
private:
    int dato;
public:
    Entero(){}
    Entero(int _dato) {dato = _dato;}
    int get_dato(){return dato;}

    friend Entero suma(Entero& x, Entero& y);

    friend Entero operator+(Entero& x, Entero& y);

    friend ostream& operator<<(ostream& o, Entero e);
};

#endif //SOBRECARGA_ENTERO_H

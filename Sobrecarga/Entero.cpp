//
// Created by Maria Hilda Bermejo on 2019-07-02.
//

#include "Entero.h"

Entero suma(Entero &x, Entero &y)
{
  return Entero( x.dato + y.dato);
}

Entero operator+(Entero &x, Entero &y)
{
  return Entero(x.dato + y.dato);
}

ostream& operator<<(ostream &o, Entero e)
{
  o << e.dato;
  return o;
}

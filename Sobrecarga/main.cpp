#include <iostream>
#include "Entero.h"

using namespace std;

int main() {

  Entero a(10);
  Entero b(40);
  Entero c;

  //c = a + b;   es posible?
  c = suma(a, b);

  cout << c.get_dato() << "\n";

  Entero d(20);
  Entero e(11);
  Entero f;
  f = d + e;

  cout << f.get_dato() << "\n";

  cout << f << "\n";

  return 0;
}
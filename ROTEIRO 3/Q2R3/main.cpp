#include <iostream>
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
   FiguraGeometrica *fig[3];

   fig[0] = new Triangulo(4,3);
   fig[1] = new Retangulo(6,4);
   fig[2] = new Circulo(2.7);

   cout << fig[0]->calcularArea() << endl;
   cout << fig[1]->calcularArea() << endl;
   cout << fig[2]->calcularArea() << endl;

   delete fig[0];
   delete fig[1];
   delete fig[2];

    return 0;
}

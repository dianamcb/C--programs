// Ejemplo 2.4.5 Pedir dos números al usuario a y b para (a+b)(a-b) y a²-b²

#include <iostream>

int main ();
{
         int a, b, suma, resta, producto;
         std::cout << "Dame un un primer número: ";
         std::cin >> a;
         std::cout << "Dame un segundo número: ";
         std::cin >> b;
         suma = a+b;
         resta = a-b;
         producto = (suma)*(resta);
         std::cout << "La operación es " << suma, resta, producto;

         return 0;
}

// Ejemplo 2.4.1 Pedir datos al usuario

#include <iostream>

int main ();
{
         int n1, n2, n3, n4, n5, suma;
         std::cout << "Dime un primer número: ";
         std::cin >> n1;
         std::cout << "Dime un segundo número: ";
         std::cin >> n2;
         std::cout << "Dime un tercer número: ";
         std::cin >> n3;
         std::cout << "Dime un cuarto número: ";
         std::cin >> n4;
         std::cout << "Dime un quinto número: ";
         std::cin >> n5;
         suma = n1+n2+n3+n4+n5;
         std::cout << "Su suma es " << suma;

         return 0;
}

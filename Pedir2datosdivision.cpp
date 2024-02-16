// Ejemplo 2.4.3 Pedir datos al usuario para división

#include <iostream>

int main ();
{
         int n1, n2, división;
         std::cout << "Dame un número: "; 
         std::cin >> n1;
         std::cout << "Dame otro número: ";
         std::cin >> n2;
         división = n1/n2;
         std::cout << "La división es " << división;

         return 0;
}

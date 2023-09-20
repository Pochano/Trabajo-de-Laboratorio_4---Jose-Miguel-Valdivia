#include <iostream>

int main() {
  
  int num1 = 1;
  int num2 = 1;
  int suma = 1;
  int limite;
  std::cout << "Ingrese un límite: ";
  std::cin >> limite;

  while(num1 < limite){
    if (num1%2 == 0){
      suma = suma + num1;
      std::cout << " num_1: " << num1 << "\n";
    }

    num1 = num1 + num2;
    num2 = num1 - num2;
  
      }
  std::cout << "\nLa suma es: " << suma-1;
}
#include <iostream>

int main() {

  unsigned long int suma_de_primos = 0;
  int limite;

  std::cout << "Ingresar límite: ";
  std::cin >> limite;

  for(int x = 0; x < limite; x++){

    int y = 2;
    while(x%y != 0){
      y++;
    }
    if(y == x){
      suma_de_primos = suma_de_primos + x;
    }
  }

  std::cout << "La suma de primos es: " << suma_de_primos;

  
}
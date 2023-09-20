#include <iostream>

int main(){
  
int limite;
int suma = 0;
  
std::cout << "Ingrese un límite: ";
std::cin >> limite;

for(int x = 0; x < limite; x++){

  if(x%3 == 0 || x%5 == 0){
    
    std::cout << x << "\t";
    suma = suma + x;
    
    }
}
  
std::cout << "\n";
std::cout << "La suma es: " << suma;

}
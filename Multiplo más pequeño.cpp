#include <iostream>

int main() {

  int contador = 0;

  for(int x = 1; true; x++){
    for(int y = 1; y <= 20; y++){

      if(x%y == 0){
        contador++;
      }
      else{
        contador = 0;
      }
    }
    if(contador == 20){
      std::cout << "El número más pequeño que se puede dividir desde el 1 al 20 es: " << x;
      break;
    }
  }

  
}
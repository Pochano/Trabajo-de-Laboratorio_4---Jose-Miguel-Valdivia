#include <iostream>

int main() {
  int contador = 1;
  for(int x = 0; true; x++){
    
    int y = 2;
    while(x%y != 0){
      y++;
    }
    if(y==x){

      if(contador == 10001){
        std::cout << "El primo N° 10001: " << x;
        break;
      }
      contador++;
      
    }
    
  }
}
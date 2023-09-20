#include <iostream>

int main() {

  unsigned long int numero = 600851475143;

  
  for(int x = 1; x <= numero; x++){

    if(numero%x == 0){
      
        int y = 2;
        while(x%y != 0){
          y++;
        }
        if(y == x){
          std::cout << x << " es primo \n";
        }
        }
      }
        
      }
  

  
   

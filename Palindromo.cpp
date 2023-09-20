#include <iostream>

int main() {

  std::string palabra = "Hola";

  int multiplicacion;

  int palindromo_mayor = 0;


  for(int x = 100; x < 1000; x++){

    for(int y = 100; y < 1000; y++){

      multiplicacion = x*y;

      std::string st = std::to_string(multiplicacion);
      int longitud = st.length();

      if(longitud == 6){
        if(st[0] == st[5] && st[2] == st[3] && st[1] == st[4]){

          if(palindromo_mayor < multiplicacion){
            palindromo_mayor = multiplicacion;
          }
          else{continue;}
          
        }
      else if (longitud == 5){

        if (st[0] == st[5] && st[1] == st[4]){

          if(palindromo_mayor < multiplicacion){
            palindromo_mayor = multiplicacion;
          }
          else{continue;}
          
        }
        
      }

        }
        
      }
  }
  std::cout << "\tEl mayor palindromo hecho por un número de tres digitos es: " << palindromo_mayor;
}
      

      



    // Crea una clase llamada casa, una puerta, ventanas, sofas, mesas y sillas.
    // Hacer una calculadora que calcule el número de puertas, venta.... en x pisos que de el usuario, considerando que debe haber dos puertas, cuatro ventanas, 5 sofas, 2 mesas y 8 sillas en los pisos que son impares, y siete puertas, 6 ventanas , 10 sofas, 3 mesas y 24 sillas en los pisos pares, esto debe ser una función, ademas colocame todos los get an set de cada atributo

    
  


  

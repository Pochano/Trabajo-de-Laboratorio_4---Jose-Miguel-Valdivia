#include <iostream>

int main() {
	
	int suma_de_cuadrados = 0;
	
	int cuadrado_de_sumas = 0;
	
	int diferencia = 0;

	
	for(int x = 1; x <= 100; x++){
		
		cuadrado_de_sumas = cuadrado_de_sumas + x;
		
		suma_de_cuadrados = suma_de_cuadrados + (x*x);
	}
		
	
	cuadrado_de_sumas = cuadrado_de_sumas*cuadrado_de_sumas;
	
	std::cout << "Cuadrado de Sumas: " << cuadrado_de_sumas << "\n";
	std::cout << "Suma de cuadrados: " << suma_de_cuadrados  << "\n";
	
	diferencia = cuadrado_de_sumas - suma_de_cuadrados;
	
	std::cout << "Diferencia entre C.D.S y S.D.C: " << diferencia << "\n";
	
}

#include <iostream>
#include <string>

int main() {

	std::string Nombre = "Ema";
	int Edad = 21;
	float Altura = 1.75;
	bool Programar = true;


	std::cout << "Mi nombre es: "<< Nombre << " Y tengo la edad de " << Edad << "Años" << "\n";
	std::cout << "Mido " << Altura << "Metros" << "\n";
	if (Programar == true) {
		std::cout << "Me gusta Programar!";
	}
	else {
		std::cout << "No me gusta Programar!";
	}
		
	 
	return 0;
}
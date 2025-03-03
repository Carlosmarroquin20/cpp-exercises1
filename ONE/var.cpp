#include <iostream>  // Incluye la biblioteca de entrada y salida estándar
#include <string>  // Incluye la biblioteca para usar strings

int main() {  
    int edad = 21;  // Declara una variable llamada "edad" de tipo entero y le asigna 21
    float altura = 1.75;  // Declara "altura" como un número decimal
    char inicial = 'E';  // Declara "inicial" como un carácter y le asigna 'E'
    std::string nombre = "Emanuel";  // Declara "nombre" como un texto y le asigna "Emanuel"
    bool esProgramador = true;  // Declara "esProgramador" como un booleano y le asigna "true"
    
    // Imprimimos los valores de las variables
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Altura: " << altura << " metros\n";
    std::cout << "Inicial del nombre: " << inicial << "\n";
    std::cout << "Es programador: " << esProgramador << "\n";

    return 0;  // Finaliza el programa correctamente
}

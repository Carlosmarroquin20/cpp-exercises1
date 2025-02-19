#include <iostream>  

int main() {
    double saldo = 1000.00; // Saldo inicial
    double deposito;

    std::cout << "Ingrese la cantidad a depositar: ";
    std::cin >> deposito;

    saldo += deposito;

    std::cout << "Su nuevo saldo es: " << saldo << std::endl;
    return 0;
}

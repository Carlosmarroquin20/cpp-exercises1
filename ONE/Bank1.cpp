#include <iostream>  

int main() {
    double saldo = 1000.00; // Saldo inicial
    int opcion;
    double monto;

    std::cout << "Quiere hacer 1) Deposito o  2) Retiro?? ";
    std::cin >> opcion;
    std::cout << "De cuanto es el monto? ";
    std::cin >> monto;

    if (opcion == 1) {
        saldo += monto;
        std::cout << "Su nuevo saldo es: " << saldo << std::endl;
    } else if (opcion == 2) {
        
        if (monto > saldo) {
            std::cout << "No se puede retirar mas de lo que hay disponible en la cuenta";
        } else {
            saldo -= monto;
            std::cout << "Su nuevo saldo es: " << saldo << std::endl;
        }     
    } else {
        std::cout << "ERROR";
    }

    return 0;
}

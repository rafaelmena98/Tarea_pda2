#include <iostream>
#include <string>

std::string horasTrabajadas;

int main(){
    std::string horasTrabajadas;
    std::cout << "Ingrese las horas trabajadas: ";
    std::cin >> horasTrabajadas;
    getline(std::cin, horasTrabajadas);
    std::cout << "Horas trabajadas: ";

    
    return 0;
}
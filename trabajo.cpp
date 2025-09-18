#include <iostream>
#include <string>

int main() {

   std::string nombre, apellido, cargo;
   float costoHora, horasTrabajadas;
   
   // Tasas y valores fijos
   
   const float TASA_RENTA = 0.073f;
   const float TASA_ISSS  = 0.054f;
   const float SEGURO_VIDA_FIJO = 12.0f;

   
   float sueldoBruto, montoIsss, montoRenta, montoSeguro, sueldoNeto;

   std::cout <<"Por favor, ingrese su nombre: ";
   std::getline(std::cin, nombre);
   std::cout <<"Por favor, ingrese su apellido: ";
   std::getline(std::cin, apellido);
   std::cout <<"Por favor, ingrese su cargo: ";
   std::getline(std::cin, cargo);
   std::cout <<"Por favor, ingrese su sueldo por hora: ";
   std::cin >> costoHora;
   std::cout <<"Por favor, ingrese las horas trabajadas: ";
   std::cin >> horasTrabajadas;

   // calculando sueldo
   sueldoBruto = costoHora * horasTrabajadas;

   montoIsss   = sueldoBruto * TASA_ISSS;
   montoRenta  = sueldoBruto * TASA_RENTA;
   montoSeguro = SEGURO_VIDA_FIJO;

   float deducciones = montoIsss + montoRenta + montoSeguro;
   sueldoNeto = sueldoBruto - deducciones;

   // Boleta de pago

   std::cout << "\n\n";
   std::cout << "----------------------------------\n";
   std::cout << "         Recibo de Pago           \n";
   std::cout << "----------------------------------\n";
   std::cout << "Nombre: " << nombre << " " << apellido << "\n";
   std::cout << "Cargo: " << cargo << "\n";
   std::cout << "Horas Trabajadas: " << horasTrabajadas << "\n";
   std::cout << "Costo por Hora: $" << costoHora << "\n";
   std::cout << "Sueldo Bruto: $" << sueldoBruto << "\n";
   std::cout << "Deducciones: \n";
   std::cout << "  ISSS: $" << montoIsss << "\n";
   std::cout << "  Renta: $" << montoRenta << "\n";
   std::cout << "  Seguro de Vida: $" << montoSeguro << "\n";
   std::cout << "Sueldo Neto: $" << sueldoNeto << "\n";
   std::cout << "----------------------------------\n";
   std::cout << "Gracias por su trabajo!\n";

   return 0;
}

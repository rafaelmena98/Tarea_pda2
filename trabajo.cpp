    #include <windows.h>
    #include <iostream>
	#include <iomanip>
    using namespace std;

    void gotoxy(int x, int y) {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    
    string nombres, apellidos, cargo;
    float costoHora, horaLaborada, sueldoInicial, renta, isss, seguro, sueldoPagar;

    int main() {
    	std::cout << "********************************************************************************* \n";
    	std::cout << "|			CALCULO DE SUELDO FINAL DE EMPLEADO			|\n";
    	std::cout << "|*******************************************************************************|\n";
    	std::cout << "|										|\n";
    	std::cout << "|	Ingrese la siguiente informacion laboral: 				|\n";
    	std::cout << "|										|\n";
    	std::cout << "|										|\n";
    	std::cout << "| 1. Nombres: ______________________________ 4. Costo hora: $___________ 	|\n";
    	std::cout << "|										|\n";
    	std::cout << "| 2. Apellidos: ____________________________ 5. Horas laboradas: ______ horas	|\n";
    	std::cout << "|										|\n";
    	std::cout << "| 3. Cargo: _____________________						|\n";
    	std::cout << "|										|\n";
    	std::cout << "|_______________________________________________________________________________|";
    	
    	gotoxy(14, 7); // Moviendo cursor a despues de nombre. (fila, columna)
    	std::getline(std::cin, nombres); // Definiendo y Guardando input de nombre con espacio
    	
    	gotoxy(16, 9);
    	std::getline(std::cin, apellidos);

		gotoxy(12, 11);
    	std::getline(std::cin, cargo);

		gotoxy(61, 7);
		std::cin >> costoHora;

		gotoxy(65, 9);
		std::cin >> horaLaborada;


		// Limpieza de pantalla

		system("cls");

		// Calculando sueldo

		sueldoInicial = costoHora * horaLaborada;
		renta = sueldoInicial * 0.075;
		isss = sueldoInicial * 0.054;
		seguro = 12.00;
		sueldoPagar = sueldoInicial - (renta + isss + seguro);

		// Salida de datos
		std::cout << "********************************************************************************* \n";
		std::cout << "		Empleado: " << nombres << " " << apellidos << "\n";
		std::cout << "		Cargo: " << cargo << "\n";
		std::cout << "********************************************************************************* \n";
		std::cout << "| 	Sueldo Inicial 	: $" << sueldoInicial << "						|\n";
		std::cout << "| 	Renta (7.5%)	: $" << renta << "						|\n";
		std::cout << "| 	ISSS (5.4%)	: $" << isss << "						|\n";
		std::cout << "| 	Seguro Fijo	: $" << seguro << "							|\n";
		std::cout << "|_______________________________________________________________________________|\n";
		std::cout << "| 	Sueldo a Pagar	: $" << sueldoPagar << "						|\n";
		std::cout << "|_______________________________________________________________________________|\n";
		std::cout << "********************************************************************************* \n";


		system("pause");
        return 0;
    }
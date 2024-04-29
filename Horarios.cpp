#include "Horarios.h"
#include <iostream>
#include <string>

Horarios::Horarios()
{
    // Constructor
}

Horarios::~Horarios()
{
    // Destructor
}

void Horarios::menuHorarios()
{
    int opcion;
    std::string horario;

    do
    {
        system("cls");
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\t| SISTEMA DE GESTION DE HORARIOS |" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\t 1. Seleccionar horario matutino" << std::endl;
        std::cout << "\t\t\t 2. Seleccionar horario vespertino" << std::endl;
        std::cout << "\t\t\t 3. Volver al inicio" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\tOpcion a escoger:[1/2/3]" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\tIngresa tu Opcion: ";
        std::cin >> opcion;

        switch(opcion)
        {
        case 1:
            horario = "matutino";
            seleccionar(horario);
            break;
        case 2:
            horario = "vespertino";
            seleccionar(horario);
            break;
        case 3:
            // Volver al inicio
            break;
        default:
            std::cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        }
        std::cin.get();
    } while(opcion != 3);
}

void Horarios::seleccionar(std::string horario)
{

    std::cout << "Has seleccionado el horario: " << horario << std::endl;
    system("cls");  // Limpia la consola
}

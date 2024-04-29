#include "Cursos.h"
#include <iostream>
#include <string>

Cursos::Cursos()
{
    // Constructor
}

Cursos::~Cursos()
{
    // Destructor
}

void Cursos::menu()
{
    int opcion;
    std::string curso;

    do
    {
        system("cls");
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\t| SISTEMA DE GESTION DE CURSOS |" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\t 1. Inscribirse a un curso" << std::endl;
        std::cout << "\t\t\t 2. Volver al inicio" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\tOpcion a escoger:[1/2]" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\tIngresa tu Opcion: ";
        std::cin >> opcion;

        switch(opcion)
        {
        case 1:
            std::cout << "Ingresa el nombre del curso al que te quieres inscribir: ";
            std::cin >> curso;
            inscribir(curso);
            break;
        case 2:
            // Volver al inicio
            break;
        default:
            std::cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        }
        std::cin.get();
    } while(opcion != 2);
}

void Cursos::inscribir(std::string curso)
{

    std::cout << "Te has inscrito al curso: " << curso << std::endl;
    system("cls");  // Limpia la consola
}

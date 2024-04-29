#include "sueldos.h"
#include <iostream>
#include <fstream>

using namespace std;

void sueldos::menu() {
    int choice;
    do {
        system("cls");
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t|    MENU DE SUELDOS          |" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t 1. Cómo cobrar tu sueldo" << endl;
        cout << "\t\t\t 2. Fechas de pago" << endl;
        cout << "\t\t\t 3. Proceso de asignación de maestros" << endl;
        cout << "\t\t\t 4. Retorno" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tOpción a escoger:[1/2/3/4]" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tIngresa tu Opción: ";
        cin >> choice;

        switch(choice) {
            case 1:
                // Implementa la funcionalidad para "Cómo cobrar tu sueldo" aquí
                break;
            case 2:
                // Implementa la funcionalidad para "Fechas de pago" aquí
                break;
            case 3:
                procesoAsignacionMaestros();
                break;
            case 4:
                // Implementa la funcionalidad para "Retorno" aquí
                break;
            default:
                cout << "\n\t\t\t Opción inválida...Por favor prueba otra vez..";
                cin.get();
        }
    } while(choice != 4);
}

void sueldos::procesoAsignacionMaestros() {
    string nombre, especializacion, lugarImpartirClases;
    cout << "\n\tIngrese su nombre: ";
    cin.ignore(); // Limpiar el buffer de entrada
    getline(cin, nombre);
    cout << "\tIngrese su especialización (Ingeniería o Licenciatura): ";
    getline(cin, especializacion);
    cout << "\tIngrese donde quiere impartir clases (Ingeniería o Licenciatura): ";
    getline(cin, lugarImpartirClases);

    // Guardar la información en un archivo txt
    ofstream file;
    file.open("AsignacionMaestros.txt", ios::app);
    file << "Nombre: " << nombre << "\n";
    file << "Especialización: " << especializacion << "\n";
    file << "Lugar para impartir clases: " << lugarImpartirClases << "\n\n";
    file.close();

    cout << "\n\t¡La información ha sido guardada con éxito!\n";
    system("pause");
}

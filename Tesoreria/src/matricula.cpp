#include "matricula.h"
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
//#include<conio.h>
#include<iomanip>
#include <cstdlib> // Para la generación de números aleatorios
#include <ctime>   // Para establecer la semilla del generador de números aleatorios
using namespace std;
void matricula::menu(){
int choice;

	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t|SISTEMA DE PAGO DE MATRICULA EN LINEA|"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t  1. Pago de matricula"<<endl;
	cout<<"\t\t\t  2. Salir"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t  Opcion a escoger:[1/2]"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
    cout<<"\t\t\t  Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            datosEstudiante();
        }
		break;
	case 2:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 2);
}
string matricula::generarNumeroCarnet() {
    srand(time(0)); // Semilla para números aleatorios
    string numeroCarnet = "9959-23-";
    for (int i = 0; i < 4; ++i) {
        numeroCarnet += to_string(rand() % 10); // Añadir dígitos aleatorios
    }
    return numeroCarnet;
};
// Función para generar un número aleatorio de dos dígitos
int matricula::generarNumeroAleatorio() {
    return rand() % 100; // Generar un número aleatorio entre 0 y 99
}

// Función para generar un correo institucional
string matricula::generarCorreoInstitucional(string nombre, string apellido1, string apellido2) {
    // Extraer la inicial del primer nombre
    char inicialNombre = tolower(nombre[0]);

    // Convertir el primer apellido a minúscula
    for (char &c : apellido1) {
        c = tolower(c);
    }

    // Convertir el segundo apellido a minúscula
    for (char &c : apellido2) {
        c = tolower(c);
    }
    // Concatenar el primer apellido y la inicial del segundo apellido
    string correo = "";
    correo += inicialNombre;
    correo += apellido1;
    correo += apellido2[0];
    // Generar un número aleatorio de dos dígitos
    int numeroAleatorio = generarNumeroAleatorio();

    // Concatenar el dominio del correo institucional
    correo += to_string(numeroAleatorio) + "@miumg.edu.gt";

    return correo;
}
// Función para generar un número de boleta aleatorio
string matricula::generarNumeroBoleta() {
    srand(time(0)); // Establecer la semilla para números aleatorios
    string numeroBoleta = "No.";
    for (int i = 0; i < 6; ++i) {
        numeroBoleta += to_string(rand() % 10); // Añadir dígitos aleatorios
    }
    return numeroBoleta;
}
//string matricula::datosEstudiante(string facultad, string nombre, string apellido1, string apellido2, string fechaNacimiento, string direccion, string telefono, string DPI, string correo, string fecha;)
//string facultad, nombre, apellido1, apellido2, fechaNacimiento, direccion, fecha, telefono, DPI, correo, numeroBoleta;
//double monto;
void matricula::datosEstudiante(){
    system("cls");
    fstream file;
      string facultad, plan, jornada, nombre, apellido1, apellido2, fechaNacimiento, direccion, telefono, DPI, correo, fecha, numeroBoleta;
      cout<<"\n-----------------------------------------------------------------------------------------------------------------";
      cout<<"\n-------------------------------------------------Creacion Matricula----------------------------------------------"<<endl;
      // Seleccionar Facultad
      cout << "Seleccione la Facultad (Ej. Ingenieria en sistemas, Ingenieria civil, etc.): ";
      cin.ignore(); // Limpiar el buffer de entrada
      getline(cin, facultad);
      cout << "Seleccione el plan(Diario, Fin de semana): ";
      getline(cin, plan);
      cout << "Seleccione la Jornada(Matutino, Vespertina): ";
      getline(cin, jornada);
      cout<<"\n-----------------------------------------------------------------------------------------------------------------";
      cout<<"\n-------------------------------------------Registro de Nuevos estudiante-----------------------------------------"<<endl;
      // Solicitar los datos del estudiante
      cout << "\n\tIngrese sus nombres: ";
      getline(cin, nombre);
      cout << "\tIngrese su primer apellido: ";
      getline(cin, apellido1);
      cout << "\tIngrese su segundo apellido: ";
      getline(cin, apellido2);
      cout << "\tIngrese su fecha de nacimiento(dd/mm/aaaa): ";
      getline(cin, fechaNacimiento);
      cout << "\tIngrese su Direccion de Residencia: ";
      getline(cin, direccion);
      cout << "\tIngrese su Telefono celular: ";
      getline(cin, telefono);
      cout << "\tIngrese su DPI(CUI): ";
      getline(cin, DPI);
      cout << "\tIngrese su Correo Electronico Personal: ";
      getline(cin, correo);
      cout << "\tFecha de ingreso de informacion(dd/mm/aaaa): ";
      getline(cin, fecha);
      cout << "\tMonto de la matricula: Q10.00"<<endl;

      // Generar número de carnet y correo institucional
      string numeroCarnet = generarNumeroCarnet();
      string correoInstitucional = generarCorreoInstitucional(nombre, apellido1, apellido2);
      cout<<"\n\n-----------------------------------------------------------------------------------------------------------------"<<endl;
      cout << "\t¡Su pago de matricula ha sido procesado con exito!" << endl;
      cout << "\tNumero de carnet: " << numeroCarnet << endl;
      cout << "\tSu Correo institucional es: " << correoInstitucional << endl;
      file.open("Matricula.txt", ios::app | ios::out);
      file<<"-------------------------------------------DATOS DEL ESTUDIANTE-------------------------------------------"<<"\n";
      file<<"facultad: "<<facultad <<"\n"<<"Plan: "<<plan <<"\n"<<"Jornada: "<<jornada <<"\n"<<"Nombre completo: "<<nombre<< " " << apellido1 << " " << apellido2<< "\n"<<"Fecha de nacimiento: "<< fechaNacimiento<< "\n";
      file<<"Direccion de Residencia: "<<direccion<<"\n"<<"Telefono celular: "<<telefono<<"\n"<<"DPI(CUI): "<<DPI<<"\n"<<"Correo electronico: "<<correo<<"\n"<<"Fecha de ingreso de informacion: "<<fecha<< "\n";
      file<<"Numero de carnet: " << numeroCarnet <<"\n" <<"Correo Institucional: "<<correoInstitucional<<"\n";
      file<<"----------------------------------------------------------------------------------------------------------"<<"\n";
      file.close();
      system("pause");
      system("cls");
      fstream file2;
      // Generar el número de boleta
      numeroBoleta = generarNumeroBoleta();
      // Mostrar el comprobante de pago
      cout<<"\n----------------------------------------------------------------------------------------------------------";
      cout<<"\n-------------------------------------------Comprobante de pago -------------------------------------------"<<endl;
      cout << "\t\t\tNumero de boleta: " << numeroBoleta << endl;
      cout << "\t\t\tNumero de carnet: " << numeroCarnet << endl;
      cout << "\t\t\tNombre completo: " << nombre << " " << apellido1 << " " << apellido2 << endl;
      cout << "\t\t\tFecha de pago: " << fecha << endl;
      cout << "\t\t\tMonto de la matricula: Q10.00" << endl;
      file2.open("Boleta_Pago.txt", ios::app | ios::out);
      file2<<"-------------------------------------------COMPROBANTE DE PAGO-------------------------------------------"<<"\n";
      file2<<"Numero de boleta: "<<numeroBoleta<<"\n"<<"Numero de carnet: "<<numeroCarnet<<"\n"<<"Nombre completo: "<<nombre<< " " << apellido1 << " " << apellido2<<"\n";
      file2<<"Fecha de pago: "<<fecha<<"\n"<<"Monto de la matricula: Q10.00"<< "\n";
      file2<<"---------------------------------------------------------------------------------------------------------"<<"\n";
      file2.close();
      system("pause");
}

#ifndef MATRICULA_H
#define MATRICULA_H
#include<iostream>

using namespace std;

class matricula
{
    private:
		//int choice;
		//string facultad, nombre, apellido1, apellido2, fechaNacimiento, direccion, fecha, telefono, DPI, correo, numeroBoleta;
		//double monto;
	public:
	    int choice;
	    string facultad, nombre, apellido1, apellido2, fechaNacimiento, direccion, fecha, telefono, DPI, correo, numeroBoleta;
		double monto;
		void menu();
		void datosEstudiante();
		string generarNumeroCarnet();
		int generarNumeroAleatorio();
		string generarCorreoInstitucional(string nombre, string apellido1, string apellido2);
		string generarNumeroBoleta();
};

#endif // MATRICULA_H

#ifndef COLEGIATURA_H
#define COLEGIATURA_H
#include<iostream>
using namespace std;

class colegiatura
{
    private:
		string carnet, trimestre, anio, mes, id, nombre, estatus;
	public:
		void menu();
		void insertar();
		void modificar();
		void buscar();
		void borrar();
};

#endif // COLEGIATURA_H

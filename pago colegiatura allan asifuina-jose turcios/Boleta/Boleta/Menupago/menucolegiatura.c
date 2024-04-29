#include "boleta.h"
#include "Colegiatura.h"
#include<iostream>

using namespace std;

Colegiatura::Colegiatura()
{
    //ctor
}

Colegiatura::~Colegiatura()
{
    //dtor
}
void Colegiatura::menucolegiatura(){
int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION COLEGIATURA |"<<endl;
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Alumnos"<<endl;
	cout<<"\t\t\t 2. Ingreso Matricula"<<endl;
	cout<<"\t\t\t 3. Consulta Solvencia"<<endl;
	cout<<"\t\t\t 4. Retornar menu anterior"<<endl;
    cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	cin.get();
    }while(choice!= 3);
}
void Colegiatura  ::insertar()
{
	system("cls");

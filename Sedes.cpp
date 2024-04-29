#include "Sedes.h"
#include<iostream>

using namespace std;

Sedes::Sedes()
{
    //ctor
}

Sedes::~Sedes()
{
    //dtor
}
void Sedes::menuSedes(){
int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE DATOS - Catalogos Sedes |"<<endl;
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Sede"<<endl;
	cout<<"\t\t\t 2. Consulta Sedes"<<endl;
	cout<<"\t\t\t 3. Retornar menu anterior"<<endl;
    cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
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
void Sedes  ::insertar()
{
	system("cls");

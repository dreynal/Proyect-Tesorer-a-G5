#include "Secciones.h"
#include<iostream>

using namespace std;

Secciones::Secciones()
{
    //ctor

}

Secciones::~Secciones()
{
    //dtor
}
void Secciones::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t|SISTEMA GESTION SECCIONES - 800|"<<endl;
	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Seccion"<<endl;
	cout<<"\t\t\t 2. Modifica Seccion"<<endl;
	cout<<"\t\t\t 3. Busca Seccion"<<endl;
	cout<<"\t\t\t 4. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otra aplicacion(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		modificar();
		break;
	case 3:
		buscar();
		break;
	case 4:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 4);
}
void Secciones::insertar()
{
	system("cls");

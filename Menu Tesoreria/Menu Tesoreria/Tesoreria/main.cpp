/*
#include <iostream>
#include<fstream>

#include "colegiatura.h"
#include "matricula.h"
#include "sueldos.h"
using namespace std;
void menuGeneral();

int main()
{
    menuGeneral();

    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	do
    {
	system("cls");
	//cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|    SISTEMA DE TESORERIA     |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Matricula"<<endl;
	cout<<"\t\t\t 2. Colegiatura"<<endl;
	cout<<"\t\t\t 3. Pago de Sueldos"<<endl;
	cout<<"\t\t\t 4. Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            matricula matricula;
            matricula.menu();
        }
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		//reportes();
		break;
	case 4:
		//search();
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 4);
}
*/
#include <iostream>
#include "menuTesoreria.h"
using namespace std;

int main()
{
    menuTesoreria menuPrincipal;
    menuPrincipal.menuGeneral();
    return 0;

}

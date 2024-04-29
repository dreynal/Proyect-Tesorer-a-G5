#include "menuTesoreria.h"
#include <iostream>
#include<fstream>
#include "colegiatura.h"
#include "matricula.h"
#include "sueldos.h"

using namespace std;

void menuTesoreria::menuGeneral()
{
    system("cls");
    int choice;
	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|    SISTEMA DE TESORERIA     |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Matricula"<<endl;
	cout<<"\t\t\t 2. Colegiatura"<<endl;
	cout<<"\t\t\t 3. Pago de sueldos"<<endl;
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


#include "colegiatura.h"
#include <iostream>
using namespace std;

void colegiatura::menu(){
    string carnet, trimestre, anio, mes;
int choice;

	do
    {
	system("cls");

	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t|     201-Colegiatura Cursos       |"<<endl;
	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t No. de Carnet: "<<endl;
	cin >> carnet;
	cout<<"\t\t\t Semestre/Trimestre(1/2/3/4/5/6/7/8): "<<endl;
	cin >> trimestre;
	cout<<"\t\t\t Anio(2024/2023/2022/2021/2020): "<<endl;
	cin >> anio;
	cout<<"\t\t\t Mes(ene/feb/mar/abr/may/jun/jul/ago/sept/oct/nov/dic): "<<endl;
	cin >> mes;
	cout<<"\t\t\t 4. Exit"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	{
    		//insertar();
    	}
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 4);
}

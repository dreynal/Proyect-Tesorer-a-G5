#include "Alumnos.h"
#include "bitacora.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Usuarios.h"

using namespace std;


void Alumno::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	 cout << "------------------------------------\n";
        cout << "|         Menu Alumnos             |\n";
        cout << "------------------------------------\n";
        cout << "1. Ingresar nuevo alumno\n";
        cout << "2. Mostrar lista de alumnos\n";
        cout << "3. Modificar datos de un alumno\n";
        cout << "4. Buscar alumno por ID\n";
        cout << "5. Borrar alumno por ID\n";
        cout << "6. Salir\n";

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
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
		desplegar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		borrar();
		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 6);
}
void Alumno::insertar()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles del Alumno ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Alumno       : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Alumno    : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa estatus del Alumno   : ";
	cin>>estatus;

	file.open("Datos_Alumno.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< estatus << "\n";
	file.close();
	bitacora auditoria;
	auditoria.insertar("Alumno registrado exitosamente", "801", "INS");
}
void Alumno::desplegar()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles del Alomno/s -------------------------"<<endl;
	file.open("Alumno.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información de este Alumno...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> estatus;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Alumno: "<<id<<endl;
			cout<<"\t\t\t Nombre Alumno: "<<nombre<<endl;
            cout<<"\t\t\t estatus Alumno: "<<estatus<<endl;

			file >> id >> nombre >> estatus;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
		system("pause");
	}
	file.close();
    bitacora auditoria;
    auditoria.insertar("Alumno registrado", "801", "SEL");
}
void Alumno::modificar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Detalles del Alumno/s-------------------------"<<endl;
	file.open("Alumno.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Alumno que quiere modificar: ";
		cin>>participant_id;
		file1.open("temporal.txt",ios::app | ios::out);
		file >> id >> nombre >> estatus;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< estatus << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Alumno: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Alumno: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese estatus del Alumno: ";
				cin>>estatus;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< estatus << "\n";
				found++;
			}
			file >> id >> nombre >> estatus;

		}
		file1.close();
		file.close();
		remove("Alumno.txt");
		rename("temporal.txt","Alumno.txt");
        bitacora auditoria;
        auditoria.insertar("Alumno registrado", "801", "UPD");
	}
}
void Alumno::buscar()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Alumno.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Alumno/s buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion sobre el o los Alumnos...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Alumno/s buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Alumno que quiere buscar: ";
		cin>>participant_id;
		file >> id >> nombre >> estatus;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				cout<<"\n\n\t\t\t Id Alumno: "<<id<<endl;
				cout<<"\t\t\t Nombre Alumno: "<<nombre<<endl;
				cout<<"\t\t\t estatus Alumno: "<<estatus<<endl;
				found++;
			}
			file >> id >> nombre >> estatus;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Alumno no encontrada...";
		}
		file.close();
        bitacora auditoria;
        auditoria.insertar("Alumno registrado", "801", "SEL");
	}
}
void Alumno::borrar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Detalles del Alumno/s a Borrar-------------------------"<<endl;
	file.open("Alumno.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Alumno que quiere borrar: ";
		cin>>participant_id;
		file1.open("temporal.txt",ios::app | ios::out);
		file >> id >> nombre >> estatus;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< estatus << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre >> estatus;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id Alumno no encontrado...";
		}
		file1.close();
		file.close();
		remove("Alumno.txt");
		rename("temporal.txt","Alumno.txt");
        bitacora auditoria;
        auditoria.insertar("Alumno registrado", "801", "DEL");
	}
}

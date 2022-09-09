// avance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int a = 1;
int op;
void main() {

	cout << " \t MENU PRINCIPAL" << endl;
	cout << "DE CLICK EN LAS SIGUIENTES OPCIONES : " << endl;

	cout << "\t1.- Alta" << endl;
	cout << "\t2.- Modificar" << endl;
	cout << "\t3.- Salir" << endl;
	cout << "\t Selecciona una opcion para continuar..." << endl;
	

	cin >> op;

	switch (op) 
	{

	case 1:
	{
		system("cls"); 
		cout << " Vas a Dar Una Alta..." << endl;
		break;
	}
	case 2: 
	{
		system("cls");
		cout << "Vas a Modificar..." << endl;
		break;

	}
	case 3:
	{
		system("cls");
		cout << "Vas a Dar Una Baja..." << endl;
		break;
	}
	case 4: // va a salir
	{
		system("cls");
		cout << " Usted Esta Saliendo..." << endl;
		break;

	}
	default:
	{
		system("cls");
		cout << "Error, Opcion Incorrecta... Saliendo Del Programa" << endl; 
		break; 
	}
	system("pause>null");


		/*if (a == 1); {
			cout << "Estas dando una alta..." << endl;
		}
		else if (a == 2)
		{
			cout << "Estas modificando..." << endl;
		}
		else {
			system("cls");
			cout << "Estas Saliendo..." << endl;

		}*/
		break;

































	}
}
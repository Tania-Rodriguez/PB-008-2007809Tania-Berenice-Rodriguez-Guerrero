#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>
#include <vector>

using namespace std;

void Agendar();
void modificar();
void eliminar();
void lista();
void limpiar();
void archivo();


int agendar, * cant, * numcita;
float* subtotal, * total, *peutra;
string* nompac, * hora, * nomtra, * desc;


int main()
{
	int opc;
	system("cls");
	cout << "\n seleccione lo que desea hacer" << endl;
	cout << "1: Agendar cita" << endl;
	cout << "2: Modificar cita" << endl;
	cout << "3: Eliminar cita" << endl;
	cout << "4: Lista de citas vigentes" << endl;
	cout << "5: Limpiar pantalla" << endl;
	cout << "6: Salir" << endl;
	cin >> opc;

	switch (opc)
	{
	case 1:
		Agendar();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;

	case 3:
		eliminar();
		return main();
		break;


	case 4:
		lista();
		return main();
		break;

	case 5:
		system("cls"); //system("clear");
		return main();
		break;

	case 6:
		archivo();
		break;
	}
}

void Agendar()
{
	system("cls"); 
	cout << "Digite el numero de citas que desea dar de alta:   " << endl;
	cin >> agendar;
	cout << "\n";
	numcita = new int[agendar];
	nompac = new string[agendar];
	hora = new string[agendar];
	nomtra = new string[agendar];
	desc = new string[agendar];
	peutra = new float[agendar];
	cant = new int[agendar];
	subtotal = new float[agendar];
	total = new float[agendar];

	for (int i = 0; i < agendar; i++)
	{
		system("cls");
		while (getchar() != '\n'); //se vacia el buffer o el espacio o cin.ignore
		cout << "inserte nombre del paciente" << endl;
		getline(cin, nompac[i]); //permite los espacios en el nombre
		cout << "inserte hora" << endl;
		getline(cin, hora[i]);
		cout << "inserte nombre del tratamiento" << endl;
		getline(cin, nomtra[i]);
		cout << "inserte descripcion" << endl;
		getline(cin, desc[i]);
		cout << "inserte precio unitario del tratamiento" << endl;
		cin >> peutra[i];
		cout << "inserte cantidad del tratamiento" << endl;
		cin >> cant[i];


	}
}

void modificar()
{
	system("cls");
	int j, op2;
	cout << "ingrese el numero de cita que desea modificar:   ";
	cin >> j;
	cout << "\n";
	j = j - 1; 
	cout << "Seleccione que desea modificar" << endl;
	cout << "1: Nombre del paciente" << endl;
	cout << "2: Hora" << endl;
	cout << "3: Nombre del tratamiento" << endl;
	cout << "4: Descripcion" << endl;
	cout << "5: Precio unitario del tratamiento" << endl;
	cout << "6: Cantidad del tratamiento" << endl;
	cin >> op2;

	switch (op2)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese nuevo nombre" << endl;
			getline(cin, nompac[i]);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese nueva hora" << endl;
			getline(cin, hora[i]);
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese tratamiento" << endl;
			getline(cin, nomtra[i]);
		}
		break;

	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese nueva descripcion" << endl;
			getline(cin, desc[i]);
		}
		break;

	case 5:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese precio unitario del tratamiento" << endl;
			cin >> peutra[i];
		}
		break;

	case 6:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese cantidad del tratamiento" << endl;
			cin >> cant[i];
		}



	}
}

	void eliminar()
	{
		system("cls"); 
		int j;
		cout << "ingrese la cita que desea eliminar:   ";
		cin >> j;
		cout << "\n";
		j = j - 1;
		for (int i = j; i == j; i++)
		{
			cout << "----Cita eliminada----" << j + 1 << endl;

			numcita[i] = 0;
			nompac[i] = " ";
			hora[i] = " ";
			nomtra[i] = " ";
			desc[i] = " ";
			peutra[i] = 0;
			cant[i] = 0;
			subtotal[i] = 0;
			total[i] = 0;
		}
		system("pause");
	}

	void lista()
	{
		system("cls");
		for (int i = 0; i < agendar; i++)
		{
			if (numcita[i] == 0)
			{
				cout << "---CITA ELIMINADO---" << i + 1 << endl;
			}
			else
			{
				cout << "CITA:             " << i + 1 << endl;
				cout << "NOMBRE:           " << nompac[i] << endl;
				cout << "HORA:             " << hora[i] << endl;
				cout << "TRATAMIENTO:      " << nomtra[i] << endl;
				cout << "DESCRIPCION:      " << desc[i] << endl;
				cout << "PRECIO UNITARIO:  " << peutra[i] << endl;
				cout << "CANTIDAD:         " << cant[i] << endl;
				subtotal[i] = peutra[i] * cant[i];
				cout << "SUBTOTAL:         " << subtotal[i] << endl;
				total[i] = subtotal[i] * 1.16;
				cout << "TOTAL:            " << total[i] << endl;
				cout << "\n";
			}
		}
		system("pause");
	}

	void archivo()
	 {
		ofstream archivo; 
		string nombrearchivo;
		int texto;
		string texto2;

		nombrearchivo = "Citas vigentes";

		archivo.open(nombrearchivo.c_str(), ios::out);

		if (archivo.fail())
		{
			cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
			exit(1);
		}

		archivo << "CITA:" << "\t" << "\t";
		archivo << "NOMBRE:" << "\t" << "\t";
		archivo << "HORA:" << "\t" << "\t";
		archivo << "TRATAMIENTO:" << "\t" << "\t";
		archivo << "DESCRIPCION:" << "\t";
	    archivo << "PRECIO UNITARIO:" << "\t";
		archivo << "CANTIDAD:" << "\t";
		archivo << "SUBTOTAL" << "\t";
		archivo << "TOTAL:" << "\n";

		for (int i = 0; i < agendar; i++)
		{
			texto = i + 1;
			archivo << texto << "\t" << "\t";
			texto2 = nompac[i];
			archivo << texto2 << "\t" << "\t";
			texto2 = hora[i];
			archivo << texto2 << "\t " << "\t";
			texto2 = nomtra[i];
			archivo << texto2 << "\t " << "\t";
			texto2 = desc[i];
			archivo << texto2 << "\t " << "\t" << "\t ";
	    	texto = peutra[i];
			archivo << texto << "\t" << "\t";
	 	 	texto = cant[i];
			archivo << texto << "\t" << "\t";
			subtotal[i] = peutra[i] * cant[i];
	        texto = subtotal[i];
			archivo << texto << "\t" << "\t";
	        total[i] = subtotal[i] * 1.16;
	        texto = total[i];
			archivo << texto << "\t" << "\n";
		}


		archivo.close();
	 }

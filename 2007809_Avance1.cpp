#include <iostream>
using namespace std;
struct cita
{
	int numcita;
	char nompac[40];
	char hora[5];
	char nomtra[40];
	char desc[100];
	float peutra;
	int cant;
	float peu;
	float total;

};
//con cin.get el programa no corre bien:C
typedef struct cita CI;
struct cita LEER()
{
	CI CLEER;
	cout << "inserte numero de cita" << endl;
	cin >> CLEER.numcita;
	cout << "inserte nombre del paciente" << endl;
	cin >> CLEER.nompac;
	cout << "inserte hora" << endl;
	cin >> CLEER.hora;
	cout << "inserte nombre del tratamiento" << endl;
	cin >> CLEER.nomtra;
	cout << "inserte descripcion" << endl;
	cin >> CLEER.desc;
	cout << "inserte precio unitario del tratamiento" << endl;
	cin >> CLEER.peutra;
	cout << "inserte cantidad del tratamiento" << endl;
	cin >> CLEER.cant;
	cout << "inserte precio unitario" << endl;
	cin >> CLEER.peu;
	cout << "Inserte total" << endl;
	cin >> CLEER.total;

	return CLEER;
}
int main()
{
	int op = 0, i = 0;
	while (op != 6)
	{

		cout << "\n seleccione lo que desea hacer" << endl;
		cout << "1: Agendar cita" << endl;
		cout << "2: Modificar cita" << endl;
		cout << "3: Eliminar cita" << endl;
		cout << "4: Lista de citas vigentes" << endl;
		cout << "5: Limpiar pantalla" << endl;
		cout << "6: Salir" << endl;


		cin >> op;

		system("cls");

		switch (op) {
		case 1:
			CI A[3];
			A[i] = LEER();
			i++;
			break;

		case 2:
			break;


		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			break;

		default:
			cout << "\nopcion incorrecta vuelva a intentarlo";
			break;


		}
	
	}
	return 0;
}
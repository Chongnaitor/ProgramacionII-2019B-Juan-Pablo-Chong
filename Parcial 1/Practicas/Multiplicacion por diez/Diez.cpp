#include <iostream>
using namespace std;

int MultiplicacionPor10()
{
	cout << "Ingresa el numero que quieres multiplicar" << endl;//Promt
	float NumeroDeUsuario;//Variable que en la cual el usuario va a almacenar su numero
	cin >> NumeroDeUsuario;//Pidiendo al usuario numero
	cout << "Tu numero es:" << NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario << endl;//Sumando diez veces el numero
	return  NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario + NumeroDeUsuario;
	cin.ignore();
	cin.get();
}
int main()
{
	MultiplicacionPor10();//Llamando a la funcion
	cin.ignore();
	cin.get();

}
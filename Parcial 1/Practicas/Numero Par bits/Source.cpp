#include<iostream>
using namespace std;//Incluimos librerias
int main()
{
	int NumeroDeUsuario;//Vriable en la cual va a estar el numero que elija el usuario
	cin >> NumeroDeUsuario;//Le asignamos valor del usuario
	if (NumeroDeUsuario & 1)//Usamos un operador de bits para ver si acaba en numero inpar o sea 1
	{
		cout << "No es par";
	}
	else//Por logica si no es uno todo lo demas es par
	{
		cout << "Si es par";
	}
	cin.ignore();
	cin.get();


}
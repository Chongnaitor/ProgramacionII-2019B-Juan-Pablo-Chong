#include <iostream>
using namespace std;//Incluimos librerias
int main()//Funcion principal
{
	int NumeroDeUsuario;//Hacemos una variable que contiene datos del usuario
	int NumeroDeUsuario2;//Otra variable que va a ser identica a la variable del usuario
	cin >> NumeroDeUsuario;//Pedimos al usuario que nos de un numero 
	NumeroDeUsuario2 = NumeroDeUsuario;//Duplicamos ese valor en la otra variable
	NumeroDeUsuario <<= 1;//Usamos el operador de bits para recorrerla y a la izquierda y hacerla mas grande
	NumeroDeUsuario2 <<= 3;//Recorremos la segunda variable 3 veces 
	cout << NumeroDeUsuario +NumeroDeUsuario2;//Sumamos e imprimimos
	cin.ignore();
	cin.get();

}
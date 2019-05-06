//Este programa sirve para saber si un numero es par
#include <iostream>
#include <bitset>
using namespace std;
bool NumeroPar()
{
	cout << "Escribe el numero que quieres comprobar, si pones letras se tomaran como cero" << endl;
	int NumeroAComprobar;//Variable de tipo entero que se usara para comprobar si el numero del usuario es par
	cin >> NumeroAComprobar;//Le pedimos al usuario que ingrese un numero
	string NumeroBinario = bitset<30>(NumeroAComprobar).to_string();//Pasamos a binario el numero en una variable de tipo string, el numero de los corchetes angulares es el numero de digitos binarios que pueden tener el numero del usuario
	if (NumeroBinario == "000000000000000000000000000000")//El identificador de cero equivale a trienta ceros por lo que comente anteriormente, por eso lo estableci
	{
		cout << "el 0 no es par ni es inpar" << endl;
		return true;
	}
	else
	{
		if (NumeroBinario.back() == '0')//Evalua si hay un cero al final significa que es par
		{
			cout << NumeroAComprobar << " si es par" << endl;
			return true;
		}
		else if (NumeroBinario.back() == '1')//Si hay uno no es par
		{
			cout << NumeroAComprobar << " no es par" << endl;
			return false;
		}

	}

	cin.ignore();//Evita que se cierre el programa automaticamente
	cin.get();
}
int main()
{
	NumeroPar();
	cin.ignore();
	cin.get();
}

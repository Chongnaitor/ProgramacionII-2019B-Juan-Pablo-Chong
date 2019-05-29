#include <iostream>
#include <vector>
using namespace std;
#include "Zoologico.h"
#include "Guacamayas.h"
void BubbleSort(vector<Zoologico*>&arreglo)//Hacemos una funcion de tipo vacio
{
	int Tamaño = arreglo.size();
	bool Cambio = true;//Una variable para cambiar de posiciones 
	int Iterador = 0;//Variable que va a servir para iterar en los ciclos
	Zoologico* temp = arreglo[0];//Variable de tipo temporal, que va a servir para hacer cambios rapidos
	while (Cambio)//Cambio no va a dejar de ser cambio nunca, hasta que se complete el ciclo
	{
		Cambio = false;//Establecemos el cambio en falso para que se reincicie despues de que se true
		Iterador++;
		for (int i = 0; i < Tamaño - Iterador; ++i)//Hacemos que comience el ciclo
		{
			if (*arreglo[i] > *arreglo[i + 1])//Evaluamos si se debe hacer el cambio
			{
				temp = arreglo[i];//Le asignamos a la variable temporal la posicion uno
				arreglo[i] = arreglo[i + 1];//Le asignamos a la posicion uno la posicion dos
				arreglo[i + 1] = temp;//Le asignamos a la posicion uno 
				Cambio = true;//Volvemos la variable true para que vuelva a empezar el ciclo con el siguiente numero
			}
		}
	}

}
int main()
{
	Guacamayas Pajaro1("Blue", 2, 100, true, true);
	Guacamayas Pajaro2("Bigzz", 2, 100, true, true);
	Guacamayas Pajaro3("AJAJA", 2, 100, true, true);
	vector<Zoologico*>MisAnimales;
	MisAnimales.push_back(&Pajaro1);
	MisAnimales.push_back(&Pajaro2);
	MisAnimales.push_back(&Pajaro3);
	for (int i = 0; i < MisAnimales.size(); i++)
	{
		cout << MisAnimales[i]->Nombre << "\n";		
	}
	cout << "\n";
	BubbleSort(MisAnimales);	
	for (int i = 0; i < MisAnimales.size(); i++)
	{
		cout << MisAnimales[i]->Nombre << "\n";
	}
	cin.get();
}

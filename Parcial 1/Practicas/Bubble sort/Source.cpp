#include <iostream>//importamos librerias
using namespace std;
void BubbleSort(int *arreglo, int Tamaño)//Hacemos una funcion de tipo vacio
{
	bool Cambio = true;//Una variable para cambiar de posiciones 
	int Iterador = 0;//Variable que va a servir para iterar en los ciclos
	int temp;//Variable de tipo temporal, que va a servir para hacer cambios rapidos
	while(Cambio)//Cambio no va a dejar de ser cambio nunca, hasta que se complete el ciclo
	{
		Cambio = false;//Establecemos el cambio en falso para que se reincicie despues de que se true
		Iterador++;
		for (int i = 0; i < Tamaño - Iterador; ++i)//Hacemos que comience el ciclo
		{
			if (arreglo[i] > arreglo[i + 1])//Evaluamos si se debe hacer el cambio
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
	int Arreglo[6] = { 3,8,8,1,9,10 };//Definimos el arreglo
	BubbleSort(Arreglo,6);//Le damos a la funcion los parametros que pide y la llamamos
	for (int i = 0; i < 6; i++)//Imprimimos 
	{
		cout <<" "<< Arreglo[i] <<" ";
	}
	cin.get();
	
}
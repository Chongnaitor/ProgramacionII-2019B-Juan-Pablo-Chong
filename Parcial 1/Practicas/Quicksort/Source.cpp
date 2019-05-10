#include <iostream>
using namespace std;
void QuickSort(int *Arreglo, int Mayor, int Menor)//Establecemos los parametros de la funcion
{
	int i = Mayor;//Una variable con la posicion mas alta del arreglo
	int j = Menor;//Una variable con la posicion mas pequeña del arreglo
	int Pivote = Arreglo[(i + j) / 2];//Creamos la posicion del medio sumando las dos variables y dividiendolas entre dos
	int temp;//Una variable para cambiar 

	while (i <= j)//Establecemos que mientrar la pocion sea menor o igual a la mayor el ciclo debe seguir
	{
		while (Arreglo[i] < Pivote)//Recorremos su el elemento es menor a el elemento que esta establecido como pivote
			i++;//Aumentamos el iterador si se cumple la condicion
		while (Arreglo[j] > Pivote)//Lo mismo que antes
			j--;
		if (i <= j)//Establecemos una condicion para cambiar la posicion
		{
			temp = Arreglo[i];//Establecemos el numero de la posicion uno en la variable temporal
			Arreglo[i] = Arreglo[j];//Asignamos el de la posicion incial en la segunda posicion
			Arreglo[j] = temp;//Establecemos el numero de la segunda posicion en la primera
			i++;//Iteramos hacia el centro del arreglo
			j--;
		}
	}
	if (j > Mayor)//Establecemos un nuevo numero para el  nuevo pivote
		QuickSort(Arreglo, Mayor, j);
	if (i < Menor)
		QuickSort(Arreglo, i, Menor);
}

int main()
{

	int Arreglo[5] = {5,4,8,2,4};
	QuickSort(Arreglo, 0, 4);
	for (int i = 0; i < 5; i++)
	{

		cout << Arreglo[i]<<" ";

	}
	cin.get();


}
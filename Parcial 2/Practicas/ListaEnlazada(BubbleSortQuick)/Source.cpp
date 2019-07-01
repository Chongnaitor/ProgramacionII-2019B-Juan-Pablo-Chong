#include<iostream>
#include"Nodo.h"
#include"ListaEnlazada.h"
void ImprimirLista(Nodo*start)
{
	Nodo*temp = start;
	std::cout << std::endl;
	while (temp != nullptr)
	{
		std::cout << temp->Edad << " "<<temp->Nombre;
		temp = temp->Siguiente;
	}
}
void BubbleSort(Nodo *start)
{
	Nodo *ptr1;
	Nodo *lptr = nullptr;

	
	if (start == nullptr)
	{
		return;
	}
		

	else
	{
		ptr1 = start;

		while (ptr1->Siguiente != lptr)
		{
			if (ptr1->Edad > ptr1->Siguiente->Edad)
			{
				std::swap(ptr1->Edad, ptr1->Siguiente->Edad);
			}

			ptr1 = ptr1->Siguiente;
		}
		lptr = ptr1;
	} 
}
Nodo UltimoNodo(Nodo *start)
{
	while (start && start->Siguiente)
	{
		start = start->Siguiente;
	}
		
	return *start;
}
void Quicksort(Nodo *start,int Mayor)
{
		int i = Mayor;//Una variable con la posicion mas alta del arreglo
		int j = 0;//Una variable con la posicion mas pequeña del arreglo
		int Pivote = Mayor/2;//Creamos la posicion del medio sumando las dos variables y dividiendolas entre dos
		Nodo temp;//Una variable para cambiar 

		while (j <= i)//Establecemos que mientrar la pocion sea menor o igual a la mayor el ciclo debe seguir
		{
			while (start->Edad < Pivote)//Recorremos su el elemento es menor a el elemento que esta establecido como pivote
				i++;//Aumentamos el iterador si se cumple la condicion
			while (start->Edad > Pivote)//Lo mismo que antes
				j--;
			if (i <= j)//Establecemos una condicion para cambiar la posicion
			{
				temp = start->Edad;//Establecemos el numero de la posicion uno en la variable temporal
				start->Edad = start->Siguiente->Edad;//Asignamos el de la posicion incial en la segunda posicion
				start->Edad = temp.Edad;//Establecemos el numero de la segunda posicion en la primera
				i++;//Iteramos hacia el centro del arreglo
				j--;
			}
		}
		if (j > Mayor)
		{
			//Establecemos un nuevo numero para el  nuevo pivote
			Quicksort(start, j);
		}
		if (i <j)
		{

			Quicksort(start, i);
		}
	




}
int main()
{
	ListaEnlazada VamosADarle;
	int CantidadDeNodos;
	int numero;
	Nodo*Inicio = nullptr;
	std::cout << "Pon cuantos nodos quieres:" << std::endl;
	std::cin >> CantidadDeNodos;
	for (int i = 0; i < CantidadDeNodos; i++)
	{
		std::cout << "Inserta el numero"<<std::endl;
		std::cin >> numero;
		Inicio = new Nodo(numero);
		VamosADarle.InsertarNodoInicial(Inicio);

	}
	ImprimirLista(Inicio);
	std::cout<<std::endl << "Asi queda sin bubblesort " << std::endl;
	BubbleSort(Inicio);
	std::cout << std::endl << "Asi queda con bubblesort " << std::endl;
	ImprimirLista(Inicio);
	
	std::cin.ignore();
	std::cin.get();

}


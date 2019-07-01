#pragma once
#include"Nodo.h"
class ListaEnlazada
{
public:
	ListaEnlazada() {};
	Nodo*Inicio = nullptr;
	Nodo*Final = nullptr;
	void InsertarNodo(Nodo*NuevoNodo)
	{

		if (Inicio == nullptr)
		{
			Inicio = NuevoNodo;
		}
		else
		{
			Inicio->LlenarNodo(NuevoNodo);
		}
		std::cout << "Nodo ingresado\n";
	}
	void InsertarNodoInicial(Nodo*NuevoNodo)
	{
		if (Inicio == nullptr)
		{
			Inicio = NuevoNodo;
			Final = Inicio;
		}
		else
		{
			Nodo*Temporal = Inicio;
			Inicio = NuevoNodo;
			Inicio->Siguiente = Temporal;
			Temporal->Anterior = Inicio;

		}
		std::cout << "Nodo ingresado\n";
	}
	void InsertarNodoFinal(Nodo*NuevoNodo)
	{
		if (Final == nullptr)
		{
			Final = NuevoNodo;
			Inicio = Final;
		}
		else
		{
			Nodo*Temporal = Final;
			Final = NuevoNodo;
			Final->Anterior = Temporal;
			Temporal->Siguiente = Final;
		}
		std::cout << "Nodo ingresado\n";



	}
};


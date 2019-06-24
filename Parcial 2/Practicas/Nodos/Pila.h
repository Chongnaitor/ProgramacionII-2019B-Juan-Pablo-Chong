#pragma once
#include <vector>
#include <iostream>
#include"Nodo.h"
class Pila
{
public:
	Pila(){};
	~Pila(){};

	Nodo*Primero= nullptr;
	Nodo*Ultimo=nullptr;
	void InsertarNodo()
	{
		std::string TempNombre;
		int TempEdad;
		std::cout << "Inserte nombre y edad\n";
		std::cin >> TempNombre;
		std::cin >> TempEdad;
		Nodo * NuevoNodo = new Nodo(TempEdad, TempNombre);
		if (Primero != nullptr)
		{
			Primero = NuevoNodo;
			Primero->SiguientePuntero = nullptr;
			Ultimo = NuevoNodo;
		}
		else
		{
			Primero = NuevoNodo;
		}
		std::cout << "Nodo ingresado\n";
	}
	void ImprimirPila()
	{
		Nodo*Actual = new Nodo;
		if (Primero != nullptr)
		{
			while (Actual != nullptr)
			{

				std::cout << Actual->Edad << " " << Actual->Nombre << "\n";
				Actual = Actual->SiguientePuntero;
			}
		}
		else
		{
			std::cout << "Lista vacia\n";
		}
	}
};


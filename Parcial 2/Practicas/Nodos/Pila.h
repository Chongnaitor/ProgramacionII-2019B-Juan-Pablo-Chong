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

	void InsertarNodo(Nodo*NuevoNodo)
	{
		
		if (Primero == nullptr)
		{
			Primero = NuevoNodo;
		}
		else
		{
			Primero->LlenarNodo(NuevoNodo);
		}
		std::cout << "Nodo ingresado\n";
	}
	void ImprimirPila()
	{
		if (Primero != nullptr)
		{
			Primero->Print();
		}
	}

	void Destruir()
	{
		delete Primero;
	}
};


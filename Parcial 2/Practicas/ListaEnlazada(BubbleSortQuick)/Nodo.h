#pragma once
#include <string>
#include<iostream>
class Nodo
{
public:
	Nodo() {};
	~Nodo() {};
	void Print();
	int Edad;
	std::string Nombre;
	Nodo*Siguiente = nullptr;
	Nodo*Anterior = nullptr;

	void LlenarNodo(Nodo*&Info)
	{
		if (Siguiente == nullptr)
		{
			Siguiente = Info;
		}
		else
		{
			Siguiente->LlenarNodo(Info);
		}
	}

	Nodo(int Edad_m)
	{
		Edad = Edad_m; 

	}

};



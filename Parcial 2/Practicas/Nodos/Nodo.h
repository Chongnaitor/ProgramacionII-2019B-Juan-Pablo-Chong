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
	Nodo*SiguienteNodo;

	void LlenarNodo(Nodo*&Info)
	{
		if (SiguienteNodo == nullptr)
		{
			SiguienteNodo = Info;
		}
		else
		{
			SiguienteNodo->LlenarNodo(Info);
		}
	}

	Nodo(int Edad_m, std::string Nombre_m)
	{
		Edad = Edad_m;  Nombre = Nombre_m;
	}

};

#pragma once
#include <string>
#include<iostream>
class Nodo
{
public:
	Nodo() {};
	~Nodo() {};
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
	void Print()
	{


		if (SiguienteNodo != nullptr)
		{
			std::cout << "Ya no hay nada" << std::endl;
		}
		std::cout << SiguienteNodo->Edad << std::endl;
		std::cout << SiguienteNodo->Nombre << std::endl;

	}

	Nodo(int Edad_m, std::string Nombre_m)
	{
		Edad = Edad_m;  Nombre = Nombre_m;
	}

};
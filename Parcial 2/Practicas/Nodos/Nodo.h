#pragma once
#include <string>
#include<iostream>
class Nodo
{
public:
	Nodo() {};
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
		std::cout << Nombre << " ";
		std::cout << Edad << std::endl;
		if(SiguienteNodo!=nullptr)
		{
			SiguienteNodo->Print();
		}
	}
	~Nodo()
	{
		if (SiguienteNodo != nullptr)
		{
			delete SiguienteNodo;
		}
	}
	Nodo(int Edad_m, std::string Nombre_m)
	{
		Edad = Edad_m;  Nombre = Nombre_m;
		SiguienteNodo = nullptr;
	}
};

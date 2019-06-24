#pragma once
#include <string>
class Nodo
{
public:
	Nodo() {};
	~Nodo() {};
	int Edad;
	std::string Nombre;
	Nodo*SiguientePuntero;
	Nodo(int Edad_m, std::string Nombre_m)
	{
		Edad = Edad_m;  Nombre = Nombre_m;
	}

};


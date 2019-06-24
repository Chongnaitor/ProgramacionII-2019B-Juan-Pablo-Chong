#include "Pila.h"
#include<iostream>
#include <string>
int main()
{
	Pila*MiPila=new Pila();
	std::string TempNombre;
	int TempEdad;
	std::cout << "Inserte nombre y edad\n";

	for (int i = 0; i < 4; i++)
	{
		std::cin >> TempNombre;
		std::cin >> TempEdad;
		Nodo*NuevoNodo = new Nodo(TempEdad, TempNombre);
		MiPila->InsertarNodo(*&NuevoNodo);
	}

	std::cout << "Nigger" << std::endl;
	delete MiPila;
	std::cin.ignore();
	std::cin.get();
}
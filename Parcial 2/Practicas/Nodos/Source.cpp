#include "Pila.h"
#include<iostream>
#include <string>
int main()
{
	Pila MiPila;
	MiPila.InsertarNodo();
	MiPila.InsertarNodo();
	MiPila.ImprimirPila();
	std::cin.ignore();
	std::cin.get();
}
#include<iostream>
#include"Nodo.h"
#include "ListaEnlzada.h"

void VamosACrear()
{
	ListaEnlazada*MiEnlace = new ListaEnlazada();
	std::string TempNombre;
	int TempEdad;
	std::cout << "Inserte nombre y edad\n";
	std::cout << "Ingresa la cantidad de nodos que quieras" << std::endl;
	int Ayuda;
	std::cin >> Ayuda;
	for (int i = 0; i < Ayuda; i++)
	{
		std::cout << "Ingresa nodo:" << std::endl;
		std::cin >> TempNombre;
		std::cin >> TempEdad;
		Nodo*NuevoNodo = new Nodo(TempEdad, TempNombre,i);
		MiEnlace->InsertarNodo(*&NuevoNodo);
	}
	std::cout << "Neah" << std::endl;
	delete MiEnlace;
	std::cin.ignore();
	std::cin.get();
}
int main()
{
	VamosACrear();

}
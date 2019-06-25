#include "Pila.h"
#include "Cola.h"
#include<iostream>
#include <string>
void VamosACrearUnaPila()
{
	Pila*MiPila = new Pila();
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
		Nodo*NuevoNodo = new Nodo(TempEdad, TempNombre);
		MiPila->InsertarNodo(*&NuevoNodo);
	}
	MiPila->ImprimirPila();
	MiPila->Destruir();
	std::cout << "Neah" << std::endl;
	delete MiPila;
	std::cin.ignore();
	std::cin.get();
}
void VamosACrearUnaCola()
{
	Cola*MiCola = new Cola();
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
		Nodo*NuevoNodo = new Nodo(TempEdad, TempNombre);
		MiCola->InsertarNodo(*&NuevoNodo);
	}
	MiCola->ImprimirCola();
	MiCola->DestruiirUltimoNodo();
	std::cout << "Neah" << std::endl;
	delete MiCola;
	std::cin.ignore();
	std::cin.get();


}
int main()
{
	std::cout << "Bienvenido a el menu de pilas y colas 1 si quieres cola, 2 si quieres pila" << std::endl;
	int Decision;
	std::cin >> Decision;
	switch (Decision)
	{
		case 1:
		{
			VamosACrearUnaPila();
		}
		case 2:
		{
			VamosACrearUnaCola();
		}
		default:
		{
			std::cout << "Esa No es una opcion" << std::endl;
			main();
		}
	}
	std::cin.ignore();
	std::cin.get();

	
}
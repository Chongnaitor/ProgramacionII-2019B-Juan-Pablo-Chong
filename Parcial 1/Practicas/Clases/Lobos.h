//Los comentarios de todas las clases son lo mismo, ver ejemplo en Leones.h
#pragma once
#include "Mamiferos.h"
#include<iostream>
#include<string>
class Lobos :
	public Mamiferos
{
public:
	Lobos() {};
	~Lobos() {};
	std::string Nombre;
	bool Macho;
	int Patas;
	int Hijos;
	int LobosMuertos;
	int Alimentar;
	Lobos(std::string Nombre_c,int Patas_c, int Hijos_m, int LobosMuertos_m, bool Macho_m, int Alimentar_m)
		:Nombre(Nombre_c),Patas(Patas_c), Hijos(Hijos_m), LobosMuertos(LobosMuertos_m), Macho(Macho_m), Alimentar(Alimentar_m) {}
	void TenerHijos(Lobos&Lobo, Lobos&Loba)
	{
		if (Loba.Macho != true)
		{
			std::cout << Lobo.Nombre << " ha tenido un hijo con " << Loba.Nombre << std::endl;
		}
	}
	int Comer(Lobos&Lobo)
	{
		if (Lobo.Alimentar > 100)
		{
			std::cout << "Tu Lobo ya esta lleno" << std::endl;
		}
		else
		{
			std::cout << "Ya esta lleno" << std::endl;
		}
	}


};


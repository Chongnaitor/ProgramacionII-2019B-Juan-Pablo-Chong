//Los comentarios de todas las clases son lo mismo, ver ejemplo en Leones.h
#pragma once
#include <iostream>
#include "Viviparos.h"
class Tucanes :
	public Viviparos
{
public:
	Tucanes() {};
	~Tucanes() {};
	int Alas;
	int Comida;
	bool Volador;
	bool Macho;
	Tucanes(int Alas_c,int Comida_c,bool Volador_c,bool Macho_c)
	 :Alas(Alas_c),Comida(Comida_c),Volador(Volador_c),Macho(Macho_c){}
	void EscaparVolando(Tucanes&Tucan)
	{
		std::cout << " Tu Tucan se escapo volando..." << std::endl;
	}
	void TenerHijos(Tucanes&Tucan)
	{
		if (Tucan.Macho != true)
		{
			std::cout << "Tu Tucan ha puesto un huevo" << std::endl;
		}
	}
};
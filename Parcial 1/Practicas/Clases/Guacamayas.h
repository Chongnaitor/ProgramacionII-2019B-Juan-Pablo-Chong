//Los comentarios de todas las clases son lo mismo, ver ejemplo en Leones.h
#pragma once
#include "Viviparos.h"
#include <iostream>
class Guacamayas :
	public Viviparos
{
public:
	Guacamayas() {};
	~Guacamayas() {};
	void EscaparVolando(){}
	
	void Dormir() {}//Nuevas funciones virtualizadas que heredaran 
	int Comer(){
		return -1;
	}
	int Jaula(){
		return -1;
	}
	void TenerHijos(){}
	void Ordenar(){}
	int Alas;
	int Comida;
	bool Volador;
	bool Macho;
	Guacamayas(std::string Nombre_c,int Alas_c, int Comida_c, bool Volador_c, bool Macho_c)
		:Alas(Alas_c), Comida(Comida_c), Volador(Volador_c), Macho(Macho_c) {Nombre = Nombre_c;}
	void EscaparVolando(Guacamayas&Guacamaya)
	{
		std::cout << " Tu Guacamaya se escapo volando..." << std::endl;
	}
	void TenerHijos(Guacamayas&Guacamaya)
	{
		if (Guacamaya.Macho != true)
		{
			std::cout << "Tu Guacamaya ha puesto un huevo" << std::endl;
		}
	}
};


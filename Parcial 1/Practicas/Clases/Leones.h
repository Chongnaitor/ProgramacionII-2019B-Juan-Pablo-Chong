#pragma once
#include "Mamiferos.h"//Importamos librerias
class Leones :
	public Mamiferos //Creamos una clase leones que herede de mamiferos
{
public:
	Leones() {};//Constructor default
	~Leones() {};//Destructor
				 //Miembros de la clase
	
	bool Macho;
	int Patas;
	int Hijos;
	int LeonesMuertos;
	int Alimentar;
	Leones(int Patas_c, int Hijos_m, int LeonesMuertos_m, bool Macho_m, int Alimentar_m, std::string Animal_m)//Constructor mas especifico
		:Patas(Patas_c), Hijos(Hijos_m), LeonesMuertos(LeonesMuertos_m), Macho(Macho_m), Alimentar(Alimentar_m) {Nombre = Animal_m;}
	void TenerHijos(Leones&Leon, Leones&Leona)
	{
		if (Leona.Macho != true)
		{
			std::cout << Leon.Nombre << " ha tenido un hijo con " << Leona.Nombre <<std::endl;
		}
	}//Funciones heredadas con cuerpo basico
	int Comer(Leones&Leon)
	{
		if (Leon.Alimentar > 100)
		{
			std::cout << "Tu leon ya esta lleno"<<std::endl;
		}
		else
		{
			std::cout << "Ya esta lleno" << std::endl;
		}
	}

};
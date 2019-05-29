#pragma once
#include <iostream>
#include <string>
class Zoologico
{//Clase Base
public://Hacemos las siguientes funciones de caracter publico para que las clases heredadas puedan acceder a ella
	enum HEALTH {
		Good,
		Bad,
		Critical
	};
	virtual void Dormir() = 0;//Nuevas funciones virtualizadas que heredaran 
	virtual int Comer() = 0;
	virtual int Jaula() = 0;
	virtual void TenerHijos() = 0;
	virtual void Ordenar()=0;
	std::string Nombre;
	HEALTH health;
	char age;
	bool operator>(Zoologico&Lmao)
	{
		std::cout << (Nombre < Lmao.Nombre ) << ": " << Nombre << "    " << Lmao.Nombre << std::endl;
		if (Nombre > Lmao.Nombre)// 8 < 20 : TRUE - 8 < 6 : 
		{
			return true;
		}
		return false;
	}

}; 
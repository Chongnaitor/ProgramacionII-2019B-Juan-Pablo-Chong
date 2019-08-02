#pragma once
#include<string>
using std::string;
struct Nodo {
	int Dato;
	string Nombre;
	string Apellido;
	Nodo *izquierda;
	Nodo *derecha;
	bool operator<(Nodo*raiz)
	{
		if (raiz->Apellido == this->Apellido)
		{
			if (raiz->Nombre == this->Nombre)
			{
				return raiz->Dato < this->Dato;
			}
			else
			{
				 return raiz->Nombre < this->Nombre;
			}

		}
		return raiz->Apellido < this->Apellido;
	}
	bool operator>(Nodo*raiz)
	{
		if (raiz->Apellido == this->Apellido)
		{
			if (raiz->Nombre == this->Nombre)
			{
				return raiz->Dato > this->Dato;
			}
			else
			{
				return raiz->Nombre > this->Nombre;
			}

		}
		return raiz->Apellido > this->Apellido;
	}
};
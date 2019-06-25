#pragma once
#include"Nodo.h"
class Cola
{
	public:
		Cola() {};
		~Cola() {};
		Nodo*Primero = nullptr;
		void InsertarNodo(Nodo*NuevoNodo)
		{

			if (Primero == nullptr)
			{
				Primero = NuevoNodo;
			}
			else
			{
				Primero->LlenarNodo(NuevoNodo);
			}
			std::cout << "Nodo ingresado\n";
		}
		void ImprimirCola()
		{
			if (Primero != nullptr)
			{
				Primero->Print();
			}
		}

		Nodo DestruiirUltimoNodo()
		{
			DestruiirUltimoNodo;
		}
};


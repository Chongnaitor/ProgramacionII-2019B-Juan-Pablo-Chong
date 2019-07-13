#include<iostream>
#include<Windows.h>
using std::cin;
using std::cout;
using std::endl;
#include"List.h"
#include"Node.h"
void ListaSE()
{
	cout << "Lmao";
	cin.get();
}
void ListaDE()
{

	cout << "LASLDALSDLALSD";
	cin.get();

}

void Menu()
{
	cout << "Bienvenido a la lista de nodos " << endl;
	cout << "Si quieres entrar a una lista simplemente enlazada presiona 1" << endl;
	cout << "Si quieres entrar a una lista doblemente enlazada presiona 2" << endl;
	int decision;
	cin >> decision;
	switch (decision)
	{
	case 1:
	    {
		if (decision == 1)
			{
			ListaSE();
			}
	    	
	    }
	case 2:
	    {
		if (decision == 2)
		{
			ListaDE();
		}

	    }
	case 3:
	     {
		if(decision)
		    Menu();
	     }
	}
}






int main() 
{
	Menu();
	cin.get();
	cin.ignore();
	return 0;
}
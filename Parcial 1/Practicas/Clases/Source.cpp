#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Zoologico {//Clase Base
public:
	virtual void Saludo()//Solo crea un metodo de tipo abstracta para saludar
	{
		cout << "Bienvenido al zoologico" << endl;
	}
};

class Mamiferos:public Zoologico //Clase heredada de Zoologico
{
public:
	string Especie;//Miembros de la clase que representan a los animales
	int Patas;
	int Peso;
	bool Carnivoros;
	bool Hervivoros;
	bool Omnivoros;
	Mamiferos();
	Mamiferos(string Especie_m,int Patas_m,int Peso_m,bool Carnivoro_m, bool Hervivoros, bool Omnivoros)//Constructor 
		:Especie(Especie_m), Patas(Patas_m), Peso(Peso_m), Carnivoros(Carnivoro_m),Hervivoros(Hervivoros),Omnivoros(Omnivoros){}
	Mamiferos CreadorDeAnimales()//Un metodo para crear objetos de tipo mamifero de una forma interactiva
	{
		string Especie;//Variables que vamos a usar para posterioremewnte meter al constructor
		int Patas;
		int Peso;
		bool Carnivoros;
		bool Hervivoros;
		bool Omnivoros;
		char Yikes;//Esto es para despues usar en un switch
		cout << "Agrega el tipo de especie que es: " << endl;//inputs del usuario
		cin >> Especie;
		cout << "Ahora el numero de patas que tienen: " << endl;
		cin >> Patas;
		cout << "Ahora el peso: " << endl;
		cin >> Peso;
		cout << "Escribe C si es carnivoro, H si es herviboro, O si es omnivoro " << endl;
		cin >> Yikes;
		switch (Yikes)
		{
		case 1:
		{
			if (Yikes == 'C' || 'c')
			{
				Carnivoros = true;
				Hervivoros = false;
				Omnivoros = false;
				break;
			}
		}
		case 2:
		{
			if (Yikes == 'H' || 'h')
			{
				Carnivoros = false;
				Hervivoros = true;
				Omnivoros = false;
				break;
			}

		}
		case 3:
		{
			if (Yikes == 'O' || 'o')
			{
				Carnivoros = false;
				Hervivoros = false;
				Omnivoros = true;
				break;
			}

		}
		default:
		{
			cout << "Eso no es ninguna de las anteriores" << endl;
			CreadorDeAnimales();
		}
		}
		Mamiferos NuevoAnimal(Especie, Patas, Peso, Carnivoros, Hervivoros, Omnivoros);//Creamos bjeto
		return NuevoAnimal;
	}
	virtual void CrearMamifero()
	{
		vector<Mamiferos>ListaDeMamiferos{};
		cout << "Bienvenido a tu Zoolgico, es hora de que agregues animales mamiferos" << endl;
		bool YaNoMasANimales=false;
		while (YaNoMasANimales != true)
		{
			Mamiferos NuevoMamifero = CreadorDeAnimales();
			ListaDeMamiferos.push_back(NuevoMamifero);
			cout << "Quieres crear mas animales?" << endl;
			string Decision;
			cin >> Decision;
			if (Decision == "Si" || Decision == "si")
			{
				YaNoMasANimales = false;
			}
			else
			{
				YaNoMasANimales = true;
			}

		}

	}
};


int main()
{
	Zoologico Prueba;
	Prueba.Saludo();
	Mamiferos CrearMamifero();
	cin.get();
}

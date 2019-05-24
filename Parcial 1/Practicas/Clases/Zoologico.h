class Zoologico
{//Clase Base
public://Hacemos las siguientes funciones de caracter publico para que las clases heredadas puedan acceder a ella
	virtual void Dormir() = 0;//Nuevas funciones virtualizadas que heredaran 
	virtual int Comer() = 0;
	virtual int Jaula() = 0;
	virtual void TenerHijos() = 0;
}; 

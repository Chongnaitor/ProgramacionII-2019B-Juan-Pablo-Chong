//Clase heredada de Zoologico y clase base para los pajaros
#pragma once
#include "Zoologico.h"
class Viviparos :
	public Zoologico
{
public:
	virtual void EscaparVolando()= 0;

};


#include "List.h"
#include"Node.h"

//////////////////////////////////////////////////////////////////////////
void SingleList::push(SingleNode * nodo)
{
	if ((*start) != nullptr)
	{
		SingleNode*Temp = *start;
		SingleNode*Prev = nullptr;
		while (Temp != nullptr)
		{
			Prev = Temp;
			Temp = Temp->next;
		}
		Prev->next = nodo;
	}
	else
	{
		*start = nodo;
	}
	s++;
}//

void SingleList::push(SingleNode * _push, unsigned int _position)
{
	unsigned int cont = 0;
	if ((*start) != nullptr)
	{
		SingleNode *temp = *start;
		SingleNode *prev = nullptr;

		while (cont < _position)
		{
			prev = temp;
			temp = temp->next;
			cont++;
		}
		if (cont == _position)
		{
			prev->next = _push;
			_push->next = *start;
		}
	}
	s++;
	
}//

SingleNode * SingleList::pull()
{
	if ((*start) != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		return Temp;
	}
	else
	{
		return nullptr;
	}
	s--;
}////

SingleNode *SingleList::pull(unsigned int _position)
{
	if (_position <= s)
	{
		if ((*start) != nullptr)
		{
			SingleNode * temp = *start;
			SingleNode * prev = nullptr;
			unsigned int cont = 0;

			while (cont < _position)
			{
				prev = temp;
				temp = temp->next;
				cont++;
			}
			if (cont == _position)
			{
				prev->next = temp->next;
				temp->next = nullptr;
				return temp;
			}
		}
		else
		{
			return nullptr;
		}
		s--;
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
	}
}

void SingleList::remove()
{
	if ((*start) != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		delete Temp;
	}
	else
	{
		std::cout << "No hay valores que eliminar" << std::endl;
	}
	s--;
}


void SingleList::clear()
{
	if (*(start) != nullptr)
	{
		delete*start;
	}
}

unsigned int SingleList::size()
{
	return 0;
}

std::ostream & operator<<(std::ostream & out, SingleList & nodo)
{
	return out << **nodo.start;
}

SingleList::~SingleList()
{
}
/////////////////////////////////////////////////////////////////////////////


std::ostream & operator<<(std::ostream &out, DoubleList &dnodo)
{
	return out << **dnodo.start;

}

void DoubleList::push(DoubleNode * N)
{
	if ((*start) != nullptr)
	{
		DoubleNode * Temp = *start;

		while (Temp->next != nullptr)
		{
			Temp->prev = Temp;
			Temp->next = Temp->next->next;
			Temp = Temp->next;

		}
		Temp->next = N;
		N->prev = Temp;
		N->next = nullptr;

	}
	else
	{
		*start = N;
	}
	s++;
}

//Push con posición
void DoubleList::push(DoubleNode * _node, unsigned int _position)
{
	if (_position < s)
	{
		if ((*start) != nullptr)
		{
			unsigned int cont = 0;
			DoubleNode * temp = *start;

			while (cont < _position)
			{
				temp->prev = temp;
				temp->next = temp->next->next;
				temp = temp->next;
			}
			if (cont == _position)
			{
				temp->next->prev = _node;
				_node->next = temp->next;
				temp->next = _node;
				_node->prev = temp;
			}
		}
		else
		{
			*start = _node;
		}
		s++;
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
	}
}

DoubleNode * DoubleList::pull()
{
	if ((*start) != nullptr)
	{
		DoubleNode * Temp = *start;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Temp = Temp->next;
			Cont++;
		}
		Temp->prev->next = nullptr;
		Temp->prev = nullptr;
		s--;
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

DoubleNode * DoubleList::pull(unsigned int position)
{
	if (start != nullptr)
	{
		DoubleNode*Temp=*start;
		int cont=0;
		while (cont != position)
		{
			Temp = Temp->next;
			cont++;
		}
		if (cont == position)
		{
			Temp->prev->next = Temp->next;
			Temp->next->prev = Temp->prev;
			Temp->next = nullptr;
			Temp->prev = nullptr;
			s--;

		}
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

void DoubleList::remove()
{
	if ((*start) != nullptr)
	{
		DoubleNode * temp = *start;
		while (temp->next != nullptr)
		{
			temp->prev = temp;
			temp = temp->next;
			temp->next = temp->next->next;
		}
		temp->prev->next = nullptr;
		temp->prev = nullptr;
		delete temp;
		s--;
	}
	else
	{
		std::cout << "No hay valores que eliminar" << std::endl;
	}
}

void DoubleList::remove(unsigned int Pos)
{
	if (Pos < s)
	{
		if (*start != nullptr)
		{
			DoubleNode * Temp = *start;
			unsigned int Cont = 0;
			while (Cont < Pos)
			{
				Temp->prev = Temp;
				Temp = Temp->next;
				Temp->next = Temp->next->next;
			}
			Temp->prev->next = nullptr;
			Temp->prev = nullptr;
			delete Temp;
			s--;
		}
		else
		{
			std::cout << "No hay valores a eliminar ya que la lista esta vacia.\n";
		}
	}
	else
	{
		std::cout << "La posicion especificada es invalida.\n";
	}
}


void DoubleList::clear()
{
	if (*(start) != nullptr)
	{
		delete*start;
	}
}

unsigned int DoubleList::size()
{
	return 0;
}

DoubleList::~DoubleList()
{

}


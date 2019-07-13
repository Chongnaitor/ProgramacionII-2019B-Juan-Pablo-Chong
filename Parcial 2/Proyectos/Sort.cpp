#include "Sort.h"
#include "List.h"
#include "Node.h"

SingleNode * Sort::swap(SingleNode *N1, SingleNode *N2)
{
	SingleNode*temp = N1;
	N1 = N2;
	N2 = temp;

}

DoubleNode * Sort::swap(DoubleNode *N1, DoubleNode *N2)
{
	return nullptr;
}

void Sort::bubble(SingleList &)
{
}

void Sort::bubble(DoubleList &)
{
}

void Sort::quick(SingleList &Lmao)
{
	
	unsigned int pivote = Lmao.s;





}







void Sort::quick(DoubleList &)
{
}

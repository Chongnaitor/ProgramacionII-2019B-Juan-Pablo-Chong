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

SingleNode * Sort::swap(SingleNode * a, SingleNode * b) {
	a->next = b->next;
	b->next = a;
	return b;
}

/* Function to sort a single linked list using bubble sort */
void Sort::bubble(SingleList&start) {

	SingleNode ** iter;
	SingleNode * a, *b;
	unsigned int size = start.size();
	bool swapped = false;

	for (unsigned int i = 0; i < size; i++) {
		iter = start.start;
		for (unsigned int j = 0; j < size - i - 1; j++) {
			a = *iter;
			b = a->next;

			if (*a > *b) {
				swapped = true;
				*iter = swap(a, b);
			}

			iter = &(*iter)->next;
		}
		if (!swapped)
			break;
	}
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

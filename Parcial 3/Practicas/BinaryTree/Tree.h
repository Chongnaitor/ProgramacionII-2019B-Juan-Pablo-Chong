#pragma once
#include "Node.h"
class BinaryTree {
	
public:
	BinaryTree();
	~BinaryTree();
	void postordenado_print(Nodo *rama);
	void preordenado_print(Nodo *rama);
	void insert(int Dato, string Nombre, string Apellido);
	void destruir_tree();
	void enorden_print();
	void postordenado_print();
	void preordenado_print();
	void destruir_tree(Nodo *rama);
	void insert(int Dato, string Nombre, string Apellido, Nodo *rama);
	void enorden_print(Nodo *rama);
	void usuarioInsert(BinaryTree *raiz);
	Nodo*ValorMinimo(Nodo*raiz);
	Nodo*BorrarNodo(Nodo*raiz, string Apellido);
	Nodo *raiz;
	
};

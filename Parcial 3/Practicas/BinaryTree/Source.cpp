#include <iostream>
#include<string>
using namespace std;

struct Nodo {
	int Dato;
	string Nombre;
	string Apellido;
	Nodo *izquierda;
	Nodo *derecha;
};

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

	Nodo *raiz;
};

BinaryTree::BinaryTree() {
	raiz = nullptr;
}

BinaryTree::~BinaryTree() {
	destruir_tree();
}

void BinaryTree::destruir_tree(Nodo*rama) {
	if (rama != nullptr) {
		destruir_tree(rama->izquierda);
		destruir_tree(rama->derecha);
		delete rama;
	}
}

void BinaryTree::insert(int Dato, string Nombre, string Apellido, Nodo*rama)
{


	if (rama->izquierda != nullptr) {
		insert(Dato, Nombre, Apellido, rama->izquierda);
	}
	else {
		rama->izquierda = new Nodo;
		rama->izquierda->Dato = Dato;
		rama->izquierda->Nombre = Nombre;
		rama->izquierda->Apellido = Apellido;
		rama->izquierda->izquierda = nullptr;
		rama->izquierda->derecha = nullptr;
	}


	if (rama->derecha != nullptr) {
		insert(Dato, Nombre, Apellido, rama->derecha);
	}
	else {
		rama->derecha = new Nodo;
		rama->derecha->Dato = Dato;
		rama->derecha->Nombre = Nombre;
		rama->derecha->Apellido = Apellido;
		rama->derecha->derecha = nullptr;
		rama->derecha->izquierda = nullptr;
	}

}

void BinaryTree::insert(int Dato, string Nombre, string Apellido) {
	if (raiz != nullptr) {
		insert(Dato, Nombre, Apellido, raiz);
	}
	else {
		raiz = new Nodo;
		raiz->Dato = Dato;
		raiz->Nombre = Nombre;
		raiz->Apellido = Apellido;
		raiz->izquierda = nullptr;
		raiz->derecha = nullptr;
	}
}

void BinaryTree::destruir_tree() {
	destruir_tree(raiz);
}

void BinaryTree::enorden_print(Nodo*rama) {
	if (rama != nullptr) {
		enorden_print(rama->izquierda);
		cout << rama->Dato << "," << rama->Nombre << "," << rama->Apellido << ",";
		enorden_print(rama->derecha);
	}
}

void BinaryTree::enorden_print() {
	enorden_print(raiz);
	cout << "\n";
}

void BinaryTree::postordenado_print() {
	postordenado_print(raiz);
	cout << "\n";
}

void BinaryTree::postordenado_print(Nodo*rama) {
	if (rama != nullptr) {
		enorden_print(rama->izquierda);
		enorden_print(rama->derecha);
		cout << rama->Dato << "," << rama->Nombre << "," << rama->Apellido << ",";
	}
}

void BinaryTree::preordenado_print() {
	preordenado_print(raiz);
	cout << "\n";
}

void BinaryTree::preordenado_print(Nodo*rama) {
	if (rama != nullptr) {
		cout << rama->Dato << ",";
		enorden_print(rama->izquierda);
		enorden_print(rama->derecha);
	}
}

int main() {

	BinaryTree *tree = new BinaryTree();


	int Dato;
	string temp;
	string temp2;
	int Ciclo = 0;
	cout << "Cuantos datos quieres meter" << endl;
	cin >> Ciclo;
	for (int i = 0; i < Ciclo; i++)
	{
		cout << "Inserte edad:" << endl;
		cin >> Dato;
		cout << "Escribe el nombre" << endl;
		cin >> temp;
		cout << "Escribe el apellido" << endl;
		cin >> temp2;
		tree->insert(Dato, temp, temp2);
		cout << "Dato ingresado" << endl;

	}
	tree->preordenado_print();
	tree->enorden_print();
	tree->postordenado_print();
	cin.ignore();
	cin.get();
	delete tree;

}
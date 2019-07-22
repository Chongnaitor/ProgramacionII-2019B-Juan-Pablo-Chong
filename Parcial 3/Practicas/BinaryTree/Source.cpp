
#include <iostream>

using namespace std;


struct Nodo {
	int Dato;

	Nodo *izquierda;
	Nodo *derecha;
};

class BinaryTree {
public:
	BinaryTree();
	~BinaryTree();

	void insert(int Dato);
	Nodo *buscar(int Dato);
	void destruir_tree();
	void enorden_print();
	void postordenado_print();
	void preordenado_print();
	void destruir_tree(Nodo *rama);
	void insert(int Dato, Nodo *rama);
	Nodo *buscar(int Dato, Nodo *rama);
	void enorden_print(Nodo *rama);
	void postordenado_print(Nodo *rama);
	void preordenado_print(Nodo *rama);

	Nodo *raiz;
};


BinaryTree::BinaryTree() {
	raiz = nullptr;
}

BinaryTree::~BinaryTree() {
	destruir_tree();
}

void BinaryTree::destruir_tree(Nodo *rama) {
	if (rama != nullptr) {
		destruir_tree(rama->izquierda);
		destruir_tree(rama->derecha);
		delete rama;
	}
}

void BinaryTree::insert(int Dato, Nodo *rama) {

	if (Dato < rama->Dato) {
		if (rama->izquierda != nullptr) {
			insert(Dato, rama->izquierda);
		}
		else {
			rama->izquierda = new Nodo;
			rama->izquierda->Dato = Dato;
			rama->izquierda->izquierda = nullptr;
			rama->izquierda->derecha = nullptr;
		}
	}
	else if (Dato >= rama->Dato) {
		if (rama->derecha != nullptr) {
			insert(Dato, rama->derecha);
		}
		else {
			rama->derecha = new Nodo;
			rama->derecha->Dato = Dato;
			rama->derecha->derecha = nullptr;
			rama->derecha->izquierda = nullptr;
		}
	}

}

void BinaryTree::insert(int Dato) {
	if (raiz != nullptr) {
		insert(Dato, raiz);
	}
	else {
		raiz = new Nodo;
		raiz->Dato = Dato;
		raiz->izquierda = nullptr;
		raiz->derecha = nullptr;
	}
}



void BinaryTree::destruir_tree() {
	destruir_tree(raiz);
}

void BinaryTree::enorden_print(Nodo *rama) {
	if (rama != nullptr) {
		enorden_print(rama->izquierda);
		cout << rama->Dato << ",";
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

void BinaryTree::postordenado_print(Nodo *rama) {
	if (rama != nullptr) {
		enorden_print(rama->izquierda);
		enorden_print(rama->derecha);
		cout << rama->Dato << ",";
	}
}

void BinaryTree::preordenado_print() {
	preordenado_print(raiz);
	cout << "\n";
}

void BinaryTree::preordenado_print(Nodo *rama) {
	if (rama != nullptr) {
		cout << rama->Dato << ",";
		enorden_print(rama->izquierda);
		enorden_print(rama->derecha);
	}
}

int main() {

	BinaryTree *tree = new BinaryTree();


	int Dato;
	int Ciclo = 0;
	cout << "Cuantos datos quieres meter" << endl;
	cin >> Ciclo;
	for (int i = 0; i < Ciclo; i++)
	{
		cout << "Inserte dato:" << endl;
		cin >> Dato;
		tree->insert(Dato);
		cout << "Dato ingresado" << endl;

	}
	tree->preordenado_print();
	tree->enorden_print();
	tree->postordenado_print();
	cin.ignore();
	cin.get();
	delete tree;

}
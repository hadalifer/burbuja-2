#include <iostream>
using namespace std;
void burbuja(int arreglo[], int tama�o);
void intercambiar(int& a, int& b);
void mostrar(int arreglo[], int tama�o);
int main() {
	int lista[10];
	for (int conta = 0; conta < 10; conta++) {
		cout << "esribe un numero\n";
		cin >> lista[conta];
		system("cls");
	}
	cout << "\n\nla lista desordenada: ";
	mostrar(lista, 10);
	burbuja(lista, 10);
	cout << "\n\nla lista ordenada es:";
	mostrar(lista, 10);

}
void intercambiar(int& a, int& b) {
	int nomas = b;
	b = a;
	a = nomas;
}
void burbuja(int arreglo[], int tama�o) {
	for (int conta = 0; conta < tama�o - 1; conta++)
		for (int j = 0; j < tama�o - 1; j++)
			if (arreglo[j] > arreglo[j + 1])
				intercambiar(arreglo[j], arreglo[j + 1]);
}
void mostrar(int arreglo[], int tama�o) {
	for (int conta = 0; conta < tama�o; conta++) {
		if (conta == 9) {
			cout << arreglo[conta];
		}
		else {
			cout << arreglo[conta] << " - ";
		}
	}
}

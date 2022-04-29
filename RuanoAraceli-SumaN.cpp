#include<iostream>
using namespace std;

int main() {
	// declaramos las variables//
	int n;
	int suma;
	int total;
	int x;
	// solicitamos la cantidad de numeros//
	cout << "ingresa el total de numeros" << endl;
	cin >> total;
	x = 1;
	suma = 0;
	//utilizamos un bucle para ingresar los valores//
	while (x<=total) {
		cout << "ingresa el numero" << x << endl;
		cin >> n;
		suma = suma+n;
		x = x+1;
	}
	cout << "la suma de los numeros es:" << suma << endl; // mostramos el resultado de la suma de los valores ingresados//
	return 0;
}
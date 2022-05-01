#include<iostream>
using namespace std;

int main() {
	// Primero declaramos las variables que vamos a utilizar//
	float cantidadcompra;
	int contador;
	float desc;
	float iva;
	float subtotal;
	float subtotalcompra;
	float totalcompra;
	float totaldesc;
	float totaliva;
	int totalproductos;
	float valordesc;
	float valoriva;
	float valorproducto;
	int x;
	cout << "Ingresar la cantidad de productos a comprar" << endl; //Le pedimos al usuario ingresar la cantidad total de productos//
	cin >> x;
	contador = 0;
	totaldesc = 0;
	totalproductos = 0;
	totalcompra = 0;
	totaliva = 0;
	// Llamamos un bucle para ingresar los productos y sus valores//
	while (contador<x) {
		cout << "Ingrese el valor del producto" << endl;
		cin >> valorproducto;
		cout << "Ingrese la cantidad de productos" << endl;
		cin >> cantidadcompra;
		subtotal = valorproducto*cantidadcompra;
		cout << "Ingrese el descuento" << endl;
		cin >> desc;
		valordesc = subtotal*desc/100;
		subtotalcompra = subtotal-valordesc;
		cout << "Ingrese el IVA" << endl;
		cin >> iva;
		valoriva = subtotal*iva/100;
		subtotalcompra = subtotal-valoriva;
		cout << "El descuento es:" << valordesc << endl;
		cout << "El subtotal es:" << subtotal << endl;
		cout << "El iva es:" << valoriva << endl;
		totalproductos = totalproductos+cantidadcompra;
		totaldesc = totaldesc+valordesc;
		totalcompra = totalcompra+subtotalcompra;
		totaliva = totaliva+valoriva;
		contador = contador+1;
	}
	//Estos seran los valores finales a mostrar//
	cout << "La cantidad de productos comprados es:" << totalproductos << endl;
	cout << "El total de descuento en la compra es:" << totaldesc << endl;
	cout << "El total de iva de la compra es:" << valoriva << endl;
	cout << "El total de la compra es:" << totalcompra << endl;
	return 0;
}


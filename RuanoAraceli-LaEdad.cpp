#include<iostream>
using namespace std;

int main() {
	//declaramos las variables//
	float diaact;
	float dianac;
	float edad;
	float fact;
	float fnac;
	float mesact;
	float mesnac;
	//pedimos al usuario que ingrese el a�o de nacimiento//
	cout << "Ingresar el a�o de nacimiento" << endl;
	cin >> fnac;
	//pedimos al usuario que ingrese el que nacio//
	cout << "ingresar el mes de nacimiento" << endl;
	cin >> mesnac;
	//pedimos al usuario que ingrese el dia en que nacio//
	cout << "Ingresar el dia de nacimiento" << endl;
	cin >> dianac;
	//pedimos al usuario que ingrese el a�o actual//
	cout << "Ingresar el a�o actual" << endl;
	cin >> fact;
	//pedimos que ingrese el mes actual//
	cout << "Ingresar el mes actual" << endl;
	cin >> mesact;
	//pedimos que ingrese el dia actual//
	cout << "Ingresar el dia actual" << endl;
	cin >> diaact;
	//para calcular la edad restamos el a�o actual con el a�o de nacimiento//
	edad = fact-fnac;
	//para calcular los dias que han pasado, multiplicamos la edad por los 12 meses del a�o//
	diaact = edad*12;
	//para calcular el mes, restamos el mes actual con el mes de nacimiento//
	mesact = mesact-mesnac;
	//presentamos o imprimimos la edad, los dias y los meses//
	cout << "usted tiene:" << edad << endl;
	cout << "dias:" << diaact << endl;
	cout << "meses:" << mesact << endl;
	return 0;
}


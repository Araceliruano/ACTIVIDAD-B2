//=============================================================================
//==>Nombre del programa:LaEdad
//==>Autor:Araceli Ruano
//==>Fecha de elaboracion:2022-05-01
//==>Fecha de actualizacion:2022-05-20
//============================================================================
#include<iostream>
using namespace std;

int main() {
	//declaramos las variables//
	float AR_diaact;
	float AR_AR_dianac;
	float AR_edad;
	float AR_fact;
	float AR_fnac;
	float AR_mesact;
	float AR_mesnac;
	//pedimos al usuario que ingrese el año de nacimiento//
	cout << "Ingresar el año de nacimiento" << endl;
	cin >> AR_fnac;
	//pedimos al usuario que ingrese el que nacio//
	cout << "ingresar el mes de nacimiento" << endl;
	cin >> AR_mesnac;
	//pedimos al usuario que ingrese el dia en que nacio//
	cout << "Ingresar el dia de nacimiento" << endl;
	cin >> AR_dianac;
	//pedimos al usuario que ingrese el año actual//
	cout << "Ingresar el año actual" << endl;
	cin >> AR_fact;
	//pedimos que ingrese el mes actual//
	cout << "Ingresar el mes actual" << endl;
	cin >> AR_mesact;
	//pedimos que ingrese el dia actual//
	cout << "Ingresar el dia actual" << endl;
	cin >> AR_diaact;
	//para calcular la edad restamos el año actual con el año de nacimiento//
	AR_edad = AR_fact-AR_fnac;
	//para calcular los dias que han pasado, multiplicamos la edad por los 12 meses del año//
	AR_diaact = AR_edad*12;
	//para calcular el mes, restamos el mes actual con el mes de nacimiento//
	AR_mesact = AR_mesact-AR_mesnac;
	//presentamos o imprimimos la edad, los dias y los meses//
	cout << "usted tiene:" << AR_edad << endl;
	cout << "dias:" << AR_diaact << endl;
	cout << "meses:" << AR_mesact << endl;
		cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: LaEdad"<<endl;
cout<<"//==> Archivo : RuanoAraceli-LaEdad.cpp"<<endl;
cout<<"//==>Autor: Araceli Ruano"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
	return 0;
}



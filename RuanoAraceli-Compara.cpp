//=============================================================================
//==>Nombre del programa:compara
//==>Autor:Araceli Ruano
//==>Fecha de elaboracion:2022-04-28
//==>Fecha de actualizacion:2022-05-20
//============================================================================
#include<iostream>
using namespace std;

int main() {
	float AR_N1;
	float AR_N2;
	cout << "Ingrese el valor de AR_N1:" << endl;
	cin>>AR_N1;
	cout << "Ingrese el valor de AR_N2:"<< endl;
	cin>>AR_N2;
	if (AR_N1==AR_N2) {
		cout<<"El valor de RA_N1:"<< "Es igual a AR_N2:" << endl;
	} else {
		if (AR_N1<AR_N2) {
			cout<<"El valor de AR_N1:" << "Es menor que AR_N2:"<< endl;
		} else {
			cout<<"El valor de AR_N2:"<< "Es menor que AR_N1:" << endl;
		}
	}
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Compara"<<endl;
cout<<"//==> Archivo : RuanoAraceli-Compara.cpp"<<endl;
cout<<"//==>Autor: Araceli Ruano"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-04-28"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
	return 0;
}

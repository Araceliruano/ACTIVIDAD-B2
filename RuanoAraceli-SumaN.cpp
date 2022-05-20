//=============================================================================
//==>Nombre del programa:SumaN
//==>Autor:Araceli Ruano
//==>Fecha de elaboracion:2022-04-28
//==>Fecha de actualizacion:2022-05-20
//============================================================================
#include<iostream>
using namespace std;

int main() {
	int AR_c=0,AR_N;
	float AR_s=0,AR_X;
	cout<<"Ingrese la cantidad de valores a sumar: ";
	cin>>AR_N;
	do{
		cout<<"Ingrese el elemento "<<AR_c+1;
		cin>>AR_X;
		AR_c=AR_c+1;
		AR_s=AR_s+AR_X;
	}
	while(AR_c<AR_N);
	cout<<"La suma de elementos es:"<<AR_s<<endl;
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: SumaN"<<endl;
cout<<"//==> Archivo : RuanoAraceli-SumaN.cpp"<<endl;
cout<<"//==>Autor: Araceli Ruano"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-04-28"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
	return 0;
}

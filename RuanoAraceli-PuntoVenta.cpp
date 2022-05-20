//=============================================================================
//==>Nombre del programa:PuntoVenta
//==>Autor:Araceli Ruano
//==>Fecha de elaboracion:2022-04-30
//==>Fecha de actualizacion:2022-05-20
//============================================================================
#include<iostream>
using namespace std;

int main() {
	
	int AR_c=0,AR_a=0;
	float AR_desc;
	float AR_iva;
	int AR_l;
	float AR_Pdesc;
	float AR_Piva;
	float AR_tb;
	float AR_tn;
	float AR_x;
	cout<<"Ingresa la cantidad de productos:";
	cin >> AR_l;
	cout<<"Ingresar el porcentaje de iva:";
	cin>> AR_Piva;
	cout<<"ingresar el porcentaje de descuento:";
	cin>>AR_Pdesc;
	do{
	cout<<"Ingresar el valor del producto"<<AR_c+1;
	cin>>AR_x;
	AR_c=AR_c+1;
	AR_a=AR_a+AR_x;
	AR_tb=AR_a;
    AR_iva = AR_tb*AR_Piva/100;
	AR_desc = AR_tb*AR_Pdesc/100;
	AR_tn = AR_tb+AR_iva-AR_desc;
	
    }while(AR_c<AR_l);
    cout<<"La suma total es:"<<AR_a<<endl;
    cout<<"El iva total es:"<<AR_iva<<endl;
    cout<<"El descuento es"<<AR_desc<<endl;
    cout<<"El total a pagar es:"<<AR_tn<<endl;
    cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: PuntoVenta"<<endl;
cout<<"//==> Archivo : RuanoAraceli-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Araceli Ruano"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-04-30"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
	return 0;	

}


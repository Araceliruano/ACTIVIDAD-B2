#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
// declaramos las variables//
   int N1;
   int N2;
//ingresamos los numeros//
cout << "ingrese primer numero:";
cin >> N1;
cout << "ingrese segundo numero:";
cin >> N2;
// declaramos las condiciones//
if (N1>N2)//si N1 es mayor que N2 entonces//
{
       cout << "El mayor es:" <<N1;
}
if (N2>N1)//si N2 es mayor que N1 entonces//
{
        cout << "El mayor es:" <<N2;
}
if (N1==N2)//si N1 es igual a N2 entonces//
{
	cout << "Son iguales";
}
}

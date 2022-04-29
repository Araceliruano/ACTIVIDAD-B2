#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
 
int main()
{
int N1;
int N2;
cout << "ingrese primer numero:";
cin >> N1;
cout << "ingrese segundo numero:";
cin >> N2;
if (N1>N2)
{
  cout << "El mayor es:" <<N1;
}
if (N2>N1)
{
  cout << "El mayor es:" <<N2;
}
if (N1==N2)
{
	cout << "Son iguales";
}
}
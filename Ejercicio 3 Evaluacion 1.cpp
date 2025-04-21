#include <iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Ingrese un numero del 1 al 10, el programa terminara ahsta que ingrese un numero invalido \n";
	do
	{
		cout<<"Ingrese el numero: ";
		cin>>num;
		cout<<"El numero ingresado es: ["<<num<<"]\n";
	}
	while(num>0 and num<11);
	
	cout<<"Ingreso un numero invalido, el programa terminara";
}

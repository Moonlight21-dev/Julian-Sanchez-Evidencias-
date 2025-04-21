#include <iostream>
using namespace std;
void sumar();
void restar();
void multi();
void multi()
	{
		int a,b,c;
		cout<<"Ejercicio para multiplicar dos numeros\n";
		cout<<"Ingrese el primer numero: ";
		cin>>a;
		cout<<"Ingrese el segundo numero: ";
		cin>>b;	
		c=a*b;
		cout<<"El Resultado de la multiplicacion es: "<<c<<endl;
	}
void restar()
	{
		cout<<"estoy restando \n";	
	}
void sumar()
	{
		cout<<"Estoy sumando \n";	
	}
main()
	{
		sumar();
		multi();
		for(int i=0;i<=4;i++)
			{
				restar();	
			}
		sumar();
		restar();
	}

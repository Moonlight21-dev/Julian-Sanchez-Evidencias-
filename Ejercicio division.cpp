#include<iostream>
#include<iomanip>
using namespace std;
int main()
	{
	float n1, n2, respuestaf;
	double numero1, numero2, respuestad;
	cout<<"Ejercicio para realizar Division \n";
	cout<<"Ingrese el primer numero para la division en flotante \n";
	cin>>n1;
	cout<<"Ingrese el segundo numero para la division en flotante \n";
	cin>>n2;
		respuestaf = n1/n2;
		cout<<"El resultado de la division en flotante es: "<<respuestaf<<endl;
			cout<<"Ingrese el primer numero para la division en double \n";
			cin>>numero1;
			cout<<"Ingrese el segundo numero para la division en double \n";
			cin>>numero2;
				respuestad = numero1/numero2;
				cout<<"El resultado de la division en double es: "<<respuestad<<endl;
	}

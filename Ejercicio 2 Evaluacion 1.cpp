#include <iostream>
using namespace std;
int main()
{
	int n1, sum, cont=0;
	cout<<"Ingrese un numero a continuacion, los numeros que ingresen se sumaran hasta que ingrese un numero negativo \n";
	while (n1>-1)
	{
		cout<<"Ingrese el numero \n";
		cin>>n1;

	if (n1<0)
	{
		cout<<"Numero negativo detectado! \n";
	}
	sum+= n1;
	cont++;
	}
	cout<<"La suma de los numeros es igual a: ["<<sum<<"] y el numero de digitos ingresados es: ["<<cont<<"]\n";
	
}

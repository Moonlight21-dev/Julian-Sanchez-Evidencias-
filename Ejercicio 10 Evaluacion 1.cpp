#include <iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
void mensaje();
void mensaje()
{
	char mensaje[]={'P','R','O','G','R','A','M','A',' ','T','E','R','M','I','N','A','D','O'};

	for (int i=0;i<=18;i++)
	{
		cout<<mensaje[i];
		Sleep(90);
	}
}

int main()

{
int i, n1, n2, sum=0;

cout<<"Ingrese un numero entero positivo, el programa calculara la suma de todos los numeros pares hasta el numero que ingreso \n";
cin>>n1;
	for(i=0;i<=n1;i+=2)
		{
			sum+= i;
			cout<<i<<endl;
		}
	
		cout<<"La suma de los numeros es igual a: ["<<sum<<"]\n";
	{
		mensaje();
	}
}

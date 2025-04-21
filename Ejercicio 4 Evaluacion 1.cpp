#include <iostream>
using namespace std;
int main()
{
	int n1, n2, re, sw;
	cout<<"A continuacion ingrese un numero: ";
	cin>>n1;
	cout<<endl;
	cout<<"Ingrese otro numero: ";
	cin>>n2;
	cout<<endl;
	cout<<"Que desea hacer con los numeros?\n";
	cout<<"Digite (1) para sumarlos\n";
	cout<<"Digite (2) para restarlos\n";
	cout<<"Digite (3) para multiplicarlos\n";
	cout<<"Digite (4) para dividirlos\n";
	cin>>sw;
	
	switch (sw)
	{
		case 1: 
		re= n1+n2;
		cout<<"La suma de los dos numeros es igual a: ["<<re<<"]";
		break;
		
		case 2: 
		re= n1-n2;
		cout<<"La resta de los dos numeros es igual a: ["<<re<<"]";
		break;
		
		case 3: 
		re= n1*n2;
		cout<<"La multiplicacion de los dos numeros es igual a: ["<<re<<"]";
		break;
		
		case 4: 
		if (n2==0)
		{
			cout<<"El segundo numero no puede ser 0 para la division. Ingrese otro numero. \n";
			cin>>n2;
			re= n1/n2;
			cout<<"La division de los dos numeros es igual a: ["<<re<<"]";
			break;
		}
		re= n1/n2;
		cout<<"La division de los dos numeros es igual a: ["<<re<<"]";
		break;
	}
	
	
}

#include<iostream>
using namespace std;
main()
{
	int n, n1, n2, n3;
	cout<<"Ingresa un numero: \n";
	cin>>n2; 
	cout<<"Los numeros del 1 al "<<n2<<" Son: \n";
	for (n=1;n<n2+1;n=n+1)
		cout<<n<<endl;
	
	{
		cout<<"Los numeros impares son: \n";
	}
		for (n1=1;n1<n2+1;n1=n1+2)
		{
			cout<<n1<<endl;
		}
				cout<<"Los numeros pares son: \n";
				for (n3=2;n3<n2+1;n3=n3+2)
				{
					cout<<n3<<endl;
				}
}

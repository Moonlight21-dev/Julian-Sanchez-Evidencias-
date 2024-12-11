#include<iostream>
using namespace std;
main()
{
	int n, n1, n2, n3;
	cout<<"Ingresa un numero: \n";
	cin>>n2; 
	cout<<"Los numeros del 1 al "<<n2<<" Son: \n";
	for (n=1;n<n2+1;n=n+1)
	if ((n%2)==0)
	{
		cout<<n<<"Es par"<<endl;
	}
		else
		{
			cout<<n<<"Es impar"<<endl;
		}
}

#include <iostream>
using namespace std;
int main ()
{
	int num,i, j;
	cout<<"Ingresa la altura que quieres que tenga el triangulo rectangulo \n";
	cin>>num;
	for (i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
}


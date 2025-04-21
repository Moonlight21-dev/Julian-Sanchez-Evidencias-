#include <iostream>
using namespace std;
int main ()
{
	int	num, cont, fac = 1 ;
	cout<<"Ingrese un numero y se le generara su factorial \n";
	cin>>num;
	cont = num;
	
	while (num>1)
	{
		fac*=num;
		num--;
	}	
	cout<<"El factorial de ["<<cont<<"] es: ["<<fac<<"]";
}

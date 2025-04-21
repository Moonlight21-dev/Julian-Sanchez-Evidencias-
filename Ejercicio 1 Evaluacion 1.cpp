#include <iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Ingrese un numero del 1 al 5, dependiendo el numero que ingrese se mostrara un mensaje distinto. \n";
	cin>>num;
	switch (num)
	{
		case 1: cout<<"Usted selecciono el numero ["<<num<<"]";
		break;
		
		case 2: cout<<"Hoy es 19 de Febrero";
		break;
		
		case 3: cout<<"El agua del mar es salada";
		break;
		
		case 4: cout<<"El cielo es azul";
		break;
		
		case 5: cout<<"Team Gojo";
		break;
		
	}
}


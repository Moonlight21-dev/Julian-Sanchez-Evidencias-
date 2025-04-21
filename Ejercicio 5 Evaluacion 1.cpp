#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
	srand(time(NULL));
	int ale = rand() % 5;
	int num, i, cont=3;
	cout<<"Se ha generado un numero aleatorio, tendra 3 oportunidades para adivinarlo.\n";
	
	for (i=-3;i<0;i++)
	{
		cout<<"Tienes ["<<cont<<"] intentos restantes. \n";
		cout<<"Ingrese el numero que cree que se genero del 1 al 5 \n";
		cin>>num;
		if (num==ale)
		{
			cout<<"Felicidades! Adivinaste el numero.";
			break;
		}	
		cont= cont-1;
	}
		if (num != ale)
	{
		cout<<"No lograste adivinar el numero. El numero era ["<<ale<<"]";
	}	
}


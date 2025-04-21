#include <iostream>
#include <time.h>
#include<ctime>
#include<cstdlib>
using namespace std;
main ()
{
	srand(time(NULL)); //generar la semilla del aleatorio
	int aleatorio=0;
	cout<<"\n\t\t\t\t\t *Programa que genera 10 numeros aleatorios contemplados del 0 al 20 \n";
	for (int i=0;i<=19;i++)
	{
		aleatorio=rand()%21;
		cout<<"\n\t\t\t\t\t *El numero aleatorio "<<i<<" generado es: "<<aleatorio<<endl;
		
		//	if ((aleatorio%2)==0)
	{
		cout<<"\t\t\t\t\t *El numero "<<aleatorio<<" es par"<<endl;}
	/*	else 
		{
			cout<<" ";
		}*/
	}	


}

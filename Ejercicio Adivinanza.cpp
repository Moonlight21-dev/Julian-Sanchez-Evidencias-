#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
	int r, a, w=3;
	srand(time(NULL));
	r=1+rand()%5;
	cout<<"Se ha generado un numero oculto aleatorio entre 1 y 5 \n";
	do
	{	
		cout<<"Ingrese el numero que cree fue el generado aleatoriamente \n";
		cin>>a;
		 	if (r==a)
		 	{
		 		cout<<"Felicidades, el numero generado aleatoriamente fue: "<<r<<endl;	 		
			}
				else
					if ((r>a)or(r<a))
					
					{					
						cout<<"Numero equivocado. Tienes ["<<w-1<<"] Intentos restantes \n";
						w= w-1;
					}				
	}

	while ((w>0)and(w<3)and(a!=r));
						if (a!=r)
						{
							cout<<"Te quedaste sin intentos, el numero oculto era: "<<r<<endl;
						}
}


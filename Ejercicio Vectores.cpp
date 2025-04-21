#include <iostream>
#include <string>
using namespace std;
main ()

	{
		int entero[]={8, 15, 2, 86, 4};
		char caracter[]={'A', '&', 'J', '/', '!'};
		double doble[]={8.56, 4.23, 7.91, 1.35, 0.02};
		string cadena[]={"Hola", "JaJa", "Bueno", "Nos", "Sis"};
		
		cout<<"Los siguientes datos son el contenido de los vectores de int \n";
		for (int i=0;i<=4;i++)
		{		
			cout<<"El contenido del cajon ["<<i<<"] es: "<<entero[i]<<endl;
		}
			cout<<"\n";
			cout<<"Los siguientes datos son el contenido de los vectores de char \n"; 
			for (int i=0;i<=4;i++)
			{
				cout<<"El contenido del cajon ["<<i<<"] es: "<<caracter[i]<<endl;
			}
				cout<<"\n";
				cout<<"Los siguientes datos son el contenido de los vectores de double \n"; 
				for (int i=0;i<=4;i++)
				{
					cout<<"El contenido del cajon ["<<i<<"] es: "<<doble[i]<<endl;
				}
					cout<<"\n";
					cout<<"Los siguientes datos son el contenido de los vectores de string \n"; 
					for (int i=0;i<=4;i++)
					{
						cout<<"El contenido del cajon ["<<i<<"] es: "<<cadena[i]<<endl;
					}
	} 

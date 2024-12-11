#include<iostream>
using namespace std;
main()
	{int n1, n2, n3, suma, resta, multi, divi;
	cout<<"Ingrese el primer numero para la operacion \n";
	cin>> n1;
	cout<< "Ingrese el segundo numero para la operacion \n";
	cin>> n2;
	cout<<"Si quiere realizar una suma con los numeros ingresados, ingrese un numero menor que 6. \n";
	cout<<"Si quiere realizar una resta con los numeros ingresados, ingrese un numero mayor que 6 pero menor que 12. \n";
	cout<<"Si quiere realizar una multiplicacion con los numeros ingresados, ingrese un numero mayor que 12 pero menor que 18. \n";
	cout<<"Si quiere realizar una division con los numeros ingresados, ingrese un numero mayor que 18 pero menor que 24. \n";
	cout<<"Si no quiere realizar ninguna operacion, ingrese un numero mayor que 23 \n";
	cin>>n3;
		if(n3<6)
		{suma=n1+n2;
		cout<<"El resultado de la suma es: "<<suma;
		}
			else
			if(n3<12)
			{resta=n1-n2;
			cout<<"El resultado de la resta es: "<<resta;
			}
				else
				if(n3<18)
				{multi=n1*n2;
				cout<<"El resultado de la multiplicacion es: "<<multi;
				}
					else 
					if(n3<24)
					{divi=n1/n2;
					cout<<"El resultado de la division es: "<<divi;
					}
							else
							if(n3>23)
							{cout<<"La operacion no se puede realizar \n";
							}
		
	}

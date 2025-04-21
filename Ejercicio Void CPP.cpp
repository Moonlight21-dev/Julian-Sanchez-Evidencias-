#include <iostream>

using namespace std;

void multi();
void restar();
void divi();
void sumar();

	void multi()
	{
	int m1, m2, rm;
	cout<<"A continuacion ingrese dos numeros para multiplicarlos \n";
	cout<<"Igrese el primer numero: ";
	cin>>m1;
	cout<<"Ingrese el segundo numero: ";
	cin>>m2;
	cout<<"\n";
	rm= m1*m2;
	cout<<"El resultado de la multiplicacion es: ["<<rm<<"] \n";
	}
		void restar()
		{
		int r1, r2, rr;
		cout<<"A continuacion ingrese dos numeros para restarlos \n";
		cout<<"Igrese el primer numero: ";
		cin>>r1;
		cout<<"Ingrese el segundo numero: ";
		cin>>r2;
		cout<<"\n";
		rr= r1-r2;
		cout<<"El resultado de la resta es: ["<<rr<<"] \n";
		}
			void divi()
			{
			int d1, d2; 
			double rd;
			cout<<"A continuacion ingrese dos numeros para dividirlos \n";
			cout<<"Igrese el primer numero: ";
			cin>>d1;
			cout<<"Ingrese el segundo numero: ";
			cin>>d2;
			cout<<"\n";
			rd= d1/d2;
			cout<<"El resultado de la division es: ["<<rd<<"] \n";
			}
				void sumar()
				{
				int s1, s2, rs;
				cout<<"A continuacion ingrese dos numeros para sumarlos \n";
				cout<<"Igrese el primer numero: ";
				cin>>s1;
				cout<<"Ingrese el segundo numero: ";
				cin>>s2;
				cout<<"\n";
				rs= s1+s2;
				cout<<"El resultado de la suma es: ["<<rs<<"] \n";
				}
main ()
{
	sumar();
		for (int i=0;i<2;i++)
		{	
		multi();
		}
			divi();
				for (int o=0;o<5;o++)
				{
				restar();
				}
}

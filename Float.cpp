#include<iostream>
#include<iomanip>
using namespace std;
int main()
	{float flotante = 1.23456879783687257892453987;
	double doble = 2.3541651384865165878453;
	cout<<"El tama�o para flotante es: "<<sizeof(flotante)<<endl;
	cout<<"El tama�o para doble es: "<<sizeof(doble)<<endl;
	cout<<flotante <<endl;
	cout<<doble <<endl;
	flotante = 5.123456789987654321;
		cout<<setprecision(5);
		cout<<flotante<<endl;
		cout<<doble<<endl;
			cout<<setprecision(12);
			cout<<flotante<<endl;
			cout<<doble<<endl;
				cout<<setprecision(8);
				cout<<flotante<<endl;
					cout<<setprecision(13);
					cout<<doble<<endl;
	
	}

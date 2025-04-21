#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{    

	int retiro, saldo = 0, cajero, dep, depmen;
	char depch;
	cout<<"Bienvenido al ATM\n";
	do
	{	
	cout<<"Escoja una de las siguientes opciones: \n";
	cout<<"Digite (1) para depositar dinero\n";
	cout<<"Digite (2) para retirar dinero\n";
	cout<<"Digite (3) para consultar el saldo de su cuenta \n";
	cout<<"Digite (4) para finalizar \n";
	cin>>cajero;
	
	switch (cajero)
	{
		case 1:
			cout<<"Ingrese la cantidad de dinero que desea depositar: \n";
			cin>>dep;
						
					cout<<"Usted deposito ["<<dep<<"] en su cuenta. Desea regresar al menu principal o desea finalizar? \n";
					saldo = dep;
					cout<<"(1) Regresar al menu \n";
					cout<<"(2) Finalizar \n";
					cin>>depmen;
					if (depmen==2)
					{
					 	cout<<"Terminando programa \n";
						exit (0);
					}
					break;
	
		case 2:
			cout<<"Ingrese la cantidad de dinero que desea retirar: \n";
			cin>>retiro;
			if (retiro>dep)
			{
				cout<<"Excedio la cantidad maxima de su saldo \n";
				cout<<"Terminando programa \n";
				exit (0);
			}
			else if (retiro<=dep)
			{
			saldo = saldo - retiro;
			cout<<"Usted retiro ["<<retiro<<"] de su cuenta \n";
			cout<<"Desea regresar al menu principal o desea finalizar? \n";
			cout<<"(1) Regresar al menu \n";
			cout<<"(2) Finalizar \n";
			cin>>depmen;
			if (depmen==2)
					{
					 	cout<<"Terminando programa \n";
						exit (0);
					}
			}
			break;
		
		case 3:
			cout<<"El saldo de su cuenta es de ["<<saldo<<"] \n";
			cout<<"Desea regresar al menu principal o desea finalizar? \n";
			cout<<"(1) Regresar al menu \n";
			cout<<"(2) Finalizar \n";
			cin>>depmen;
			if (depmen==2)
					{
					 	cout<<"Terminando programa \n";
						exit (0);
					}
			break;
			
		case 4:
			cout<<"Finalizando...\n";
			break;	
	}
	
	}
	while (cajero!=4);

}

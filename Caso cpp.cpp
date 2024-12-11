#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	char letra, S; 
	int n, n1, n2, r, s;
	do
	{
	cout<<"Ingrese una de las siguientes opciones \n";
	cout<<"1 para suma \n 2 para resta \n 3 para multiplicacion \n 4 para division \n";
	cin>>n;
		
		switch	(n)
		
		 {
		 	case 1: cout<<"Estoy en suma \n";
		 	cout<<"Ingrese el primer numero para la suma \n";
		 	cin>>n1;
		 	cout<<"Ingrese el segundo numero para la suma \n";
		 	cin>>n2;
		 	r=n1+n2;
		 	cout<<"El resultado de la suma es: "<<r<<endl;
		 	cout<<"Desea continuar? Si es asi ingrese 1, si no ingrese otro numero \n";
		 	cin>>s;
		 	break;  
			 	case 2: cout<<"Estoy en resta \n";
			 	cout<<"Ingrese el primer numero para la resta \n";
			 	cin>>n1;
			 	cout<<"Ingrese el segundo numero para la resta \n";
			 	cin>>n2;
			 	r=n1-n2;
			 	cout<<"El resultado de la resta es: "<<r<<endl;
			 	cout<<"Desea continuar? Si es asi ingrese 1, si no ingrese otro numero \n";
			 	cin>>s;
			 	break;
				 	case 4: cout<<"Estoy en division \n";
				 	cout<<"Ingrese el primer numero para la division \n";
				 	cin>>n1;
				 	cout<<"Ingrese el segundo numero para la division \n";
				 	cin>>n2;
				 	r=n1/n2;
				 	cout<<"El resultado de la division es: "<<r<<endl;
				 	cout<<"Desea continuar? Si es asi ingrese 1, si no ingrese otro numero \n";
		 			cin>>s;
				 	break;
					 	case 3: cout<<"Estoy en multiplicacion \n";
					 	cout<<"Ingrese el primer numero para la multiplicacion \n";
					 	cin>>n1;
					 	cout<<"Ingrese el segundo numero para la multiplicacion \n";
					 	cin>>n2;
					 	r=n1*n2;
					 	cout<<"El resultado de la multiplicacion es: "<<r<<endl;
					 	cout<<"Desea continuar? Si es asi ingrese 1, si no ingrese otro numero \n";
		 				cin>>s;
					 	break;
						 	default: cout<<"Numero no valido \n";
							break;  		
	}	
}
	
	 while (s=1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

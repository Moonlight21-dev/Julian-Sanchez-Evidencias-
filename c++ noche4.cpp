#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");
using namespace std;
main()
{
	setlocale(LC_CTYPE, "spanish");
	int Opc, idioma;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	char respuesta,repetir;
	int contap=0,contan=0,contador=0;
	cout <<"\n\n\t\t\t\t\t   *~Seleccione un idioma~*\n\n";
	cout<<"\n\t\t\t\t\t\t°           °";
	cout<<"\n\t\t\t\t\t\t|1-Español  |";
	cout<<"\n\t\t\t\t\t\t|2-Ingles   |";
	cout<<"\n\t\t\t\t\t\t|t3-Frances |\n";
	cout<<"\n\t\t\t\t\t\t°           °\n";
	cout<<"\n\t\t\t\t\t\t      ";
	cin>>idioma; 
	if (idioma==1)
		{ 
		cout<<"\t\t\t\t\t*~Seleccionaste [1-Español]~*\n"<<endl;
			do
			{
			contador=contador+1;
			contap=0;
			contan=0;
			cout<< "\t\t\t\tA continuacion, selecciona uno de los 10 modulos a evaluar: \n"<<endl;
			cout<< "\t\t\t\t*********************************************************"<<endl;
			cout<< "\t\t\t\t|1)Manejo de tecnicas de programacion                   |"<<endl;
			cout<< "\t\t\t\t|2)Desarrollo multiplataforma, diseño y creacion de apps|"<<endl;
			cout<< "\t\t\t\t|3)Interaccion inicial en ingles                        |"<<endl;
			cout<< "\t\t\t\t|4)Aplicacion de matematicas discretas                  |"<<endl;
			cout<< "\t\t\t\t|5)Mantenimiento de equipo de computo basico            |"<<endl;
			cout<< "\t\t\t\t|6)Representacion simbolica y angular del entorno       |"<<endl;
			cout<< "\t\t\t\t|7)Identificacion de la ciberseguridad                  |"<<endl;
			cout<< "\t\t\t\t|8)Analisis de la materia y la energia                  |"<<endl;
			cout<< "\t\t\t\t|9)Manejo de aplicaciones por medios digitales          |"<<endl;
			cout<< "\t\t\t\t|10)Salir                                               |"<<endl;
			cout<< "\t\t\t\t*********************************************************"<<endl;
			cin>>Opc;
			if (Opc<1 or Opc >10)
			cout<<"Dame otra opcion(rango 1-10)"<<endl;
			switch (Opc) 
				{
					case 1:
						cout<<"Manejo de tecnicas de programacion"<<endl; 
						cout<<"1-¿Que es programacion?"<<endl;
						cout<<"a)diseñar, depurar, codificar y mantener un codigo"<<endl;
						cout<<"b)Un conjunto de programas"<<endl;
						cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
						cout<<"d)Se usa para resolver un problema"<<endl;
						cin>>respuesta;
					    if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta1"<<endl;
						  		contap=contap+1;
					    	}
						else
							{
								cout<<"La respuesta es incorrecta1"<<endl;
								contan=contan+1;
							}	
						cout<<"Manejo de tecnicas de programacion"<<endl; 
						cout<<"2-¿Que es un algoritmo?"<<endl;
						cout<<"a)Es la forma para resolver un problema"<<endl;
						cout<<"b)Un conjunto de criterios para evaluar"<<endl;
						cout<<"c)Una lista de opciones"<<endl;
						cout<<"d)Indica el orden de realizacion"<<endl;
						cin>>respuesta;	
					    if(respuesta=='a')
							{
								cout<<"la respuesta es correcta2"<<endl;
								contap=contap+1;
						    }
						else
							{
								cout<<"La respuesta es incorrecta2"<<endl; 
								contan=contan+1;
							}
						cout<<"Manejo de tecnicas de programacion"<<endl; 
						cout<<"¿3-¿Cuales son las fases del ciclo de vida del Software?"<<endl;
						cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
						cout<<"b)Validación, analisis y diseño"<<endl;
						cout<<"c)Pruebas y codificacion"<<endl;
						cout<<"d)Todas las anteriores"<<endl;
						cin>>respuesta;	
					    if(respuesta=='d')
						    {
						    	cout<<"la respuesta es correcta3"<<endl;
						    	contap=contap+1;
						    }
						else
							{
						    	cout<<"La respuesta es incorrecta3"<<endl; 
								contan=contan+1;
						    }
						cout<<"Manejo de tecnicas de programacion"<<endl; 
				    	cout<<"4-¿Identificacion de Necesidades:¿Cuales son las fases para plantear un problema?"<<endl;
						cout<<"a)Establecer y Listar"<<endl;
						cout<<"b)Validar, Analizar y Diseñar"<<endl;
						cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
						cout<<"d)Ninguna"<<endl;
						cin>>respuesta;
						if(respuesta=='a')
							{
						    	cout<<"la respuesta es correcta"<<endl;	
						    	contap=contap+1;
						    } 
						else
							{
						    	cout<<"La respuesta es incorrecta"<<endl;
						    	contan=contan+1;
						    }
					    cout<<"Manejo de tecnicas de programacion"<<endl; 
					    cout<<"5-¿Que es establecer?"<<endl;
						cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
						cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
						cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
						cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
						cin>>respuesta;
						if(respuesta=='b')
							{
						    	cout<<"la respuesta es correcta"<<endl;
						    	contap=contap+1;
						    }
						else
							{
						    	cout<<"La respuesta es incorrecta"<<endl; 
						    	contan=contan+1;	
						    }
						cout<<"Manejo de tecnicas de programacion"<<endl; 
				    	cout<<"6-¿Que es Listar?"<<endl;
						cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
						cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
						cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
						cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
						cin>>respuesta;
						if(respuesta=='b')
							{
						    	cout<<"la respuesta es correcta"<<endl<<endl<<endl;
						    	contap=contap+1;
						    }
						else
							{
						    	cout<<"La respuesta es incorrecta"<<endl<<endl<<endl;
						    	contan=contan+1;	
					    	} 
					break;	
					case 2: 
							cout<<"Desarrollo multiplataforma, diseño y creacion de apps"<<endl; 
							cout<<"1-¿Para que sistemas son diseñadas principalmente la mayoría de aplicaciones en  la actualidad?"<<endl;
							cout<<"a)Android"<<endl;
							cout<<"b)Windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}	 
							cout<<"2-¿Que lenguaje de programacion es comunmente usado para las aplicaciones moviles?"<<endl;
							cout<<"a)Python"<<endl;
							cout<<"b)java"<<endl;
							cout<<"c)C#"<<endl;
							cout<<"d)PHP"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}	
							cout<<"3-¿Principalmente para que fueron diseñadas las aplicaciones?"<<endl;
							cout<<"a)Fueron diseñadas para entretener a las personas"<<endl;
							cout<<"b)Fueron diseñadas para controlar el sistema operativo de un equipo de computo"<<endl;
							cout<<"c)Fueron diseñadas para facilitar ciertas tareas complejas y hacer mas sencilla la experiencia informatica de las personas"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}	
							cout<<"4-¿Que es una aplicacion movil?"<<endl;
							cout<<"a)Es una aplicacion diseñada para ejecutarse en un dispositivo movil, que puede er un telefono inteligente o tablet"<<endl;
							cout<<"b)Una aplicacion movil es lo mismo que una aplicacion web"<<endl;
							cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
							cout<<"5-¿Para que es una aplicacion nativa?"<<endl;
							cout<<"a)La aplicación nativa está desarrollada y optimizada específicamente para el sistema operativo determinado y la plataforma de desarrollo del fabricante"<<endl;
							cout<<"b)La aplicación nativa sirve para compartir información con otros sistemas operativos "<<endl;
							cout<<"c)la aplicación nativa sirven para cargar información en el sistema operativo"<<endl;
							cout<<"d)para  cambiar su contenido, manteniendo el mismo diseño y estilo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
							cout<<"6-¿las aplicaciones nativas que se usan en celulares se pueden usar en cuantos sistemas operativo?"<<endl;
							cout<<"a)un solo sistema operativo"<<endl;
							cout<<"b)más de 2 sistemas operativos como (Android, iOS y Windows) "<<endl;
							cout<<"c)todos los sistemas operativos."<<endl;
							cout<<"d) la respuesta b y c son correctas."<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
							cout<<"7-¿Qué tipo de navegador por defecto viene en los dispositivos moviles android?"<<endl;
							cout<<"a)OperaMini"<<endl;
							cout<<"b)Minimo-Mozilla "<<endl;
							cout<<"c)chrome"<<endl;
							cout<<"d)NetFront"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
							cout<<"8-¿Qué factor incide en el desarrollo de aplicaciones móviles?"<<endl;
							cout<<"a)Plataforma"<<endl;
							cout<<"b)Sistema Operativo "<<endl;
							cout<<"c)Dispositivo Móvil"<<endl;
							cout<<"d)lenguaje de desarrollo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
							cout<<"9-¿Cuales son sistemas operativos de moviles?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
							cout<<"10-¿En donde se alojan los aplicativos moviles y su cache?"<<endl;
							cout<<"a)En el dispositivo"<<endl;
							cout<<"b)Plicativo en la nuve cache en el dispositivo"<<endl;
							cout<<"c)Unicamente en la nuve"<<endl;
							cout<<"d)Hibridamente mitad nuve, mitad dispositivo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
					break;
				case 10: 	cout<< "10)Salir"<<endl;
							exit(0);
					break;
				default:cout<<endl<<endl<<"No hay opciom"<<endl<<endl;
					break;
				//system ("pause");	//getch();	
				}	
			cout<<"Las respuestas correctas fueron "<<contap<<endl;
			cout<<"Las respuestas incorrectas fueron "<<contan<<endl;
			if(contap>=5)
				{
					cout<<"felicitaciones aprobaste el examen"<<endl<<endl;
				}
			else
				{
				if(contador==2)
					{
						repetir='n';
						cout<<"La cantidad de intentos ha terminado tu calificacion es: "<<contap<<" NO aprobaste el examen"<<endl<<endl;
					}
				else
					{
					if(contador<2)
						{
							cout<<"deseas repetir la prueba? s/n"<<endl<<endl;
							cin>>repetir;
						}
					}
				}	
			}
		while((contap<5) && (repetir=='s'));
		}					
	else
		{
		if(idioma==2)
			{
				cout<<"Estas en idioma- Ingles "<<endl;
			}
		else
			{
			if(idioma==3)
				{
					cout<<"Estas en idioma- Aleman "<<endl;
				}	
			else
				{
					cout<<"Estas en idioma- desconocido "<<endl;	
				}
			}
		}
}

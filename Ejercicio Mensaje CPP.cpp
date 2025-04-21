#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
void mensaje();

void mensaje()
{
	char mensaje[]={'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};

	for (int i=0;i<=2000000;i++)
	{
		cout<<mensaje[i];
		Sleep(1);
	}
}
	main()
	{
		mensaje();
	}


#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    double numeros[n];  
    double suma = 0;

    cout << "Ingrese los " << n << " elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
        suma += numeros[i];
    }
    double promedio = suma / n;
    cout << "El promedio de los elementos es: "<<promedio<< endl;
}


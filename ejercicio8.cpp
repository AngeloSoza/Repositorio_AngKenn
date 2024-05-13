/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los 
almacene en un arreglo y luego cuente y muestre la cantidad de números pares 
e impares. */

#include <iostream>
using namespace std;

int main() 
{
    int arr[10];
    int i, pares = 0, impares = 0;

    cout << "Ingrese 10 numeros enteros: ";
    for (i = 0; i < 10; i++) 
    {
        cin >> arr[i];
    }

    for (i = 0; i < 10; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            pares++;
         }else{
            impares++;
        }
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}
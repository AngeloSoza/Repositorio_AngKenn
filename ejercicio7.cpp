/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los 
almacene en un arreglo y luego los ordene en forma ascendente utilizando el 
algoritmo de ordenamiento de burbuja.*/

#include <iostream>
using namespace std;

int main() 
{
    int arr[5];
    int i, j, temp;
    cout << "Ingrese 5 numeros enteros: ";
    for (i = 0; i < 5; i++) 
    {
        cin >> arr[i];
    }
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4 - i) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    cout << "Arreglo ordenado en forma ascendente: ";
    for (i = 0; i < 5; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
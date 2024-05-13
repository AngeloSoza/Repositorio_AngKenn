/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers [10];
    int i = 0;
    int NumMayor;

    //Pedir al usuario el numero
    cout << "Ingrese 10 numeros enteros: " << endl;
    while (i < 10){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numbers[i];
        i++;
    }
    //encontrar el numero mayor
    NumMayor = numbers[0];
    i = 1;
    while (i < 10){
        if (numbers[i] > NumMayor){
            NumMayor = numbers[i];
        }
        i++;
    }

    cout << "El numero mayor es: " << NumMayor << endl;
    return 0;
}

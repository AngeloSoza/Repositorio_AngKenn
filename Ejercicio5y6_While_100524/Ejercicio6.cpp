/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cantNotas;
    int calificaciones [1000];
    int suma = 0;
    float promedio;
    int i = 0;

    cout << "Ingrese la cantidad de calificaciones que quiere promediar: ";
    cin >> cantNotas;

    while (i < cantNotas){
       cout << "Ingrese la calificacion " << i + 1 << ": ";
       cin >> calificaciones[i];
        suma += calificaciones[i];
        i++;
    }
   
    //Calcular promedio
    promedio =  (float) suma / cantNotas;

    cout << "El promedio de las notas es de:" << promedio << endl;

    return 0;
}



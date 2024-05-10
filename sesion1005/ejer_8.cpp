/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares.*/
#include <iostream>

using namespace std;
 
int main(int argc, char const *argv[])
{
    int array[10], pares = 0, impares = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "La cantidad de numeros pares es: " << pares << endl;
    cout << "La cantidad de numeros impares es: " << impares << endl;

    return 0;
}

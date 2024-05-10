/*. Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja.
*/
#include<iostream>

using namespace std;

int main() {
    int array[5], order;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 4 - i; k++) {
            if (array[k] > array[k + 1]) {
                order = array[k];
                array[k] = array[k + 1];
                array[k + 1] = order;
            }
        }
    }

    cout << "Los numeros ordenados en forma ascendente son: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}


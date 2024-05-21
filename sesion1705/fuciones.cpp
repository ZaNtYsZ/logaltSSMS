#include <iostream>
#include "variable.h"

using namespace std;

/* Prototipo de funciones */
void menu();
void ingresarEdades();
void start();
void showages();
void edadMayor();
void edadMenor();
void promedioEdades();

/* Funciones */
void menu() {
    system("cls");
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Mostrar edad mayor" << endl;
    cout << "4. Mostrar edad menor" << endl;
    cout << "5. Mostrar promedio de edades" << endl;
    cout << "6. Salir" << endl;
}

/* Agregar edades */
void ingresarEdades() {
    system("cls");
    cout << "Ingrese la edad: ";
    cin >> age[post];
    post++;
    system("pause");
}

void start() {
    int option = 0;

    while (option != 6) {
        menu();
        cout << "Ingrese una opcion: ";
        cin >> option;
        switch (option) {
        case 1:
            ingresarEdades();
            break;
        case 2:
            showages();
            break;
        case 3:
            edadMayor();
            break;
        case 4:
            edadMenor();
            break;
        case 5:
            promedioEdades();
            break;
        case 6:
            cout << "Adios....!" << endl;
            break;
        default:
            cout << "Opcion no valida, intente nuevamente." << endl;
            system("pause");
            break;
        }
    }
}

void showages() {
    system("cls");
    cout << "Edades: " << endl;
    for (int i = 0; i < post; i++) {
        cout << age[i] << endl;
    }
    system("pause");
}

void edadMayor() {
    system("cls");
    if (post == 0) {
        cout << "No hay edades ingresadas." << endl;
    } else {
        int mayor = age[0];
        for (int i = 1; i < post; i++) {
            if (age[i] > mayor) {
                mayor = age[i];
            }
        }
        cout << "La edad mayor es: " << mayor << endl;
    }
    system("pause");
}

void edadMenor() {
    system("cls");
    if (post == 0) {
        cout << "No hay edades ingresadas." << endl;
    } else {
        int menor = age[0];
        for (int i = 1; i < post; i++) {
            if (age[i] < menor) {
                menor = age[i];
            }
        }
        cout << "La edad menor es: " << menor << endl;
    }
    system("pause");
}

void promedioEdades() {
    system("cls");
    if (post == 0) {
        cout << "No hay edades ingresadas." << endl;
    } else {
        int suma = 0;
        for (int i = 0; i < post; i++) {
            suma += age[i];
        }
        double promedio = static_cast<double>(suma) / post;
        cout << "El promedio de las edades es: " << promedio << endl;
    }
    system("pause");
}

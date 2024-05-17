#include <iostream>
#include "variable.h"

using namespace std;

/*prototipo de funciones*/
void menu();
void ingresarEdades();
void principal();

/*funciones*/
void menu(){
    system("cls");
    cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostrar edades"<<endl;
    cout<<"3. Mostrar edad mayor"<<endl;
    cout<<"4. Mostrar edad menor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;
}

/*Agregar edades */
void ingresarEdades(){
    system("cls");
    cout<<"Ingrese la edad: ";
    cin>>age[post];
    post++;
    system("pause");
}

void start(){
    int option;

    while (option!=6)
    {
        menu();
        cout<<"Ingrese una opcion: ";
        cin>>option;
        switch (option)
        {
        case 1:
            ingresarEdades();
            break;
        case 6:
            cout<<"adios....!"<<endl;
            break;

        default:
            break;
        }

    
    }
}
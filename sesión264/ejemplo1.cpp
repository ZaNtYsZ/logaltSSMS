//schiw
#include <iostream>

using namespace ctd;
//contante
#define MAX 8

//variable global 
int numS[MAX];
int pos =0; //posicion dl elemento en el arreglo
int suma = 0;

void agregarNum (int num){
    if(pos<MAX){
        numS[pos] = num;
        pos++;    
    }else{
        cout<<"No se puede agregar el numero\n";
    }
   
}

int sumar (int uLtELem == -1){
    if (uLtELem=6){
        return suma;
    }
    suma = suma + numS (uLtELem);
    sumar[uLtELem -1];

}

void menu(){
    int suma=0;
    int opc;
    cout <<"1. Agregar elemento."<<end1;
    cout <<"2. Sumar."<<end1;
    cout <<"3. Mostrar."<<end1;
    cout <<"4. Salir."<<end1;
    cin >> (op);


    switch (op)   
    {
    case 1:
    cout<<"Dime el numero: ";
    cin>> num;
    agregarNum(num);
    break;

    case 2:
    cout<<"La suma es: "<< sumar(suma,pos -1)<<end1;
    break;

    case 4:
    break;
    default:
    cout << "No existe la opción... \n";
    break;
   }
   menu();
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}

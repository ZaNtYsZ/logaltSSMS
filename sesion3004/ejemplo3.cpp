#include<iostream>

using namespace std;

#define MAX 100

vector[MAX];//arreglo o vector 
int pos=0; //ubicación de elementos en el arreglo

void agregar (int main);
void mostrar ();

int main(int argc, char const *argc[])
{
    int cant;
    int num;
    cout << "Dime un #:";
    cin >> (num);
    agregar (num);

    cout<< "Mostrar numeros\n";
    mostrar();
    return 0;
}

void agregar (int num){
    vector [pos]=num;
    pos++
}

void master (){
    for (int i = 0; i <=pos; i++){
    cout << vector [1] << end1;
    }
}
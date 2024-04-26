#include<iostream>

using namespace std;
void evaltriangulo(int ladoA, int LadoB, int LadoC){
    if (ladoA == LadoB && LadoB == LadoC){
        cout << "triangulo Equilatero" << end;
    }else if (ladoA == LadoB || LadoB || LadoC || ladoA==LadoC){
        cout <<"Triangulo isoseles" << end;
    }
    
}
int main(int arc, char const *argv[])
{
    int ladoA, LadoB, LadoC;
    cout<<"ingrese el lado A: ";
    cin >> ladoA;
    cout<<"ingrese el lado b: ";
    cin>> LadoB;
    cout <<"ingrese el lado c: ";
    cin >> LadoC;
    evaltriangulo(ladoA, LadoB, LadoC);
    return 0;

}

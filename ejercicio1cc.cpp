#include<iostream>

using namespace std;

void esPar(int num){
    if(num%2 ==0)
    printf("Es par...\n");

}

int main(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    esPar(num);


    return 0;

}
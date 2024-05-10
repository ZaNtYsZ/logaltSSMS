#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num=1, sum=0;

    while (num >= 0){
        sum += num;
        cout<<"Ingrese un numero: ";
        cin>>num;
        
    }

    cout << "La suma de los numeros es: " << sum << endl;

    return 0;
}

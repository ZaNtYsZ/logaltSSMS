#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num=0, fact=1;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num > 0)
    {
        while (numb != 1)
        {
            fact *= num;
            num--;
        }
        cout << fact << endl;
    } else 
    {
        cout << "El numero debe ser positivo" << endl;
    }
    
    return 0;
}

/*leer un numero y obtener la tbal de multiplicacion 
de dicho numero*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0;
    int mult = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    int i = 0;
    while (i <= 12)
    {
        mult = num * i;
        cout << num << " x " << i << " = " << mult << endl;
        i++;
    }
    
    return 0;
}


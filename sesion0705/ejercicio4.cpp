#include <iostream>

using namespace std;

/*mostaar los primeros 300 numeros pares*/

main()
{
    int i = 0, cont=0;
    while (cont < 300)
    {
        i ++;
        if (i % 2 == 0)
        {
            cont ++;
            cout << cont << " " << i << endl;
        }
        
    }
    return 0;
}
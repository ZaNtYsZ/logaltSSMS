//sumar los elementos de un arreglo

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number[5];

    number[0]=3;
    number[2]=5;
    number[4]=4;
    number[3]=6;
    number[1]=1;

    printf("Elemento #1: %d\n", number[0]);
    printf("Elemento #2: %d\n", number[1]);
    printf("Elemento #3: %d\n", number[2]);
    printf("Elemento #4: %d\n", number[3]);
    printf("Elemento #5: %d\n", number[4]);

    printf("suma\n");
    int suma = number[0]+number[1]+number[2]+number[3]+number[4];

    printf("La suma es: %d\n", suma);
    
    return 0;
}

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    //varibles
    int num, cuadrado;
    system("cls");
    printf("ingrese el numero par ");
    scanf("%i", &num);
    //evaluar si es par 
    if (num%2 == 0){
        cuadrado= pow(num,2);
        printf("El cuadrado de %i es %i",num,cuadrado);
    }else
    {
        printf("el numero %i que ingreso no es valido",num);
    }
    

    return 0;
}
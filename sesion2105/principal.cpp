#include <iostream>
#include "variables.h"

using namespace std;

int main()
{
    PERSON teacher;
    STUDENT student[MAXREGISTERS];
    int op, i=0;
    cout << "cif: ";
    cin >> teacher.cif;
    cout << "nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout << "apellido: ";
    scanf(" %[^\n]", teacher.lastname);

    do
    {   
        system("cls||clear");
        printf("CIF: %s\n");
        scanf(" %[^\n]", teacher[i].cif);
        printf("Nombres: %s\n");
        scanf(" %[^\n]", teacher[i].name);
        printf("Apellidos: %s\n");
        scanf(" %[^\n]", teacher[i].lastname);
        printf("nota: %d\n");

        printf("Desea ingresar otro estudiante? 1.Si 2.No\n");
        cin >> op;
        i++;
    } while (op!=0);

    printf("El teacher tiene por nombre: %s\n", teacher.name);
    printf("El teacher tiene por cif: %s\n", teacher.cif);

    cout << "Los estudiantes son: \n";
    for (int j = 0; j < i; j++)
    {
        printf("Nombre: %s\n", "Apellido: %s\n","Notas: %d\n",
        student[j].name, student[j].lastname, student[j].grade);
    }

    return 0;
}

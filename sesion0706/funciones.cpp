#include<iostream>
#include<locale.h>
#include "variables.h"
#include<string.h>


using namespace std;

CIUDAD ciudadades [MAX_REG];
//crud
int obtenerPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c);
void eliminar(int id);
CIUDAD buscar(int id);
int menu();
void pedirdatos();
void principal();

void agregar(CIUDAD *c){
    cuidades[pos]=*c;
    pos++;
}

CIUDAD buscar(CIUDAD *c){
    for (int i=0; i<pos; i++){
        if (id == cuidades[i].id){
            return cuidades[i];
        }
    }
    CIUDAD c;
    return c;
}

int obtenerPos(int id){
    for (int i=0; i<pos; i++){
        if (id == cuidades[i].id){
            return i;
        }
    }
    return -1;
}

void editar(CIUDAD*c, int id){
    int posi = obtenerPos(id);
    strcpy(ciudad.nombre = c->nombre);
    strcpy(ciudad.descripcion = c->descripcion);
}

void eliminar (int id){
    int posi = obtenerPos(id);
    for (int i=posi; i<pos-1; i++){
        ciudadades[i] = ciudadades[i+1];
    }
    pos++;
}    

int menu(int op){
    int op;
    cout<<"Menu /n";
    cout<<"1. Agregar /n";
    cout<<"2. Editar /n";
    cout<<"3. Eliminar /n";
    cout<<"4. Buscar /n";
    cout<<"5. mostrar todo /n";
    cout<<"6. Salir /n";
    cout<<"Ingrese una opcion: ";
    cin>>op;
    return op;
}    

void principal() 
{
    int op;
    do{
        op = menu(op);
        switch(op){
            case 1:
                pedirdatos();
                break;
            case 6:
                cout<<"Saliendo del sistema.... /n";    
                break;

            default:
                cout<<"Opcion no valida.... /n";
                break;    
    }
    while(op!=6);  }

}

void pedirdatos(){
    CIUDAD ciudad;
    cout<<"****Datos de la ciudad**** /n";
    cout<<"-Ingrese el id: ";
    cin>>ciudad.id;
    cout<<"-Ingrese el nombre: ";
    cin>>ciudad.nombre;
    cout<<"-ingrese la descripción: ";
    cin>>cuidad.descripcion;
    agregar(&ciudad);
    cout<<"Ciudad agregada....... /n";
}

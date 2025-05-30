#include <stdio.h>
#include <string.h>
#define n 5
struct Persona
{
    char nombre[20];
    char apellido[20];
    int edad;
    int dni;
};


void ordenarBurbuja(int a[]);
void mostrarArreglo(int arreglo[]);
int pedirClave();
int busquedaBinaria(int arreglo[],int clave);
void encontrarClave(int clave,int resultado);
int main(){
    int arreglo[n]={3,5,2,1,4};
    int i,clave,resultado;
    printf("Arreglo original\n");
    mostrarArreglo(arreglo);
    ordenarBurbuja(arreglo);
    printf("Arreglo ordenado de menor a mayor\n");
    mostrarArreglo(arreglo);
    clave=pedirClave();
    resultado=busquedaBinaria(arreglo,clave);
    encontrarClave(clave,resultado);
    return 0;
}
void ordenarBurbuja(int a[]){
    int i,j,aux;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }
}
void mostrarArreglo(int arreglo[]){
int i;
for(i=0;i<n;i++){
        printf("%d ",arreglo[i]);
    }
    printf("\n");
}
int pedirClave(){
int clave;
printf("Ingrese el numero a buscar en el arreglo:");
scanf("%d",&clave);
return (clave);
}

int busquedaBinaria(int arreglo[],int clave){
    int inicio,medio,fin,i;
    inicio=0;
    fin=n-1;
    while(inicio<=fin){
        medio=(inicio+fin)/2;
        if(arreglo[medio]==clave){
            return medio;
        }else if(clave<arreglo[medio]){
            fin=medio-1;
        }else{
            inicio=medio+1;
        }
    }
    return (-1);
}
void encontrarClave(int clave,int resultado){
if(resultado!=-1){
        printf("\n El numero %d se encuentra en la posición %d ",clave,resultado);
    }else{
        printf("\n El numero %d no se encuentra en el arreglo",clave);
    }
    }
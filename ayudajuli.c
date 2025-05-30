//Declaracion de bibliotecas
#include <stdio.h>
#include <string.h>


//declaracion de funciones
void mostrarArreglo(int arreglo[],int j,int multde3[],int k,int resto[]);
void ordenarArreglo(int j,int multde3[]);
void insercionArreglo(int j,int multde3[]);

//declaracion de variables


//programa principal
int main(){
    int arreglo[10]={4,7,9,5,6,4,3,9,6,9};
    int multde3[10];
    int resto[10];
    int i,j,k,lonMultde3,lonResto;
    j=0;
    k=0;
    for (i=0;i<10;i++){
        if (arreglo[i]%3==0 && arreglo[i]!=0){
            multde3[j]=arreglo[i];
            j++;
        }else{
            resto[k]=arreglo[i];
            k++;
        }
    }
    mostrarArreglo(arreglo,j,multde3,k,resto);
    ordenarArreglo(j,multde3);
    insercionArreglo(j,multde3);
    j=10;
    ordenarArreglo(j,multde3);
    mostrarArreglo(arreglo,j,multde3,k,resto);
    return 0;
}

//implementacion de funciones
void mostrarArreglo(int arreglo[],int j,int multde3[],int k,int resto[]){
    int i;
    printf("Arreglo original\n");
    for (i=0;i<10;i++){
        printf("%d ",arreglo[i]);
    }
    printf("\n");
    if (j!=0){
        printf("Arreglo con multiplos de 3\n");       
    for (i=0;i<j;i++){
        printf("%d ",multde3[i]);
    }
    printf("\n");
    }else{
        printf("No existen multiplos de 3 en el arreglo\n");
    }
    if (k!=0){
    printf("Arreglo del resto de numeros\n");  
    for (i=0;i<k;i++){
        printf("%d ",resto[i]);
    }
    }else{
        printf("Todos son multiplos de 3 por ende no hay otro arreglo con los nros restantes");
    }
    
}
void ordenarArreglo(int j,int multde3[]){
    int i, k, aux;
    if (j!=0){
         for (i = 0; i < j - 1; i++) {
            for (k = 0; k < j - 1 - i; k++) {
            if (multde3[k] > multde3[k + 1]) {
                aux = multde3[k];
                 multde3[k] = multde3[k + 1];
                 multde3[k + 1] = aux;
               }
             }
        }  
        printf ("\nArreglo de mult de 3 ordenado\n");
        for (i=0;i<j;i++){
        printf("%d ",multde3[i]);
        } 
    }
}
void insercionArreglo(int j,int multde3[]){
    int i;
    printf("\nEl arreglo mult de 3 tiene %d posiciones completar hasta llegar a 10 posiciones con mult de 3:",j);
    for (i=j;i<10;i++){
        scanf("%d",&multde3[i]);
    }
}
#include <stdio.h>
#include <conio.h>
int main() {
    char cadena[5]={'h','o','l','a','\0'};
    char cad1[5];
    char q;
    int i,qcad1,qcadena,qnombre,qapellidos;
    printf("La cadena es:\n");
    i=0;
    while (i<5){
        printf("caracter %d:%c\n",i,cadena[i]);
        i++;
    }
    getch();

    char nombre[10], apellidos[10];

    printf("Introduce tu nombre: ");
    scanf("%s",&nombre);
    printf("Introduce tus apellidos: ");
    scanf("%s",&apellidos);
    printf("Usted es %s %s\n",nombre,apellidos);

    i=0;
    while (i<5){
        printf("Introduce un caracter:\n ");
        cad1[i]=getch();
        i++;
    }
    i=0;
    while (i<5){
        printf("Caracter %d:%c\n",i,cad1[i]);
        i++;
    }

    printf("Ingresar caracter y se vera cuantas veces esta en todas las cadenas:");
    scanf("%c",q);
    qcad1,qcadena=0;
    for ( i = 0; i < 5; i++){
        if (cad1[i]==q){
            qcad1++;
        }
        if (cadena[i]==q){
            qcadena++;
     }
    }

    if (qcad1==qcadena){
        printf("En ambas cadenas %c aparece %d veces\n",q,qcad1);
    }else if(qcad1>qcadena){
        printf("El %c aparece %d veces en cad1",q,qcad1);
        }else{
            printf("El %c aparece %d veces en cad1",q,qcadena);
        }
    return 0;
}

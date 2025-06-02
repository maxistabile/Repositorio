#include <stdio.h>

int main (){
int año;

printf("Ingrese el año:");
scanf("%d",año);

if (año%4==0){
    printf("Es año bisiesto\n");
    if (año%100==0 && año%400!=0){
        printf("No es año bisiesto\n");
     
    }
}else{
    printf("No es año bisiesto\n");
}


    return 0;
}
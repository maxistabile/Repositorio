#include <stdio.h>
#include <string.h>

int main(){
char cadena[20]="neuquen";
int i,longitud;
printf("Cadena original\n");
printf("%s \n",cadena);
longitud=strlen(cadena);
printf("Cadena invertida\n");
for(i=longitud-1;i>=0;i--){
    printf("%c",cadena[i]);
}
int inicio,fin,esPalindromo;
esPalindromo=1;
inicio=0;
fin=longitud-1;
while(inicio<fin){
    if(cadena[inicio]!=cadena[fin]){
        esPalindromo=0;
        break;
    }
    inicio++;
    fin--;
}
if(esPalindromo){
    printf("\nLa cadena %s es un palindromo",cadena);
}else
    printf("\nLa cadena %s no es un palindromo",cadena);
    return 0;
}

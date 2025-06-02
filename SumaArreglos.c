#include <stdio.h>

int main() {
int c,i;
int A[5];
int B[5];
int C[5];

for (c=0;c<5;c++){
    printf("Ingrese un valor para el arreglo A:");
    scanf("%d",&A[c]);
}
for (c=0;c<5;c++){
    printf("Ingrese un valor para el arreglo B:");
    scanf("%d",&B[c]);
}
for (i=0;i<6;i++){
C[i]=A[i]+B[i];
}

printf("\n%-10s %-10s %-10s\n", "A", "B", "A+B");
    printf("-----------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-10d %-10d %-10d\n", A[i], B[i], C[i]);
    }



    return 0;
}

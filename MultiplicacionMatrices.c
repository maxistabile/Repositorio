#include <stdio.h>

int main() {
int A[3][3],B[3][3],C[3][3];
int i,j,k;

for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        printf("Ingrese el elemento A(%d,%d):",i,j);
        scanf("%d",&A[i][j]);
    }
}
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        printf("Ingrese el elemento B(%d,%d):",i,j);
        scanf("%d",&B[i][j]);
    }
}
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        C[i][j]=0;
        for (k=0;k<3;k++){
            C[i][j]= C[i][j]+(A[i][k]*B[k][j]);
        }
    }
}

    printf("-----------------------------------\n");
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        printf("%d\t",C[i][j]);
        if (j==2){
            printf("\n");
        }
    }
}
    printf("-----------------------------------\n");

    return 0;
}

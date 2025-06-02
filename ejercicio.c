#include <stdio.h>

int main() {
int i,j,k;
int A [10]={0,1,2,3,4,5,6,7,8,9};
int M [3][3];
k=0;
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
          M[i][j]=A[k];
          k++;
    }
}

for (i=0;i<3;i++){
    for (j=0;j<3;j++){

          printf ("%d " ,M[i][j]);
    }
    printf("\n");
}
printf("Los elementos de la diagonal principal son: ");
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        if (i==j){
            printf ("%d " ,M[i][j]);
        }
          
    }
}





    return 0;
}
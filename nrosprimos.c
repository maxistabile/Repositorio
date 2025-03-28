#include <stdio.h>

int main() {
    int limite, i, j, primo;
    
    printf("Ingrese hasta que numero desea ver los numeros primos: ");
    scanf("%d", &limite);
    
    printf("Los números primos del 1 al %d son:\n", limite);
    
    for (i = 2; i <= limite; i++) {
        primo = 1;
        for (j = 2; j < i && primo != 0; j++) {
            if (i % j == 0) {
                primo = 0;
            }
        }
        if (primo!=0) {
            printf("%d ", i);
        }
    }
    return 0;
}

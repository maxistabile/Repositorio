#include <stdio.h>
#include <math.h>
int main() {
float a,b,c,discriminante,x1,x2;
printf("Ingrese por favor el coeficiente cuadrático (Ej 3x^2 seria 3:)");
scanf("%f",&a);
printf("Ingrese por favor el coeficiente lineal (Ej -5x seria 5 en caso de no tener ingrese 0:)");
scanf("%f",&b);
printf("Ingrese por favor el termino independiente (Ej +62 en caso de no tener ingrese 0:)");
scanf("%f",&c);
if (a == 0) {
    printf("No es una ecuación cuadrática.\n");
    return 1;
}

discriminante=pow(b,2)-(4*a*c);
x1=(-b+sqrt(discriminante))/(2*a);

if (discriminante>0)
{
    x1=(-b+sqrt(discriminante))/(2*a);
    x2=(-b-sqrt(discriminante))/(2*a);
    printf("Las raices de la ecuacion cuadratica son: x1=%.2f y x2=%.2f\n",x1,x2);
} else if (discriminante==0)
{
    x1 = -b / (2 * a);
    printf("Las raíces son reales e iguales: x = %.2f\n", x1);
} else {
    double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        printf("Las raíces son complejas: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n",
               parteReal, parteImaginaria, parteReal, parteImaginaria);
}




    return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
    //compilar calcular binimio al cuadrado
    int a,b,valor1,valor2,valor3;
    //pedir datos
    printf("Introduce el valor de a");
    scanf("%d", &a);
    printf("Introduce el valor de b");
    scanf("%d", &b);
    //formula
    valor1 = pow (a,2);
    valor2 = (2 * a) * b;
    valor3 = pow (b,2);
    
    //resultado
    printf("valor1 = %d\nvalor2 = %d\nvalor3 = %d\n",valor1,valor2,valor3);
    
    return 0;
}
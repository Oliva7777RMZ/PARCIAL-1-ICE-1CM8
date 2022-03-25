#include <stdio.h>
int main(){
    //compilar calcular fuerza
    float fuerza,masa,aceleracion;
    //pedir datos
    printf("Dame el valor de la masa");
    scanf("%f", &masa);
    printf("Dame el valor de la aceleracion");
    scanf("%f", &aceleracion);
    //formula
    fuerza = masa * aceleracion;
    //resultado
    printf("masa = %f\naceleracion = %f\nfuerza = %f\n",masa,aceleracion,fuerza);

    return 0;
}
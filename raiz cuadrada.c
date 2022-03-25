# include <stdio.h>
# include <math.h>
int main(){
    //compilar calcular raiz cuadrada
    float raiz,resultado;
    //pedir datos
    printf("Dame la raiz a sacar");
    scanf("%f", &raiz);
    //formula
    resultado = sqrt(raiz) ;
    //resultado
    printf("raiz = %f\nresultado = %f\n",raiz,resultado);
    
    return 0;
}
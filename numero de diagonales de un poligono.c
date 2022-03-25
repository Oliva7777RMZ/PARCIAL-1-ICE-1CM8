# include <stdio.h>
int main(){
    //compilar calcualr diagonales de un poligono
    float lados,diagonales;
    //pedir datos
    printf("Introduce el numero de lados del poligono");
    scanf("%f", &lados);
    //formula
    diagonales = ((lados - 3)* lados)/2;
    //resultado
    printf("Numero de lados = %f\nNumero de diagonales = %f\n",lados,diagonales);
    
    return 0;
}
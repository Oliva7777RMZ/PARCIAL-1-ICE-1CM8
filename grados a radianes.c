# include <stdio.h>
# include <math.h>
int main(){
    //compilar 
    float grados;
    float radianes;
    //pedir datos
    printf("dame los grados ");
    scanf("%f", &grados);
    //formula
    radianes = (grados * M_PI)/180;
    //resultados
    printf("grados = %f", grados);
    printf("radianes = %f",radianes);
    
     return 0;
}

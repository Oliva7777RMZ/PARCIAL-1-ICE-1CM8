# include <stdio.h>
int main(){
    //compilar area de un rombo
    float d1,d2,area;
    //pedir datos
    printf("introduce el valor de la diagonal 1");
    scanf("%f", &d1);
    printf("introduce el valor de la diagonal 2");
    scanf("%f", &d2);
    //formula
    area =(d1 * d2)/2;
    //resultado
    printf("d1 = %f\nd2 = %f\narea = %f\n",d1,d2,area);
    
    return 0;
}
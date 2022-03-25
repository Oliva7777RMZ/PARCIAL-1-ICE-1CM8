# include <stdio.h>
# include <math.h>
int main(){
    //comiplar area de una elipce
    float a,b,area;
    //pedir datos
    printf("ingresa el valor de a");
    scanf("%f", &a);
    printf("ingrese el valor de b");
    scanf("%f", &b);
    //formula
    area = a * b * M_PI;
    //resultado
    printf("area = %f", area);
    
    return 0;
}
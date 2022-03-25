# include <stdio.h>
# include <math.h>
int main(){
    //codificar area circulo
    float radio,area;
    //pedir datos
    printf("vame el valor del radio");
    scanf("%f",& radio);
    //formula
    area = (M_PI * radio) * radio;
    //resultado
   printf("area = %f",area);
    
        return 0;
}

#include <stdio.h>
int main (){
    //compilar promedio de un grupo
    float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,promedio;
    //pedir datos
    printf("Calificacion del alumno 1");
    scanf("%f", &a1);
    printf("Calificacion del alumno 2");
    scanf("%f", &a2);
    printf("Calificacion del alumno 3");
    scanf("%f", &a3);
    printf("Calificacion del alumno 4");
    scanf("%f", &a4);
    printf("Calificacion del alumno 5");
    scanf("%f", &a5);
    printf("Calificacion del alumno 6");
    scanf("%f", &a6);
    printf("Calificacion del alumno 7");
    scanf("%f", &a7);
    printf("Calificacion del alumno 8");
    scanf("%f", &a8);
    printf("Calificacion del alumno 9");
    scanf("%f", &a9);
    printf("Calificacion del alumno 10");
    scanf("%f", &a10);
    //formula
    promedio =(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10)/10;
    //resultado
    printf("promedio = %f ",promedio);
    return 0;
}
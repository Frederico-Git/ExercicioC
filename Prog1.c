#include <stdio.h>

void main () {
    int Fahrenheit;
    float Celsius;

    //Input de graus Fahrenheit e guarda-lo// 
    printf("Fahrenheit? \n");
    scanf(" %d", &Fahrenheit);

    // Para converter graus Fahrenheit para graus Celsius, subtraia 32 e divida por 1,8.// 
    Celsius =  (Fahrenheit - 32) / 1.8;
    printf(" A conversao de Fahrenheit para Celsius e de: %0.1f",Celsius);

}
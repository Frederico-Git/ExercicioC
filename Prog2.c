#include <stdio.h>

int main (void){
    int num;
    int conta;

    printf("Escolha um numero? \n");
    scanf(" %d", &num);

    conta = num + 1;
    printf("O seu numero sucessor e de: %d \n",conta);

    conta = num - 1;
    printf("O seu numero antecessor e de: %d \n", conta);
}
#include <stdio.h>

int main (void) {
    int Menu;
    float num;
    float num1;
    float conta;

    printf("Escolha um Menu! \n");
    printf(" [1] Multiplicacao \n [2] Divisao \n [3] Adicao \n [4] Subtracao \n");
    scanf(" %d", &Menu);

    switch (Menu)
    {
    case 1:
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolha outro numero \n");
        scanf(" %f", &num1);
        conta = num * num1;
        printf("A multiplicacao e: %0.2f\n",conta);
        break;
    case 2:
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolha outro numero \n");
        scanf(" %f", &num1);
        conta = num / num1;
        printf("A Divisao e: %0.2f\n",conta);
        break;
    case 3:
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolha outro numero \n");
        scanf(" %f", &num1);
        conta = num + num1;
        printf("A Adicao e: %0.2f\n",conta);
        break;
    case 4:
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolha outro numero \n");
        scanf(" %f", &num1);
        conta = num - num1;
        printf("A subtracao e: %0.2f\n",conta);
        break;
    
    default:
        break;
    }
}

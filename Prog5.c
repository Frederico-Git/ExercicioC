#include <stdio.h>

int main (void) {
    int Menu;
    float conta;
    float num;
    float num1;

    printf ("Escolha uma opcao do Menu! \n");
    printf (" [1] Multiplicacao \n [2] Divisao \n [3] Adicao \n [4] Subtracao \n");
    scanf(" %d", &Menu);
    
    if (Menu == 1)
    {
        printf("Multiplicacao \n");
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolhe outro numero \n");
        scanf(" %f", &num1);
        conta = num * num1;
        printf("A multiplicacao e: %0.1f \n",conta);
    }
    else if (Menu == 2)
    {
        printf("Divisao \n");
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolhe outro numero \n");
        scanf(" %f", &num1);
        conta = num / num1;
        printf("A Divisao e: %0.1f \n",conta);
    }
    else if (Menu == 3)
    {
        printf("Adicao \n");
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolhe outro numero \n");
        scanf(" %f", &num1);
        conta = num + num1;
        printf("A Adicao e: %0.1f \n",conta);
    }
    else
    {
        printf("Escolha um numero \n");
        scanf(" %f", &num);
        printf("Escolhe outro numero \n");
        scanf(" %f", &num1);
        conta = num - num1;
        printf("A Subtracao e: %0.1f \n",conta);
    }
    
    
    
    
}
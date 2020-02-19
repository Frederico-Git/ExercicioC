#include <stdio.h>

int main (void) {
    float Dias;
    float aluger;
    float KMilimitados = 27.50;
    float KMdiarios = 14 * 0.17;
    float tarifa;
    int menu;
    
    printf("Bem-vindo a Rent a Car Valcorba! \n");
    printf("Escolha uma das opcoes do menu! \n");
    printf(" [1] A \n [2] B \n C \n D \n");
    scanf(" %d", &menu);
    printf(" Quantos dias vai querer usar o aluguer do carro? \n");
    scanf(" %f", &Dias);
    
    if (menu == 1)
    {
        printf("Qual vai escolher KM ilimitados ou KM Diarios? \n ");
        scanf(" %f, %f", &KMilimitados, &KMdiarios);
        if (KMilimitados)
        {
            printf("O custo de KM ilimitados e de: %0.2f \n",KMilimitados);
        }
        else if (KMdiarios)
        {
            printf("O custo de KM diarios e de: %0.2f \n", KMdiarios);
        }
        
        

    }
    
}
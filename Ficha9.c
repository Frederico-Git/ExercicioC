#include <stdio.h>

int main (void){
    int menu;
    float viagem = 620;
    float hotel = 40;
    float aluguer = 29;
    float conta;
    int dias;
    int pessoas;

    printf("                        Agencias Viagens\n");
    printf("Escolha o menu \n");
    printf(" [1] Viagens \n [2] Hotel \n [3] Aluguer \n [4] Viagem + Hotel -15% \n [5] Hotel + Aluger -5% \n [6] Viagem + Aluger -75% \n [7] Viagem + Hotel + Aluguer -25% \n");
    scanf(" %d", &menu);

    if (menu == 1)
    {
        printf("A viagem custa 620€ por pessoa. \n");
        printf("Quantos dias vai querer viajar? \n");
        scanf(" %d", &dias);
        printf(" [1] Lisboa 30% \n [2] Porto 26% \n [3] Rabo de Peixe -96% \n");
        scanf(" %d", &menu);
        if (menu == 1)
        {
            conta = (viagem * 1.30) * dias;
            printf("A viagem custa %0.2f",conta);
        }
        else if (menu == 2)
        {
            conta = (viagem * 1.26) * dias ;
            printf("A viagem custa %0.2f",conta);
        }
        else
        {
            conta = (viagem / 1.96) * dias;
            printf("A viagem custa %0.2f",conta);
        }
    }
    else if (menu == 2)
    {
        printf("O Hotel custa 40€ por pessoa. \n");
        printf(" [1] Tivoci-Lisboa 20% \n [2] Universo-Porto 15% \n [3] Caranguejo-Rabo de Peixe -94% \n");
        scanf(" %d", &menu);
        printf("Quantas pessoas vao? \n");
        scanf(" %d", &pessoas);
        if (menu == 1)
        {
            conta = (hotel * 1.20) * pessoas;
            printf("O Hotel vai custar %0.2f",conta);
        }
        else if (menu == 2)
        {
            conta = (hotel * 1.15) * pessoas;
            printf("O Hotel vai custar %0.2f",conta);
        }
        else
        {
            conta = (hotel / 1.94) * pessoas;
            printf("O Hotel vai custar %0.2f",conta);
        }
    }
    else if (menu == 3)
    {
        printf("O aluguer custa 29€ por dia. \n");
        printf(" [1] Europcar 15% \n [2] Altis 16% \n [3] Carroca -98%");
        scanf(" %d", &menu);
        printf("Quantos dias vai necessitar do Aluguer? \n");
        scanf(" %d", &dias);
        if (menu == 1)
        {
            conta = (aluguer * 1.50) * dias;
            printf("O Aluguer vai custar %0.2f",conta);
        }
        else if (menu == 2)
        {
            conta = (aluguer * 1.16) * dias;
            printf("O aluguer vai custar %0.2f",dias);
        }
        else
        {
            conta = (aluguer / -1.98) * dias;
            printf("O Aluguer vai custar %0.2f",conta);
        }   
    }
       
              
    }
    

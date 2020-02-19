#include <stdio.h> 

int main (void){
    float A;
    float B;
    float valvula;
    float entrada;
    float saida;
    float conta;

    printf("Qual o valor da entrada \n");
    scanf(" %f", &entrada);

    printf("Qual o valor da saida \n");
    scanf(" %f", &saida);

    printf("Qual o valor do Reservatorio A? \n");
    scanf(" %f", &A);

    printf("Qual o valor do Reservatorio B? \n");
    scanf(" %f", &B);

    if (saida < entrada && A >= B)
    {         
        printf("Valvula abre 50 porcento \n");
    }
    else if (saida = entrada && A > B)
    {
        printf("Valvula abre a 100 porcento \n");
    }
    else if (saida >= entrada && A > B)
    {
        
    }
    else if (A < B && saida < entrada)
    {
        printf("Ligar a valvula com o valor %0.2f", saida);
    }
    else if ( A > B )
    {
        conta = B * 0.10;
       if (entrada > saida)
       {
           printf("Valvula abre a 10 porcento \n");
       }
        
    }
    
    
    
}
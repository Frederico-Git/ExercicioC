#include <stdio.h> 

int main (void) {   
    float importancia = 500000;
    float vencedores;
    float conta;

    printf("A importancia de 500.000 vai ser distribuido por 3 vencedores \n");
    printf("O primeiro vencedor vai receber 46 porcento do valor da importancia \n");

    conta = importancia * 0.46;
    printf("O primeiro vencedor recebeu %0.1f \n", conta);

    conta = importancia * 0.32;
    printf("O segundo vencedor recebeu %0.1f \n",conta);

    // O terceiro recebe o restante //

    conta = importancia * 0.22;
    printf("O terceiro vencedor recebeu %0.1f \n",conta);
}
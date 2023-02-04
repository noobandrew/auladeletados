#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main () {

    int chute;
    int numerosecreto = 42;



    printf("Qual e o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);

    if (acertou) {
        printf("Parabens! Voce acertou!\n");
        printf("Jogue de novo, voce e um bom jogador!\n");
    }
    else {
        int maior = chute > numerosecreto;
        if(maior) {
            printf("Seu chute foi maior que o numero secreto.\n");
        } else {
            printf("Seu chute foi menor que o numero secreto.\n");

        }
    }

}





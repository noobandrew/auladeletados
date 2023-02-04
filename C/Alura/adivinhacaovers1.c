#include <stdio.h>
#include <stdlib.h>

// Esse é o exercício do jogo de adivinhação do curso de C parte I da Alura.
// Tomei a liberdade de adicionar bibliotecas e a função rand.



int main(){
	
	
    srand(time(NULL));

	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");	
	printf("********Digite um número de 1 a 10********\n");	
	printf("******************************************\n");

	int numerosecreto = rand() % 10;

	int chute;

	printf("Qual e o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n e o numero secreto era %d\n", chute, numerosecreto);

	if (chute == numerosecreto) {
	printf("Parabens, voce acertou.");
         }
	else {
	printf("Que pena, voce errou.");
	     }




}

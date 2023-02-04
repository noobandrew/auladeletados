#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Primeiro trabalho com nota da Disciplina Laboratório de Programação I, ministrada pelo professor Benhur Stein.
//Um dos programas acima pede para o usuário adivinhar um número secreto. Faça um programa que faz o contrário:
//pede para o usuário pensar em um número e depois chuta valores até acertar. Para cada chute do programa, 
//o usuário deve responder se acertou ou se entá acima ou abaixo do valor secreto (por exemplo, digitando 0, 1 ou 2).
// O chute do programa deve ser um valor aleatório entre os valores que ainda são possíveis a cada chute.

int main(){
  int maximo, minimo=1, chute, verifica, tentativas = 0;
  int menor=0, maior=1, correto=2;

  srand(time(NULL));
  printf("******************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinhacao *\n");	
  printf("******************************************\n");
  printf("Pense em um numero e o computador adivinhara qual foi!\n");
  printf("Qual o valor maximo que o computador devera considerar?\n");
  scanf("%d", &maximo);
  maximo++;
  chute= rand() % maximo;

  printf("Como guiar o computador na adivinhacao:\n");
  printf("Se o chute foi MENOR, digite 0, se foi MAIOR digite 1, e se for o correto digite 2.\n");   
  printf("O computador chutou o numero: %d \n", chute);
  printf("Voce pensou em um numero maior ou menor?");
  scanf("%d", &verifica);
  tentativas++;
    if (verifica == menor) {
        maximo = chute;
        chute=minimo+rand()%(maximo-minimo);
    } else if(verifica == maior){
          minimo = chute;
          chute=minimo+rand()%(maximo-minimo);
    } else if(verifica == correto) {
          printf("O computador chutou o numero: %d \n", chute);  
		  if (tentativas == 1) {
			printf("OBA! O computador acertou de primeira!");
		  } else {
          printf("O computador acertou em %d tentativas!\n", tentativas);
		  }
    } 
return 0;
}

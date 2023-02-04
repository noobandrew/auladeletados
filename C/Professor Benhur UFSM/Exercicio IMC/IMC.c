//Enunciado proposto pelo prof Benhur Stein
//"Faça um programa que calcula o IMC, a partir da altura e peso informados pelo usuário.
// O programa deve informar a classificação (normal, obeso, etc), além do índice numérico.
// Use seleção múltipla com ifs aninhados."


#include <math.h>
#include <stdio.h>


int main () {

  float peso;
  float altura;

  printf("Digite sua altura em metros:\n");
  scanf("%f", &altura);
  printf("Digite seu peso em kg:\n");
  scanf("%f", &peso);
 
  float imc =  peso/(altura*altura);

   if (imc < 18.5) {
     printf("Seu IMC e %.2f e esta dentro da classificacao MAGREZA.\n", imc);
   } else if (imc < 25 ) {
     printf("Seu IMC e %.2f e esta dentro da classificacao NORMAL.\n", imc);
   } else if (imc >= 25 && imc < 30 ) {
     printf("Seu IMC e %.2f e esta dentro da classificacao SOBREPESO.\n", imc);
   } else if (imc >= 30 && imc <40 ) {
     printf("Seu IMC e %.2f e esta dentro da classificacao OBESIDADE.\n", imc);
   } else if (imc >=40) {
     printf("Seu IMC e %.2f e esta dentro da classificacao OBESIDADE GRAVE.\n", imc);
   } else {
     printf("O IMC %f e invalido.\n", imc);
   }



return 0;

}
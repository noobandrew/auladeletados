// Variação do primeiro exercício sobre suco de laranja do prof Benhur.


// Enunciado:
// Faça um programa para ler do usuário, calcular e imprimir o valor de um litro de suco de laranja.
// Nesse caso, a única informação dada pelo professor era de que
// o extraível de suco em 1kg de laranja era 800ml. O resto ficava
// a cargo das entradas dadas pelo usuário.

// Dessa vez, o professor já havia apresentado o tipo float. Para
// encerrar o programa, decidi utilizar um "do while" que vi em
// um programa de média aritmética.

// 1.25 é o multiplicador que deixa a quantidade de suco extraído
// proporcional matematicamente ao quilo da laranja (1000/800 = 1.25)




#include <stdio.h>

int main()
{
    float customaodeobra;
    float custolaranja;
    int resp;
    do
  {
    
    printf("Digite o custo do quilo de laranja:\n");
    scanf("%f", &custolaranja);
    printf("Digite o custo de mao de obra e lucro:\n");
    scanf("%f", &customaodeobra);

    custolaranja = custolaranja * 1.25;

    printf("O valor do litro da laranja e %.2f.\n Digite 1 para continuar ou qualquer outro numero para saire tecle ENTER\n", custolaranja + customaodeobra);
    
    scanf("%d", &resp);
  
  }while (resp==1);
    return 0;
}
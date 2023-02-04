// Exercício 3, versão 1 do Professor Benhur Stein.
// Nesse, o enunciado (consta abaixo) dá os valores, só é preciso montar o programa.
// Fiz regra de três manualmente para adaptar o custo para 1L, já que com 1KG de laranja,
// o custo seria 20, mas renderia apenas 800ml de suco. Como a pergunta é sobre o 1L de suco,
// foi assim que resolvi. Pretendo seguir o conselho do professor e deixar o programa
// fazer os cálculos por mim. 



// Faça um programa para calcular e imprimir o valor de um litro de suco de laranja.
// Esse programa deve inicializar uma variável com o custo de um quilo de laranja (20),
// outra com a quantidade de suco, em ml, extraível de um quilo (800),
// outra com o custo da mão de obra mais lucro para produzir um litro de suco (14).


#include <stdio.h>

int main()
{
    int custolaranja;
    int customaodeobra;
    custolaranja = 25;
    customaodeobra = 14;
    
    
    printf("O litro de suco custa %d\n", custolaranja + customaodeobra);
    
    

    return 0;
}
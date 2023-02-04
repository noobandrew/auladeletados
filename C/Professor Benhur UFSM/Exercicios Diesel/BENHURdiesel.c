// Exercício sugerido do Professor Benhur Stein. Enunciado abaixo//


// Suponha que o valor de um litro de diesel seja 666 centavos de real, e que um caminhão tem um tanque onde cabem 333 litros.
// Faça um programa para calcular o valor necessário para encher o tanque inicialmente vazio.
// O programa deve imprimir o valor separando reais e centavos (por exemplo, "234 reais e 27 centavos"). Dica: pra que serve o resto da divisão mesmo?

#include <stdio.h>

int main()
{
    int litrodiesel;
    int capacidadecaminhao;
    litrodiesel = 666;
    capacidadecaminhao = 333;
    
    int valoreal = (litrodiesel * capacidadecaminhao) / 100;
    int valocent = (litrodiesel * capacidadecaminhao) % 100;
    


    printf("o valor é %d reais e %d centavos\n", valoreal, valocent);
    
    
    return 0;
}

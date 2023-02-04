## Exercícios de aula
```c
DISCLAIMER: deletei tudo sem querer e agora to reupando
```

Aqui, salvarei exercícios feitos nas aulas da UFSM ou em cursos online.

## Exemplo

```c

// Exercício proposto pelo professor Benhur Stein. Enunciado abaixo

// Faça um programa para calcular o consumo de um carro. Para usar o programa, deve-se encher o tanque do carro,
// anotar o valor no odômetro, rodar com o carro, encher novamente o tanque, e anotar novamente o valor do odômetro
// e número de litros de combustível que couberam no tanque. O programa pede então os 3 valores anotados
// e calcula o consumo (dividindo o número de quilômetros percorridos pelo número de litros usados nesse percurso
// tem-se o consumo em km/l). Além de informar o consumo em km/l, o programa deve também informar em milhas por galão
// e em litros para 100km, como é usual nos EUA e na Europa. Um galão equivale a 3,79 litros; uma milha a 1,609 km.


  #include <stdio.h>


   int main()
   {
     float odo1, odo2 = 0;


     printf("Digite o valor do odometro antes de começar a viagem\n");
     scanf("%f", &odo1);

     printf("Digite o valor do odometro ao final da viagem:\n");
     scanf("%f", &odo2);
     
     float litros;
     printf("Digite quantos litros de combustível couberam no último abastecimento:\n");
     scanf("%f", &litros);
     
     float km = odo2 - odo1;

     printf("Consumo: %.2f km/l", km/litros);
     printf(" %.2f l/100km", litros/(km/100));
     
     float milhas = km / 1.609;
     float gal = litros / 3.79;
     printf(" %.2f milhas por galao\n", milhas/gal);
     
     return 0;
     
   }




```

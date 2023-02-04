// Primeira tentativa de utilizar a potenciação em C.
// Utilizei pela primeira vez a biblioteca math.h
// Utilizei pela primeira vez o comando "system(“pause”)"



#include <math.h>
#include <stdio.h>
 
int main()
{   
    int x;
    int y;

    printf("Digite a base\n");
    scanf("%d", &x);
    printf("Digite o expoente\n");
    scanf("%d", &y);

    double resp = pow(x, y);

    printf("O resultado e %.2lf\n", resp);

    system("pause");
    

 
   
    return 0;
}
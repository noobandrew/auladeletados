//Enunciado proposto pelo prof Benhur Stein
//"Faça um programa que calcula o IMC, a partir da altura e peso informados pelo usuário.
// O programa deve informar a classificação (normal, obeso, etc), além do índice numérico.
// Use seleção múltipla com ifs aninhados."


int main () {

  int ano;

  printf("Digite o ano desejado\n");
  scanf("%d", &ano);
 
  if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
      printf("Bissexto.\n");
  } else {
    printf("Não bissexto.\n");
  }


return 0;

}
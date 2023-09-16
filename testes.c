#include <stdio.h>

int menu()
{

  //Declaração da variável
  int code;
  
  //Menu principal
  printf("----PLANNER----\n");
  printf("| 0 - Exit    |\n");
  printf("| 1 - Login   |\n");
  printf("| 2 - Sign up |\n");
  printf("+-------------+\n");
  printf("O que gostaria de fazer?\n");

  //Receber input
  scanf("%d", &code);

  if (code == 1) {
    printf("Faça seu login\n");
  }
  else if (code == 2) {
    printf("Vamos realizar o seu cadastro\n");
  }
  else {
    printf("Finalizando o programa\n");
  }

  return 0;

}

int main()
{
  menu();
  return 0;
}

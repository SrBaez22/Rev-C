#include <stdio.h>
int main()
{
  printf("*************************\n");
  printf("Bem vindo ao jogo de advinhacao\n");   
  printf("*************************\n");

    int numerosecreto = 42;
    int chute;

    for(int i = 1; i<= 3; i++)
  {
    printf("\ntentativa %d de 3\n", i);
    printf("\nChute um numero:");
    scanf("%d", &chute);
    printf("\nseu chute foi: %d\n", chute);

    int acertou = (chute==numerosecreto);

     if (acertou)
    {
      printf("\nParabens, voce acertou!");
      printf("\nJogue denovo, voce e um bom jogador!");
      break;
     }
    else
    {
    int maior = (chute>numerosecreto);
     if (maior)
    {
      printf("\nVoce errou!");
      printf("\nSeu numero e maior do que eu pensei, tente um chute mais baixo!");
      printf("\nnao desanime, tente denovo");
    }
    else
    {
      printf("\nSeu chute e menor que o numero que eu pensei");
      printf("\nTente um numero maior");
    }
  }
  }
}
#include <stdio.h>
int main(){
  printf("*************************\n");
  printf("Ola mundo\n");   
  printf("*************************\n");

int numerosecreto = 42;
int chute;

  printf("Chute um numero:");
  scanf("%d", &chute);
  printf("seu chute foi: %d", chute);

  if (chute==numerosecreto){
      printf("\nParabens, voce acertou!");
      printf("\nJogue denovo, voce e um bom jogador!");
  }
  else{
    if (chute>numerosecreto)
    {
      printf("\nVoce errou!");
      printf("\nSeu numero e maior do que eu pensei, tente um chute mais baixo!");
      printf("\nnao desanime, tente denovo");
    }
    if(chute<numerosecreto){
      printf("\nSeu chute e menor que o numero que eu pensei");
      printf("\nTente um numero maior");
    }
    
  
  
  }
}
#include <stdio.h>

int main(){
  int num1, num2;
  
  printf("Escolha dois numeros: ");
  scanf("%d %d", &num1, &num2);

  int mul = num1 * num2;

  printf("\na multiplicacao desses numeros e: %d", mul);
}
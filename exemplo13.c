#include <stdio.h>

int main(){

int num1, num2;

printf("Digite 2 numero inteiro:\n");
scanf("%i %i", &num1, &num2);

if (num2 == 0)
  printf("Divisao por 0 nao permitido.\n");
else{

if (num1 % num2 == 0)
printf("%i e divisil por %i.\n", num1, num2);
else 
printf("% nao e divisil por %i.\n", num1, num2);
}

return 0;

}
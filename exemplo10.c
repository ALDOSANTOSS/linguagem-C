#include <stdio.h>

int main(){

int idade;

printf("Favor informar a idade:\n");
scanf("%i", &idade);

if (idade < 18){
printf("Bebidas alcoolicas nao estao liberadas.\n");
} else {
printf("Bebidas alcoolicas liberadas.\n");
}

return 0;

}
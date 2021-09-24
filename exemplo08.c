#include <stdio.h>

int main(){

int fatorial = 6;
int resposta = 1;

for ( ; fatorial >= 1; --fatorial) {
    resposta *= fatorial;
}

printf("O resultado do numero fatorial e %i\n", resposta);

return 0;

}


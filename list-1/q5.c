#include <stdio.h>

void main(){
    int number = 1;
    int maior = 0;

    while(number){
        printf("Digite um número => ");
        scanf("%i", &number);

        if(number > maior){
            maior = number;
        }
        printf("Maior número => %i\n", maior);
    }
}
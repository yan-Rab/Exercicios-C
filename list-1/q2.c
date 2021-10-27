#include <stdio.h>

void main(){
     int number = -1;
    char days_of_week[7][10] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

    do{
        printf("Digite um número [1 / 7] => ");
        scanf("%i", &number);
        printf("%s\n", days_of_week[number - 1]);
    }
    while(number != 0);
}
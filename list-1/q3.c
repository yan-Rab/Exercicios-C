# include <stdio.h>
void main(){
    int number;
    int result = 1;

    printf("Digite um numero inteiro positivo => ");
    scanf("%i", &number);
    printf("%i! = ", number);

    for(int c = number; c >= 1; c--){
        result *= c;
        printf("%i", c);
        if(c != 1){
            printf(" x ");
        }
    }
    printf(" = %i\n", result);
}
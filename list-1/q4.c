#include <stdio.h>
void main(){
    int jose_height = 150;
    int pedro_height = 110;
    int flag = 1;
    int years_count = 0;
    while(flag){
        if(jose_height == pedro_height){
            flag = 0;
        }
        jose_height += 2;
        pedro_height += 3;
        years_count += 1;
    }
    printf("Tempo até Pedro alcançar José => %i anos\n", years_count);
}
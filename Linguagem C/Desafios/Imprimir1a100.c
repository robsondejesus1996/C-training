#include <stdio.h>

int main(){
    //repare no menor-igual 
    for(int i = 1; i <=100; i++){
        printf("%d \n", i);
    }

    printf("---------------------------------\n");
    printf("Usando o while\n");
    int numero = 1;

    while(numero <=100){
        printf("%d\n ", numero);
        numero++;
    }
}
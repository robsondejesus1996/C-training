#include <stdio.h>

int main()
{
    
    int num1;
    int num2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    int soma = num1+num2;
    int multiplicacao = num1 * num2;

    printf("A soma e: %d", soma);
    printf("\n");
    printf("A multiplicacao e: %d", multiplicacao);
}
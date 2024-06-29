#include <stdio.h>

int main()
{

    // imprime cabecalho do nosso jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("***************************************\n");

    int numerosecreto = 42;

    int chute;
    printf("Qual e o seu chute? ");

    //ler do teclado 
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);

    
}

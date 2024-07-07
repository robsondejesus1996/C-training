#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{

    // imprime cabecalho do nosso jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("***************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade\n");
    printf("(1) facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas = 5;

    if(nivel == 1){
        numerodetentativas = 20;
    }

    else if(nivel == 2){
        numerodetentativas = 15;
    }else{
        numerodetentativas = 6;
    }

    for(int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d \n", tentativas);
        printf("Qual e o seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

         if(chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            //não é para parar
            continue; 
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;


        if(acertou){
            // Se acertou vai parar
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }
        
        tentativas = tentativas + 1;

        double pontosperdidos = abs (chute - numerosecreto) / (double) 2;
        pontos = pontos - pontosperdidos;


        printf("Fim do jogo!\n");

        if(acertou){
            printf("Voce ganhou!\n");
            printf("Voce acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);
        }else{
            printf("Voce perdeu! tente de novo\n");
        }
    }
    

    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas", tentativas);
    printf("Total de pontos: %.1f\n", pontos);

    
}

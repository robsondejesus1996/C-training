#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{

    // imprime cabecalho do nosso jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("***************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    


    int ganhou = 0;
    while(1){
        printf("Tentativa %d \n", tentativas);
        

        printf("Qual e o seu chute? \n");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);


        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

         if(chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            //não é para parar
            continue; 
        }


        if(acertou){
            printf("Parabens voce acertou\n");
            printf("Jogue de novo, voce e um bom jogador\n");

            // FOR parar de executar
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }
        
        tentativas = tentativas + 1;

        double pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    

    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas", tentativas);
    printf("Total de pontos: %f\n", pontos);

    
}

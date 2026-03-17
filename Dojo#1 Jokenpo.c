#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jokenpo(){
    int ptscpu = 0;
    int ptsuser = 0;
    int jogadacpu;
    int opcao;
    char jogada;

    srand(time(NULL));

    while (ptscpu < 5 && ptsuser < 5){

        printf("ESCOLHA: @ > PEDRA, # > PAPEL, %% > TESOURA\n");

        scanf(" %c", &jogada);
        
        jogadacpu = 1+rand()%3;

        switch (jogada){
            case '@':
                opcao = 1;
            break;

            case '#':
                opcao = 2;
            break;

            case '%':
                opcao = 3;
            break;

    default:
        printf("opcao invalida\n");
        
    }


       if (opcao == 1 && jogadacpu == 2) {
        printf("USUARIO: @ cpu: # = VOCE PERDEU!\n");
        ptscpu++;
       }

       if (opcao == 2 && jogadacpu == 3) {
       printf("USUARIO: # cpu: %% = VOCE PERDEU!\n");
       ptscpu++;
       }

       if (opcao == 3 && jogadacpu == 1) {
       printf("USUARIO: %% cpu: @ = VOCE PERDEU!\n");
       ptscpu++;
       }
       
       if (opcao == 2 && jogadacpu == 1) {
        printf("USUARIO: # cpu: @ = VOCE VENCEU!\n");
        ptsuser++;
       }

       if (opcao == 1 && jogadacpu == 3) {
        printf("USUARIO: @ cpu: %% = VOCE VENCEU!\n");
        ptsuser++;
       }
       

       if (opcao == 3 && jogadacpu == 2) {
        printf("USUARIO: %% cpu: # = VOCE VENCEU!\n");
        ptsuser++;
        
       }
       
        if (opcao == jogadacpu ) {
        printf("EMPATE!\n");
        ptsuser++;
        
       }
        printf("pontuacao usuario: %d pontuacao CPU: %d\n",ptsuser,ptscpu);
    }
}
int main(){
    jokenpo();
    return 0;
}

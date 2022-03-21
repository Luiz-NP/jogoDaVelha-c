#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char matrizjogadas[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
int vez = 1;

int tabuleiro();
int jogadas();
int verificaVencedor();
int jogarNovamente();
int menu();




void main()
{

  menu();
  tabuleiro();
  jogadas();
  
}

int tabuleiro()
{

  printf("\n\n\n\t\t\t\t\t    1    2    3\n");
  printf("\t\t\t\t\t    ↓    ↓    ↓\n");
  printf("\t\t\t\t\tA → %c |  %c  | %c\n", matrizjogadas[0][0], matrizjogadas[0][1], matrizjogadas[0][2]);
  printf("\t\t\t\t\t  ----------------\n");
  printf("\t\t\t\t\tB → %c |  %c  | %c\n", matrizjogadas[1][0], matrizjogadas[1][1], matrizjogadas[1][2]);
  printf("\t\t\t\t\t  ----------------\n");
  printf("\t\t\t\t\tC → %c |  %c  | %c\n\n", matrizjogadas[2][0], matrizjogadas[2][1], matrizjogadas[2][2]);

}

int jogadas()
{
  
  char linha;
  char coluna;

  printf("\nPlayer %d sua vez.\n", vez);
  printf("\nEscolha a linha: \n");
  scanf(" %c", &linha);
  printf("\nEscolha a coluna: \n");
  scanf(" %c", &coluna);
  system("clear");

  if(vez == 1){
    if(linha == 'A' || linha == 'a'){
    if(coluna < 52 && coluna > 48){
        if(coluna == 49){

          if(matrizjogadas[0][0] == ' '){
            
            matrizjogadas[0][0] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 50){

          if(matrizjogadas[0][1] == ' '){
            
            matrizjogadas[0][1] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 51){

          if(matrizjogadas[0][2] == ' '){
            
            matrizjogadas[0][2] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }
      }else{

        printf("\n\nEscolha uma coluna válida.\n");
        tabuleiro();
        jogadas();

      }

    }else if(linha == 'B' || linha == 'b'){
    if(coluna < 52 && coluna > 48){
        if(coluna == 49){

          if(matrizjogadas[1][0] == ' '){
            
            matrizjogadas[1][0] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 50){

          if(matrizjogadas[1][1] == ' '){
            
            matrizjogadas[1][1] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 51){

          if(matrizjogadas[1][2] == ' '){
            
            matrizjogadas[1][2] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }
      }else{

        printf("\n\nEscolha uma coluna válida.\n");
        tabuleiro();
        jogadas();

      }

    }else if(linha == 'C' || linha == 'c'){
    if(coluna < 52 && coluna > 48){
        if(coluna == 49){
          if(matrizjogadas[2][0] == ' '){
            
            matrizjogadas[2][0] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 50){

          if(matrizjogadas[2][1] == ' '){
            
            matrizjogadas[2][1] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 51){

          if(matrizjogadas[2][2] == ' '){
            
            matrizjogadas[2][2] = 'X';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }

      }else{

        printf("\n\nEscolha uma coluna válida.\n");
        tabuleiro();
        jogadas();

      }

    }else{

      printf("\n\nDigite uma linha válida.");
      tabuleiro();
      jogadas();

    }

    vez = 2;
    jogadas();

  }else if(vez == 2){
    if(linha == 'A' || linha == 'a'){
    if(coluna < 52 && coluna > 48){
        if(coluna == 49){

          if(matrizjogadas[0][0] == ' '){
            
            matrizjogadas[0][0] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 50){

          if(matrizjogadas[0][1] == ' '){
            
            matrizjogadas[0][1] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 51){

          if(matrizjogadas[0][2] == ' '){
            
            matrizjogadas[0][2] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }
      }else{

        printf("\n\nEscolha uma coluna válida.\n");
        tabuleiro();
        jogadas();

      }

    }else if(linha == 'B' || linha == 'b'){
    if(coluna < 52 && coluna > 48){
        if(coluna == 49){

          if(matrizjogadas[1][0] == ' '){
            
            matrizjogadas[1][0] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 50){

          if(matrizjogadas[1][1] == ' '){
            
            matrizjogadas[1][1] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 51){

          if(matrizjogadas[1][2] == ' '){
            
            matrizjogadas[1][2] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }
      }else{

        printf("\n\nEscolha uma coluna válida.\n");
        tabuleiro();
        jogadas();

      }

    }else if(linha == 'C' || linha == 'c'){
    if(coluna < 52 && coluna > 48){
        if(coluna == 49){

          if(matrizjogadas[2][0] == ' '){
            
            matrizjogadas[2][0] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 50){

          if(matrizjogadas[2][1] == ' '){
            
            matrizjogadas[2][1] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }else if(coluna == 51){

          if(matrizjogadas[2][2] == ' '){
            
            matrizjogadas[2][2] = 'O';
            tabuleiro();
            verificaVencedor();
          
          }else{

            printf("\n\nEsta casa já está preenchida, escolha uma vazia\n");
            tabuleiro();
            jogadas();

          }

        }
      }else{

        printf("\n\nEscolha uma coluna válida.\n");
        tabuleiro();
        jogadas();

      }

    }else{

      printf("\n\nDigite uma linha válida.");
      tabuleiro();
      jogadas();

    }

    vez = 1;
    jogadas();

  }
  
}

int verificaVencedor()
{

  if(matrizjogadas[0][0] == 'X' && matrizjogadas[0][1] == 'X' && matrizjogadas[0][2] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[1][0] == 'X' && matrizjogadas[1][1] == 'X' && matrizjogadas[1][2] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[2][0] == 'X' && matrizjogadas[2][1] == 'X' && matrizjogadas[2][2] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][0] == 'X' && matrizjogadas[1][0] == 'X' && matrizjogadas[2][0] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][1] == 'X' && matrizjogadas[1][1] == 'X' && matrizjogadas[2][1] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][2] == 'X' && matrizjogadas[1][2] == 'X' && matrizjogadas[2][2] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][0] == 'X' && matrizjogadas[1][1] == 'X' && matrizjogadas[2][2] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][2] == 'X' && matrizjogadas[1][1] == 'X' && matrizjogadas[2][0] == 'X'){
    printf("\nPlayer 1 venceu!\n");
    jogarNovamente();

  }else if(matrizjogadas[0][0] == 'O' && matrizjogadas[0][1] == 'O' && matrizjogadas[0][2] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[1][0] == 'O' && matrizjogadas[1][1] == 'O' && matrizjogadas[1][2] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[2][0] == 'O' && matrizjogadas[2][1] == 'O' && matrizjogadas[2][2] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][0] == 'O' && matrizjogadas[1][0] == 'O' && matrizjogadas[2][0] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][1] == 'O' && matrizjogadas[1][1] == 'O' && matrizjogadas[2][1] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][2] == 'O' && matrizjogadas[1][2] == 'O' && matrizjogadas[2][2] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][0] == 'O' && matrizjogadas[1][1] == 'O' && matrizjogadas[2][2] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][2] == 'O' && matrizjogadas[1][1] == 'O' && matrizjogadas[2][0] == 'O'){
    printf("\nPlayer 2 venceu!\n");
    jogarNovamente();
  }else if(matrizjogadas[0][0] != ' ' && matrizjogadas[0][1] != ' ' && matrizjogadas[0][2] != ' ' && matrizjogadas[1][0] != ' ' && matrizjogadas[1][1] != ' ' && matrizjogadas[1][2] != ' ' && matrizjogadas[2][0] != ' ' && matrizjogadas[2][1] != ' ' && matrizjogadas[2][2] != ' '){
    printf("\nShii... Deu velha.\n");
    jogarNovamente();
  }

}

int jogarNovamente()
{

  char replay;

  printf("\nDeseja jogar novamente?\nY-sim\nN-não\n");
  scanf(" %c", &replay);

  if(replay == 'Y' || replay == 'y'){
    matrizjogadas[0][0] = ' ';
    matrizjogadas[0][1] = ' ';
    matrizjogadas[0][2] = ' ';
    matrizjogadas[1][0] = ' ';
    matrizjogadas[1][1] = ' ';
    matrizjogadas[1][2] = ' ';
    matrizjogadas[2][0] = ' ';
    matrizjogadas[2][1] = ' ';
    matrizjogadas[2][2] = ' ';
    system("clear");
    tabuleiro();
    jogadas();
  }else if(replay == 'N' || replay == 'n'){
    system("clear");
    exit(0);
  }else{
    system("clear");
    printf("\nDigite uma opção valida.\n\n");
    jogarNovamente();
  }

}

int menu()
{

  char tutorial;

  printf("\n\n\t\t\t\t\tJogo da Velha\n\n");
  printf("\t\tOlá, Bem vindo ao melhor jogo da velha feito em C, divirta-se!\n");
  printf("\n\n\t\t\t Pressione qualquer tecla para continuar...\n\n");
  getchar();
  system("clear");
  printf("\n\nDeseja vizualizar um tutorial?\nY-sim\nN-não\n");
  scanf(" %c", &tutorial);
  system("clear");

  if(tutorial == 'Y' || tutorial == 'y'){

    getchar();
    system("clear");
    printf("\n\n\t\tObserve o tabuleiro, Perceba que ele possui marcações em sua extremidades.\n");
    tabuleiro();
    printf("\n\n\t\tOs números representam as colunas, e as letras representam as linhas.\n\n");
    printf("\n\n\t\t\t    Pressione qualquer tecla para continuar...\n\n");
    getchar();
    system("clear");
    printf("\n\n\tPara jogar é bem simples, basta esperar sua vez, e entao escolher uma coordenada para marcar\n\n\t\t\t\t    (exemplo: linha: A | coluna: 1)\n\n");
    tabuleiro();
    printf("\n\n\t\t\t\tP1 marca com 'X', e P2 marca com 'O'.\n\n");
    printf("\n\n\t\t\t     Pressione qualquer tecla para continuar...\n\n");
    getchar();
    system("clear");
  }else if(tutorial == 'N' || tutorial == 'n'){
    tabuleiro();
    jogadas();
  }else{
    printf("\nDigite uma alternativa válida.\n");
    menu();
  }

}
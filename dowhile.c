#include <stdio.h>
int main() {
  int cafe, preco, copo;
  char continuar, tamanho;

  do { //inicio
    printf("BEM-VINDO(A), ESCOLHA UMA DAS OPCOES ABAIXO: \n 1- CAFE EXPRESSO R$5,00 \n 2- CAPUCCINO R$4,00 \n LATTE R$5,00 \n");
    scanf("%d", &cafe);

    printf("TAMANHO: P, M ou G?");
    scanf(" %c", &tamanho);

    switch (cafe){
        case 1:
        preco = 5;
    break;

     case 2:
        preco = 4;
    break;

     case 3:
        preco = 5;
    break;


    default:
        printf("opcao invalida");
    }

    switch (tamanho){
    case 'P':
        copo = 1;
        preco = preco * copo;
        printf("%d", preco);
    break;

    case 'M':
        copo = 2;
        preco = preco * copo;
        printf("%d", preco);
    break;

    case 'G':
        copo = 3;
        preco = preco * copo;
        printf("%d", preco);
    break;

    default:
        printf("opcao invalida");

    }

    printf("\nDeseja executar novamente? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S'); //fim

  printf("Programa finalizado.\n");

  return 0;
}

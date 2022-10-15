#include "crescente.h"
#include "decrescente.h"
#include "random.h"

//struct, ponteiros e arquivo.
int main()
{

    int op, tam_op;
    char op2;
    FILE *ftp = NULL, *saida = NULL;
    do{
        hud();
        scanf("%d", &op);
        switch(op){
        case 1:
            //Insertion
            system("cls");
            menu();
            scanf("%d", &tam_op);
            menu_cdr();
            getchar();
            scanf("%c", &op2);
            switch(op2){
                case 'c':
                    arquiv_crescente(op, tam_op,ftp,saida);
                    printf("Crescente\n");
                    break;
                case 'd':
                    arquiv_decrescente(op, tam_op,ftp,saida);
                    printf("Decrescente\n");
                    break;
                case 'r':
                    arquiv_random(op, tam_op,ftp,saida);
                    printf("Randomica\n");
                    break;
                default:
                    printf("Invalido, digite novamente\n");
                    break;
            }
            break;
        case 2:
            system("cls");
            menu();
            scanf("%d", &tam_op);
            menu_cdr();
            getchar();
            scanf("%c", &op2);
            switch(op2){
                case 'c':
                    arquiv_crescente(op, tam_op,ftp,saida);
                    printf("Crescente\n");
                    break;
                case 'd':
                    arquiv_decrescente(op, tam_op,ftp,saida);
                    printf("Decrescente\n");
                    break;
                case 'r':
                    arquiv_random(op, tam_op,ftp,saida);
                    printf("Randomica\n");
                    break;
                default:
                    printf("Invalido, digite novamente\n");
                    break;
            }
            //Bubble
            break;
        case 3:
            system("cls");
            menu();
            scanf("%d", &tam_op);
            menu_cdr();
            getchar();
            scanf("%c", &op2);
            switch(op2){
                case 'c':
                    arquiv_crescente(op, tam_op,ftp,saida);
                    printf("Crescente\n");
                    break;
                case 'd':
                    arquiv_decrescente(op, tam_op,ftp,saida);
                    printf("Decrescente\n");
                    break;
                case 'r':
                    arquiv_random(op, tam_op,ftp,saida);
                    printf("Randomica\n");
                    break;
                default:
                    printf("Invalido, digite novamente\n");
                    break;
            }
            //Shell
            break;
        case 4:
            system("cls");
            menu();
            scanf("%d", &tam_op);
            menu_cdr();
            getchar();
            scanf("%c", &op2);
            switch(op2){
                case 'c':
                    arquiv_crescente(op, tam_op,ftp,saida);
                    printf("Crescente\n");
                    break;
                case 'd':
                    arquiv_decrescente(op, tam_op,ftp,saida);
                    printf("Decrescente\n");
                    break;
                case 'r':
                    arquiv_random(op, tam_op,ftp,saida);
                    printf("Randomica\n");
                    break;
                default:
                    printf("Invalido, digite novamente\n");
                    break;
            }
            //Selection
            break;
        case 5:
            system("cls");
            printf("Saindo...\n\n");
            exit(0);
            break;
        default:
            printf("Opcao errada, digite novamente!\n");
            break;
        }
    }while(op!=5);
    //free(vet);
    return 0;
}

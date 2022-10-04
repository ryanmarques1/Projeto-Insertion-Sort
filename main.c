#include "crescente.h"
#include "decrescente.h"
#include "random.h"

//struct, ponteiros e arquivo.
int main()
{

    int op, tam_op;
    char op2;
    FILE *ftp = NULL,*ftb_bin = NULL;
    do{
        hud();
        scanf("%d", &op);
        switch(op){
        case 1:
            //Insertion
            system("cls");
            menu_insertion();
            scanf("%d", &tam_op);
            menu_cdr();
            getchar();
            scanf("%c", &op2);
            switch(op2){
                case 'c':
                    arquiv_crescente(tam_op, ftb_bin, ftp);
                    printf("Crescente\n");
                    break;
                case 'd':
                    arquiv_decrescente(tam_op, ftb_bin, ftp);
                    printf("Decrescente\n");
                    break;
                case 'r':
                    arquiv_random(tam_op,ftb_bin,ftp);
                    printf("Randomica\n");
                    break;
            }
            break;
        case 2:
            //Bubble
            break;
        case 3:
            //Shell
            break;
        case 4:
            system("cls");
            printf("Saindo...\n\n");
            exit(0);
            break;
        default:
            printf("Opcao errada, digite novamente!\n");
            break;
        }
    }while(op!=4);
    //free(vet);
    return 0;
}

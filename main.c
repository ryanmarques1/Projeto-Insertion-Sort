#include "base.h"

//struct, ponteiros e arquivo.
int main()
{

    int op, tam_op;
    char op2;
    int vet_10[10], vet_100[100], vet_1000[1000];
    FILE *ftp,*ftb_bin;
    //int *vet, n;
    //n = 6;
    //vet = malloc(n * sizeof(int));

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
                    printf("Decrescente\n");
                    break;
                case 'r':
                    printf("Randomica\n");
                    break;
            }

            /*
            switch(tam_op){
                case 1:
                    system("cls");
                    printf("Arquivo de 10 numeros\n");
                    printf("Deseja gerar em ordem crescente, decrescente ou randomica?\n [random = r, crescente = c, decrescente = d]\n");
                    getchar();//buffer
                    scanf("%c", &op2);
                    if(op2 == 'c'){
                        printf("crescente\n");
                        arquiv_10(ftb_bin,ftp,vet_10);
                    }
                    if(op2 == 'd'){
                        printf("decrescente\n");
                        arquiv_10_desc(ftb_bin,ftp,vet_10);
                    }
                    if(op2 == 'r'){
                        printf("randomica\n");
                        arquiv_10_random(ftb_bin,ftp,vet_10);
                    }
                    break;
                case 2:
                    printf("Arquivo de 100 numeros\n");
                    printf("Deseja gerar em ordem crescente, decrescente ou randomica?\n[random = r, crescente = c, decrescente = d]\n");
                    getchar();//buffer
                    scanf("%c", &op2);
                    if(op2 == 'c'){
                        printf("crescente\n");
                        arquiv_100(ftb_bin,ftp,vet_100);
                    }
                    if(op2 == 'd'){
                        printf("decrescente\n");
                        arquiv_100_desc(ftb_bin,ftp,vet_100);
                    }
                    if(op2 == 'r'){
                        printf("randomica\n");
                        arquiv_100_random(ftb_bin,ftp,vet_100);
                    }
                    break;
                case 3:
                    printf("Arquivos de 1000 numeros\n");
                    printf("Deseja gerar em ordem crescente, decrescente ou randomica?\n[random = r, crescete = c, decrescente = d]\n");
                    getchar();//buffer
                    scanf("%c", &op2);
                    if(op2 == 'c'){
                        printf("crescente\n");
                        arquiv_1000(ftb_bin,ftp,vet_1000);
                    }
                    if(op2 == 'd'){

                    }
                    if(op2 == 'r'){

                    }
                    break;
                default:
                    printf("Opcao errada, digite novamente\n");
                    break;
            }*/
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

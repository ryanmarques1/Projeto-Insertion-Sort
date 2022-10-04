#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void hud(){
    printf("-------------------------------------------------------------------------------\n");
    printf("|\t\t******ALGORITMOS******\t\t\t\t|\n");
    printf("-------------------------------------------------------------------------------");
    printf("\n");
    printf("Insertion - 01\n");
    printf("Bubble - 02\n");
    printf("Shell - 03\n");
    printf("Sair - 04\n");
    printf("Escolha uma opcao: ");
    //scanf
}
void menu_insertion(){
    printf("1 - 10 numeros\n");
    printf("2 - 100 numeros\n");
    printf("3 - 1.000 numeros\n");
    printf("4 - 10.000 numeros\n");
    printf("5 - 100.000 numeros\n");
    printf("6 - 1.000.000 numeros\n");
    printf("Escolha uma das seguintes entradas: ");
    //scanf
}
void menu_cdr(){
    printf("'c' - Crescente\n");
    printf("'d' - Decrescente\n");
    printf("'r' - Randomica\n");
    printf("Escolha umas das seguintes entradas: ");
}
void insertion_sort(int vet[], int size_vet){
    //ordenação
    int i,j,chave;
    for(j = 1;j < size_vet;j++){
        chave = vet[j];
        i = j - 1;
        while(i>=0 && vet[i] > chave){
            vet[i+1] = vet[i];
            i = i-1;
        }
        vet[i+1] = chave;
    }
}
double calc_tempexec(clock_t s, clock_t e){
    double result;
    result = ((e - s) / (double)CLOCKS_PER_SEC);
    return result;
}
//função de gerar arquivo de 10 numeros em ordem crescente, decrescente,  randomica.
void arquiv_10_random(FILE *ftp_bin, FILE *ftp, int vet_10[]){
    char ord;
    srand(time(NULL));//resolve o problema de sementes iguais.
    int err; //variaveis no auxilio de erros;
    ftp_bin = fopen("Arquivos//Randomicas//10random.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 0; i < 10; i++){
        vet_10[i] = rand() % 80;
        printf("%d ", vet_10[i]);
        fwrite(vet_10, sizeof(int),1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("Arquivos//Randomicas//10random.bin", "r");
    ftp = fopen("Arquivos//Randomicas//10random.txt", "w");
    fprintf(ftp,"10\n");
    for(int i = 0; i < 10; i++){
        if(fread(vet_10,sizeof(int),1,ftp_bin) <=0 ){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_10[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_10,10);
        for(int i = 0; i < 10; i++){
            printf("%d ", vet_10[i]);
        }
    }
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}
//função de gerar arquivo de 10 numeros em ordem crescente, decrescente,  randomica.
#endif // BASE_H_INCLUDED

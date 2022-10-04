#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include "base.h"
void arquiv_random(int op_tam, FILE *ftp_bin, FILE *ftp){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    char ord,cdr;
    int err, n = 0,semente, *vet;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            ftp_bin = fopen("Arquivos//Randomicas//10.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                semente = (rand() % 100000 + 1)*100;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Randomicas//10.bin", "r");
            ftp = fopen("Arquivos//Randomicas//10.txt", "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
            }
                fprintf(ftp,"%d\n",vet[j]);
            }
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            printf("Tempo de execucao: %.4lf", temp_exec);
            err = fclose(ftp_bin);
            err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
    }
}
#endif // RANDOM_H_INCLUDED

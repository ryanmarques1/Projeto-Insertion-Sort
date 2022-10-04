#ifndef DECRESCENTE_H_INCLUDED
#define DECRESCENTE_H_INCLUDED

#include "base.h"
void arquiv_decrescente(int op_tam,FILE *ftp_bin, FILE *ftp){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    char ord,cdr;
    int err, n = 0,semente, *vet;
    semente = (rand() % 100000)*100;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//10.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            printf("Semente: %d", semente);
            for(int i = 0; i < n; i++){
                semente--;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//10.bin", "r");
            ftp = fopen("ArquivosdeEntrada//Decrescentes//10.txt", "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
            }
                fprintf(ftp,"%d\n", vet[j]);
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
        case 2:
            printf("Arquivos de entrada 100\n");
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//100.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                --semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);

            }
            fclose(ftp_bin);
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//100.bin", "r");
            ftp = fopen("ArquivosdeEntrada//Decrescentes//100.txt", "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin) <= 0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            printf("Tempo de execucao: %.4lf", temp_exec);
            err = fclose(ftp_bin);
            err == 0 ? printf("fechou com sucesso !\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//1000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                --semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//1000.bin", "r");
            ftp = fopen("ArquivosdeEntrada//Decrescentes//1000.txt", "w");
            fprintf(ftp, "1000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            printf("Tempo de execucao: %.4lf", temp_exec);
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechado com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10.000\n");
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//10000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                --semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//10000.bin", "r");
            ftp = fopen("ArquivosdeEntrada//Decrescentes//10000.txt", "w");
            fprintf(ftp, "10000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            printf("Tempo de execucao: %.4lf", temp_exec);
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechado com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 5:
            printf("Arquivos de entrada 100.000\n");
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//100000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                --semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//100000.bin", "r");
            ftp = fopen("ArquivosdeEntrada//Decrescentes//100000.txt", "w");
            fprintf(ftp, "100000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            printf("Tempo de execucao: %.4lf", temp_exec);
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechado com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 6:
            printf("Arquivos de entrada 1.000.000\n");
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//1000000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                --semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("ArquivosdeEntrada//Decrescentes//1000000.bin", "r");
            ftp = fopen("ArquivosdeEntrada//Decrescentes//1000000.txt", "w");
            fprintf(ftp, "1000000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            printf("Tempo de execucao: %.4lf", temp_exec);
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechado com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        default:
            printf("PDI 199191\n\n");
            break;
   }
}

#endif // DECRESCENTE_H_INCLUDED

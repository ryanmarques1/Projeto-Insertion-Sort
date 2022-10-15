#ifndef DECRESCENTE_H_INCLUDED
#define DECRESCENTE_H_INCLUDED

#include "base.h"
void arquiv_decrescente(int algr, int op_tam, FILE *ftp, FILE *saida){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    int n = 0,semente, *vet;
    semente = (rand() % 1000000)*100;
    char arq[50],arq2[50],arq3[50];
    switch(algr){
        case 1:
            printf("Insertion\n\n");
            strcpy(arq, "IS//ArquivosdeEntrada//Decrescentes//");
            strcpy(arq2, "IS//ArquivosdeSaida//Decrescentes//");
            strcpy(arq3, "IS//ArquivosdeTempo//Decrescentes//");
            printf("\n\n");
            break;
        case 2:
            printf("Bubble\n\n");
            strcpy(arq, "BS//ArquivosdeEntrada//Decrescentes//");
            strcpy(arq2, "BS//ArquivosdeSaida//Decrescentes//");
            strcpy(arq3, "BS//ArquivosdeTempo//Decrescentes//");
            break;
        case 3:
            printf("Shell\n\n");
            strcpy(arq, "SHS//ArquivosdeEntrada//Decrescentes//");
            strcpy(arq2, "SHS//ArquivosdeSaida//Decrescentes//");
            strcpy(arq3, "SHS//ArquivosdeTempo//Decrescentes//");
            break;

        case 4:
            printf("Selection Sort\n\n");
            strcpy(arq, "SLS//ArquivosdeEntrada//Decrescentes//");
            strcpy(arq2, "SLS//ArquivosdeSaida//Decrescentes//");
            strcpy(arq3, "SLS//ArquivosdeTempo//Decrescentes//");
            break;
    }
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            strcat(arq, "10decres.txt");
            strcat(arq2, "10ord.txt");
            strcat(arq3, "tempo10decres.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                semente--;
                vet[j] = semente;
                fprintf(ftp,"%d\n", vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita!\n");
            saida = fopen(arq2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen(arq3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 2:
            printf("Arquivos de entrada 100\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            strcat(arq, "100decres.txt");
            strcat(arq2, "100ord.txt");
            strcat(arq3, "tempo100decres.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < n; j++){
                semente--;
                vet[j] = semente;
                fprintf(ftp,"%d\n", vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita!\n");
            saida = fopen(arq2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen(arq3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            strcat(arq, "1000decres.txt");
            strcat(arq2, "1000ord.txt");
            strcat(arq3, "tempo1000decres.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"1000\n");
            for(int j = 0; j < n; j++){
                semente--;
                vet[j] = semente;
                fprintf(ftp,"%d\n", vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita!\n");
            saida = fopen(arq2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen(arq3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10.000\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            strcat(arq, "10000decres.txt");
            strcat(arq2, "10000ord.txt");
            strcat(arq3, "tempo10000decres.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"10000\n");
            for(int j = 0; j < n; j++){
                semente--;
                vet[j] = semente;
                fprintf(ftp,"%d\n", vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita!\n");
            saida = fopen(arq2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen(arq3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 5:
            printf("Arquivos de entrada 100.000\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            strcat(arq, "100000decres.txt");
            strcat(arq2, "100000ord.txt");
            strcat(arq3, "tempo100000decres.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"100000\n");
            for(int j = 0; j < n; j++){
                semente--;
                vet[j] = semente;
                fprintf(ftp,"%d\n", vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita!\n");
            saida = fopen(arq2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen(arq3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 6:
            printf("Arquivos de entrada 1.000.000\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            strcat(arq, "1000000decres.txt");
            strcat(arq2, "1000000ord.txt");
            strcat(arq3, "tempo1000000decres.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"1000000\n");
            for(int j = 0; j < n; j++){
                semente--;
                vet[j] = semente;
                fprintf(ftp,"%d\n", vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita!\n");
            saida = fopen(arq2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen(arq3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        default:
            printf("Erro, fora do intervalo\n\n");
            break;
   }
}

#endif // DECRESCENTE_H_INCLUDED

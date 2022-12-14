#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include "base.h"
void arquiv_random(int algr, int op_tam, FILE *ftp, FILE *saida){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    int n = 0,semente, *vet;
    char arq[50],arq2[50],arq3[50];
    switch(algr){
        case 1:
            printf("Insertion\n\n");
            strcpy(arq, "IS//ArquivosdeEntrada//Randomicas//");
            strcpy(arq2, "IS//ArquivosdeSaida//Randomicas//");
            strcpy(arq3, "IS//ArquivosdeTempo//Randomicas//");
            printf("\n\n");
            break;
        case 2:
            printf("Bubble\n\n");
            strcpy(arq, "BS//ArquivosdeEntrada//Randomicas//");
            strcpy(arq2, "BS//ArquivosdeSaida//Randomicas//");
            strcpy(arq3, "BS//ArquivosdeTempo//Randomicas//");
            break;
        case 3:
            printf("Shell\n\n");
            strcpy(arq, "SHS//ArquivosdeEntrada//Randomicas//");
            strcpy(arq2, "SHS//ArquivosdeSaida//Randomicas//");
            strcpy(arq3, "SHS//ArquivosdeTempo//Randomicas//");
            break;

        case 4:
            printf("Selection Sort\n\n");
            strcpy(arq, "SLS//ArquivosdeEntrada//Randomicas//");
            strcpy(arq2, "SLS//ArquivosdeSaida//Randomicas//");
            strcpy(arq3, "SLS//ArquivosdeTempo//Randomicas//");
            break;
    }
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            strcat(arq, "10random.txt");
            strcat(arq2, "10ord.txt");
            strcat(arq3, "tempo10random.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algr == 1){
                Start = clock();
                insertion_sort(vet,n);
                End = clock();
            }
            else if(algr == 2){
                Start = clock();
                bubble_sort(vet,n);
                End = clock();
            }
            else if(algr == 3){
                Start = clock();
                shell_sort(vet,n);
                End = clock();
            }
            else if(algr == 4){
                Start = clock();
                selection_sort(vet,n);
                End = clock();
            }
            printf("\nOrdenacao feita\n");
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
            strcat(arq, "100random.txt");
            strcat(arq2, "100ord.txt");
            strcat(arq3, "tempo100random.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
           if(algr == 1){
                Start = clock();
                insertion_sort(vet,n);
                End = clock();
            }
            else if(algr == 2){
                Start = clock();
                bubble_sort(vet,n);
                End = clock();
            }
            else if(algr == 3){
                Start = clock();
                shell_sort(vet,n);
                End = clock();
            }
            else if(algr == 4){
                Start = clock();
                selection_sort(vet,n);
                End = clock();
            }
            printf("\nOrdenacao feita\n");
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
            strcat(arq, "1000random.txt");
            strcat(arq2, "1000ord.txt");
            strcat(arq3, "tempo1000random.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"1000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algr == 1){
                Start = clock();
                insertion_sort(vet,n);
                End = clock();
            }
            else if(algr == 2){
                Start = clock();
                bubble_sort(vet,n);
                End = clock();
            }
            else if(algr == 3){
                Start = clock();
                shell_sort(vet,n);
                End = clock();
            }
            else if(algr == 4){
                Start = clock();
                selection_sort(vet,n);
                End = clock();
            }
            printf("\nOrdenacao feita\n");
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
            printf("Arquivos de entrada 10000\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            strcat(arq, "10000random.txt");
            strcat(arq2, "10000ord.txt");
            strcat(arq3, "tempo10000random.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"10000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algr == 1){
                Start = clock();
                insertion_sort(vet,n);
                End = clock();
            }
            else if(algr == 2){
                Start = clock();
                bubble_sort(vet,n);
                End = clock();
            }
            else if(algr == 3){
                Start = clock();
                shell_sort(vet,n);
                End = clock();
            }
            else if(algr == 4){
                Start = clock();
                selection_sort(vet,n);
                End = clock();
            }
            printf("\nOrdenacao feita\n");
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
            printf("Arquivos de entrada 100000\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            strcat(arq, "100000random.txt");
            strcat(arq2, "100000ord.txt");
            strcat(arq3, "tempo100000random.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"100000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algr == 1){
                Start = clock();
                insertion_sort(vet,n);
                End = clock();
            }
            else if(algr == 2){
                Start = clock();
                bubble_sort(vet,n);
                End = clock();
            }
            else if(algr == 3){
                Start = clock();
                shell_sort(vet,n);
                End = clock();
            }
            else if(algr == 4){
                Start = clock();
                selection_sort(vet,n);
                End = clock();
            }
            printf("\nOrdenacao feita\n");
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
            printf("Arquivos de entrada 1000000\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            strcat(arq, "1000000random.txt");
            strcat(arq2, "1000000ord.txt");
            strcat(arq3, "tempo1000000random.txt");
            ftp = fopen(arq, "w");
            fprintf(ftp,"1000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algr == 1){
                Start = clock();
                insertion_sort(vet,n);
                End = clock();
            }
            else if(algr == 2){
                Start = clock();
                bubble_sort(vet,n);
                End = clock();
            }
            else if(algr == 3){
                Start = clock();
                shell_sort(vet,n);
                End = clock();
            }
            else if(algr == 4){
                Start = clock();
                selection_sort(vet,n);
                End = clock();
            }
            printf("\nOrdenacao feita\n");
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
    }
}
#endif // RANDOM_H_INCLUDED

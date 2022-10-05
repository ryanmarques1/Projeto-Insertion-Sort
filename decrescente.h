#ifndef DECRESCENTE_H_INCLUDED
#define DECRESCENTE_H_INCLUDED

#include "base.h"
void arquiv_decrescente(int op_tam, FILE *ftp, FILE *saida){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    int n = 0,semente, *vet;
    semente = (rand() % 1000000)*100;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Decrescentes//10decres.txt", "w");
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
            saida = fopen("ArquivosdeSaida//Decrescentes//10ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Decrescentes//tempo10decres.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 2:
            printf("Arquivos de entrada 100\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Decrescentes//100decres.txt", "w");
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
            saida = fopen("ArquivosdeSaida//Decrescentes//100ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Decrescentes//tempo100decres.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Decrescentes//1000decres.txt", "w");
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
            saida = fopen("ArquivosdeSaida//Decrescentes//1000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Decrescentes//tempo1000decres.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10.000\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Decrescentes//10000decres.txt", "w");
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
            saida = fopen("ArquivosdeSaida//Decrescentes//10000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Decrescentes//tempo10000decres.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 5:
            printf("Arquivos de entrada 100.000\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Decrescentes//100000decres.txt", "w");
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
            saida = fopen("ArquivosdeSaida//Decrescentes//100000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Decrescentes//tempo100000decres.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 6:
            printf("Arquivos de entrada 1.000.000\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Decrescentes//1000000decres.txt", "w");
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
            saida = fopen("ArquivosdeSaida//Decrescentes//1000000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Decrescentes//tempo1000000decres.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        default:
            printf("PDI 199191\n\n");
            break;
   }
}

#endif // DECRESCENTE_H_INCLUDED

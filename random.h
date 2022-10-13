#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include "base.h"
void arquiv_random(int op_tam, FILE *ftp, FILE *saida){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    int n = 0,semente, *vet;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            ftp = fopen("ArquivosdeEntrada//Randomicas//10random.txt", "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita\n");
            saida = fopen("IS//ArquivosdeSaida//Randomicas//10ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("IS//ArquivosdeTempo//Randomicas//tempo10random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 2:
            printf("Arquivos de entrada 100\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            ftp = fopen("ArquivosdeEntrada//Randomicas//100random.txt", "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita\n");
            saida = fopen("IS//ArquivosdeSaida//Randomicas//100ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("IS//ArquivosdeTempo//Randomicas//tempo100random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            ftp = fopen("ArquivosdeEntrada//Randomicas//1000random.txt", "w");
            fprintf(ftp,"1000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita\n");
            saida = fopen("IS//ArquivosdeSaida//Randomicas//1000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("IS//ArquivosdeTempo//Randomicas//tempo1000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10000\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            ftp = fopen("ArquivosdeEntrada//Randomicas//10000random.txt", "w");
            fprintf(ftp,"10000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita\n");
            saida = fopen("IS//ArquivosdeSaida//Randomicas//10000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("IS//ArquivosdeTempo//Randomicas//tempo10000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 5:
            printf("Arquivos de entrada 100000\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            ftp = fopen("ArquivosdeEntrada//Randomicas//100000random.txt", "w");
            fprintf(ftp,"100000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita\n");
            saida = fopen("IS//ArquivosdeSaida//Randomicas//100000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("IS//ArquivosdeTempo//Randomicas//tempo100000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        case 6:
            printf("Arquivos de entrada 1000000\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            ftp = fopen("ArquivosdeEntrada//Randomicas//1000000random.txt", "w");
            fprintf(ftp,"1000000\n");
            for(int j = 0; j < n; j++){
                semente = (rand() % 10000000) * 100;
                vet[j] = semente;
                fprintf(ftp,"%d\n",vet[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            printf("\nOrdenacao feita\n");
            saida = fopen("IS//ArquivosdeSaida//Randomicas//1000000ord.txt", "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", vet[k]);
            }
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("IS//ArquivosdeTempo//Randomicas//tempo1000000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", temp_exec);
            free(vet);
            break;
        default:
            printf("Erro, fora do intervalo\n\n");
    }
}
#endif // RANDOM_H_INCLUDED

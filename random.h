#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include "base.h"
void arquiv_random(int op_tam, FILE *ftp){
    srand(time(NULL));
    double temp_exec;
    clock_t Start, End;
    char ord,cdr;
    int err, n = 0,semente, *vet;
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
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Randomicas//tempo10random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
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
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Randomicas//tempo100random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
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
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Randomicas//tempo1000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
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
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Randomicas//tempo10000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
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
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Randomicas//tempo100000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
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
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Randomicas//tempo1000000random.txt", "w");
            fprintf(ftp, "Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
    }
}
#endif // RANDOM_H_INCLUDED

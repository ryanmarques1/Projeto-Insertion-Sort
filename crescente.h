#ifndef CRESCENTE_H_INCLUDED
#define CRESCENTE_H_INCLUDED

#include "base.h"
void arquiv_crescente(int op_tam, FILE *ftp){
    srand(time(NULL));
    double temp_exec;
    clock_t Start,End;
    int n = 0,semente, *vet;
    semente = (rand() % 1000000)*100;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Crescentes//10cres.txt", "w");
            fprintf(ftp,"10\n");
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fprintf(ftp,"%d\n",vet[i]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Crescentes//tempo10cres.txt", "w");
            fprintf(ftp,"Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 2:
            printf("Arquivos de entrada 100\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Crescentes//100cres.txt", "w");
            fprintf(ftp,"100\n");
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fprintf(ftp,"%d\n",vet[i]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Crescentes//tempo100cres.txt", "w");
            fprintf(ftp,"Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Crescentes//1000cres.txt", "w");
            fprintf(ftp,"1000\n");
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fprintf(ftp,"%d\n",vet[i]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Crescentes//tempo1000cres.txt", "w");
            fprintf(ftp,"Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10.000\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Crescentes//10000cres.txt", "w");
            fprintf(ftp,"10000\n");
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fprintf(ftp,"%d\n",vet[i]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Crescentes//tempo10000cres.txt", "w");
            fprintf(ftp,"Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 5:
            printf("Arquivos de entrada 100.000\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Crescentes//100000cres.txt", "w");
            fprintf(ftp,"100000\n");
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fprintf(ftp,"%d\n",vet[i]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Crescentes//tempo100000cres.txt", "w");
            fprintf(ftp,"Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        case 6:
            printf("Arquivos de entrada 1.000.000\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            printf("Semente Gerada: %d", semente);
            ftp = fopen("ArquivosdeEntrada//Crescentes//1000000cres.txt", "w");
            fprintf(ftp,"1000000\n");
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fprintf(ftp,"%d\n",vet[i]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            Start = clock();
            insertion_sort(vet,n);
            End = clock();
            temp_exec = ((End - Start) / (double)CLOCKS_PER_SEC);
            ftp = fopen("ArquivosdeTempo//Crescentes//tempo1000000cres.txt", "w");
            fprintf(ftp,"Tempo de exec foi: %.4lf", temp_exec);
            free(vet);
            break;
        default:
            printf("PDI 199191\n\n");
            break;
   }
}
#endif // CRESCENTE_H_INCLUDED

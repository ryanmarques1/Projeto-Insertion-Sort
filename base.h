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

#endif // BASE_H_INCLUDED

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
    printf("Selection - 04\n");
    printf("Sair - 05\n");
    printf("Escolha uma opcao: ");
    //scanf
}
void menu(){
    printf("Escolha uma das seguintes entradas: \n");
    printf("1 -> 10 numeros\n");
    printf("2 -> 100 numeros\n");
    printf("3 -> 1.000 numeros\n");
    printf("4 -> 10.000 numeros\n");
    printf("5 -> 100.000 numeros\n");
    printf("6 -> 1.000.000 numeros\n");
    //scanf
}
void menu_cdr(){
    printf("Escolha umas das seguintes entradas: \n");
    printf("'c' - Crescente\n");
    printf("'d' - Decrescente\n");
    printf("'r' - Randomica\n");
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
void bubble_sort(int vet[], int size_vet){
    int i,j,aux;
    for(i = 0; i < size_vet-1; i++){ //n-1
        for(j = 0; j < size_vet-i;j++){ //somatorio de i até n-1 tj
            if(vet[j] > vet[j+1]){ //somatorio de i até n-1 tj-1
                aux = vet[j];
                vet[j] = vet[j+1]; //somatorio de i até n-1 tj-1
                vet[j+1] = aux;
            }
        }
    }
}
void shell_sort(int vet[], int size_vet){
    int i,j,h,temp;
    h = 1;
    while(h < size_vet/3) h = 3 * h + 1; //gerando valores para h;

    while(h > 0){
        for(i = h; i < size_vet; i++){
            temp = vet[i];
            j = i;
            while(j >= h && vet[j-h] > temp){
                vet[j] = vet[j-h];
                j-=h;
            }
            vet[j] = temp;
        }
        h = (h-1)/3; //atualiza valor de h.
    }
}
void selection_sort(int vet[], int size_vet){
    int i,j,temp, aux;
    for(i = 0; i < size_vet-1;i++){
        temp = i;
        for(j = temp + 1; j < size_vet;j++){
            if(vet[i] < vet[temp]) temp = j;
        }
        aux = vet[temp];
        vet[temp] = vet[i];
        vet[i] = aux;
    }
}
double calc_tempexec(clock_t s, clock_t e){
    double result;
    result = ((e - s) / (double)CLOCKS_PER_SEC);
    return result;
}
char trocadeAlgr(char *str,int opc){
    if(opc == 1){
        str;
    }
}
#endif // BASE_H_INCLUDED

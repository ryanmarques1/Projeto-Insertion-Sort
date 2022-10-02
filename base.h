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
//função de gerar arquivo de 10 numeros em ordem crescente, decrescente,  randomica.
void arquiv_crescente(int op_tam,FILE *ftp_bin, FILE *ftp){
    srand(time(NULL));
    char ord,cdr;
    int err, n = 0,semente, *vet;
    semente = (rand() % 100000)*100;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            ftp_bin = fopen("Arquivos//Crescentes//10.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            printf("Semente: %d", semente);
            for(int i = 0; i < n; i++){
                printf("Semente: %d ", ++semente);
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Crescentes//10.bin", "r");
            ftp = fopen("Arquivos//Crescentes//10.txt", "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
            }
                fprintf(ftp,"%d\n",vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);

            break;
        case 2:
            printf("Arquivos de entrada 100\n");
            ftp_bin = fopen("Arquivos//Crescentes//100.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);

            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Crescentes//100.bin", "r");
            ftp = fopen("Arquivos//Crescentes//100.txt", "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin) <= 0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n",vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("fechou com sucesso !\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            ftp_bin = fopen("Arquivos//Crescentes//1000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Crescentes//1000.bin", "r");
            ftp = fopen("Arquivos//Crescentes//1000.txt", "w");
            fprintf(ftp, "1000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n",vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechado com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10.000\n");
            ftp_bin = fopen("Arquivos//Crescentes//10000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo!\n") : printf("Nao deu certo!\n");
            n = 10000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Crescentes//10000.bin", "r");
            ftp = fopen("Arquivos//Crescentes//10000.txt", "w");
            fprintf(ftp,"10000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<= 0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n",vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechou com sucesso!\n") : printf("Error ao fechar!\n");
            free(vet);
            break;
        case 5:
            printf("Arquivos de entrada 100.000\n");
            ftp_bin = fopen("Arquivos//Crescentes//100000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo!\n") : printf("Nao deu certo!\n");
            n = 100000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Crescentes//100000.bin", "r");
            ftp = fopen("Arquivos//Crescentes//100000.txt", "w");
            fprintf(ftp,"100000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<= 0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n",vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechou com sucesso!\n") : printf("Error ao fechar!\n");
            free(vet);
            break;
        case 6:
            printf("Arquivos de entrada 1.000.000\n");
            ftp_bin = fopen("Arquivos//Crescentes//1000000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo!\n") : printf("Nao deu certo!\n");
            n = 1000000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < n; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Crescentes//1000000.bin", "r");
            ftp = fopen("Arquivos//Crescentes//1000000.txt", "w");
            fprintf(ftp,"1000000\n");
            for(int j = 0; j < n; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<= 0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n",vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechou com sucesso!\n") : printf("Error ao fechar!\n");
            free(vet);
            break;
        default:
            printf("PDI 199191\n\n");
            break;
   }
}
void arquiv_decrescente(int op_tam,FILE *ftp_bin, FILE *ftp){
    srand(time(NULL));
    char ord,cdr;
    int err, n = 0,semente, *vet;
    semente = (rand() % 100000)*100;
    switch(op_tam){
        case 1:
            printf("Arquivos de entrada 10\n");
            ftp_bin = fopen("Arquivos//Decrescentes//10.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 10;
            vet = calloc(n,sizeof(int));
            printf("Semente: %d", semente);
            for(int i = 11; i > 0; i--){
                printf("Semente: %d ", --semente);
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Decrescentes//10.bin", "r");
            ftp = fopen("Arquivos//Decrescentes//10.txt", "w");
            fprintf(ftp,"10\n");
            for(int j = 11; j > 0; j--){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
            }
                fprintf(ftp,"%d\n", vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);

            break;
        case 2:
            printf("Arquivos de entrada 100\n");
            ftp_bin = fopen("Arquivos//Decrescentes//100.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 100;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < 100; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);

            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Decrescentes//100.bin", "r");
            ftp = fopen("Arquivos//Decrescentes//100.txt", "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < 100; j++){
                if(fread(vet,sizeof(int),1,ftp_bin) <= 0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("fechou com sucesso !\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 3:
            printf("Arquivos de entrada 1000\n");
            ftp_bin = fopen("Arquivos//Decrescentes//1000.bin", "wb");
            ftp_bin != NULL ? printf("Deu certo !\n") : printf("Nao deu certo!\n");
            n = 1000;
            vet = calloc(n,sizeof(int));
            for(int i = 0; i < 1000; i++){
                ++semente;
                vet[i] = semente;
                fwrite(vet,sizeof(int),1,ftp_bin);
            }
            fclose(ftp_bin);
            ftp_bin = fopen("Arquivos//Decrescentes//1000.bin", "r");
            ftp = fopen("Arquivos//Decrescentes//1000.txt", "w");
            fprintf(ftp, "1000\n");
            for(int j = 0; j < 1000; j++){
                if(fread(vet,sizeof(int),1,ftp_bin)<=0){
                    printf("\nvazio\n");
                    exit(-1);
                }
                fprintf(ftp,"%d\n", vet[j]);
            }
            err = fclose(ftp_bin);
            err == 0 ? printf("Fechado com sucesso!\n") : printf("error ao fechar!\n");
            free(vet);
            break;
        case 4:
            printf("Arquivos de entrada 10.000\n");
            break;
        case 5:
            printf("Arquivos de entrada 100.000\n");
            break;
        case 6:
            printf("Arquivos de entrada 1.000.000\n");
            break;
        default:
            printf("PDI 199191\n\n");
            break;
   }
}
void arquiv_10(FILE *ftp_bin, FILE *ftp, int vet_10[]){
    srand(time(NULL));
    int j = rand() % 80;
    char ord;
    int err; //variaveis no auxilio de erros;
    ftp_bin = fopen("Arquivos//Crescentes//10.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 0; i < 10; i++){
        vet_10[i] = i+1;
        printf("%d ", vet_10[i]);
        fwrite(vet_10, sizeof(int), 1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("Arquivos//Crescentes//10.bin", "r");
    ftp = fopen("Arquivos//Crescentes//10.txt", "w");
    fprintf(ftp,"10\n");
    for(int i = 0; i < 10; i++){
        if(fread(vet_10,sizeof(int),1,ftp_bin)<=0){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_10[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_10,10);
        for(int i = 0; i < 10; i++){
            printf("%d ", vet_10[i]);
        }
    }
    //if(res == 0) printf("gravacao feita\  n");
    //else if(res == EOF) printf("error na gravacao\n");
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}
void arquiv_10_desc(FILE *ftp_bin, FILE *ftp, int vet_10[]){
    char ord;
    int err; //variaveis no auxilio de erros;
    ftp_bin = fopen("Arquivos//Decrescentes//10desc.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 11; i > 1; i--){
        vet_10[i] = i-1;
        printf("%d ", vet_10[i]);
        fwrite(vet_10, sizeof(int), 1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("Arquivos//Decrescentes//10desc.bin", "r");
    ftp = fopen("Arquivos//Decrescentes//10desc.txt", "w");
    fprintf(ftp,"10\n");
    for(int i = 11; i > 1; i--){
        if(fread(vet_10,sizeof(int),1,ftp_bin)<=0){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_10[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_10,12);
        for(int i = 0; i < 10; i++){
            printf("%d ", vet_10[i]);
        }
    }
    //if(res == 0) printf("gravacao feita\  n");
    //else if(res == EOF) printf("error na gravacao\n");
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}
void arquiv_10_random(FILE *ftp_bin, FILE *ftp, int vet_10[]){
    char ord;
    srand(time(NULL));//resolve o problema de sementes iguais.
    int err; //variaveis no auxilio de erros;
    ftp_bin = fopen("Arquivos//Randomicas//10random.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 0; i < 10; i++){
        vet_10[i] = rand() % 80;
        printf("%d ", vet_10[i]);
        fwrite(vet_10, sizeof(int),1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("Arquivos//Randomicas//10random.bin", "r");
    ftp = fopen("Arquivos//Randomicas//10random.txt", "w");
    fprintf(ftp,"10\n");
    for(int i = 0; i < 10; i++){
        if(fread(vet_10,sizeof(int),1,ftp_bin) <=0 ){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_10[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_10,10);
        for(int i = 0; i < 10; i++){
            printf("%d ", vet_10[i]);
        }
    }
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}

void arquiv_100(FILE *ftp_bin, FILE *ftp, int vet_100[]){
    char ord;
    int err; //variaveis no auxilio de erros;
    ftp_bin = fopen("100.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 0; i < 100; i++){
        vet_100[i] = i+1;
        printf("%d ", vet_100[i]);
        fwrite(vet_100, sizeof(int),1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("100.bin", "r");
    ftp = fopen("100.txt", "w");
    for(int i = 0; i < 100; i++){
        if(fread(vet_100,sizeof(int),1,ftp_bin) <=0 ){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_100[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_100,100);
        for(int i = 0; i < 100; i++){
            printf("%d ", vet_100[i]);
        }
    }
    printf("\n-----------------------------------\n");
    //if(res == 0) printf("gravacao feita\  n");
    //else if(res == EOF) printf("error na gravacao\n");
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}
void arquiv_100_desc(FILE *ftp_bin, FILE *ftp, int vet_100[]){
    char ord;
    int err;
    ftp_bin = fopen("100desc.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 101; i > 1; i--){
        vet_100[i] = i - 1;
        printf("%d ", vet_100[i]);
        fwrite(vet_100,sizeof(int),1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin = fopen("100desc.bin", "r");
    ftp = fopen("100desc.txt", "w");
    for(int i = 101; i > 1; i--){
        if(fread(vet_100,sizeof(int),1,ftp_bin)<= 0){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_100[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_100,102);
        for(int i = 0; i < 100; i++){
            printf("%d ", vet_100[i]);
        }
    }
    printf("\n-----------------------------------\n");
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso\n") : printf("error ao fechar!\n");
}
void arquiv_100_random(FILE *ftp_bin, FILE *ftp, int vet_100[]){
    char ord;
    srand(time(NULL));//resolve o problema de sementes iguais.
    int err; //variaveis no auxilio de erros;
    ftp_bin = fopen("100random.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 0; i < 100; i++){
        vet_100[i] = rand() % 100;
        printf("%d ", vet_100[i]);
        fwrite(vet_100, sizeof(int), 1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("100random.bin", "r");
    ftp = fopen("100random.txt", "w");
    for(int i = 0; i < 100; i++){
        if(fread(vet_100,sizeof(int),1,ftp_bin)<=0){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_100[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_100,100);
        for(int i = 0; i < 100; i++){
            printf("%d ", vet_100[i]);
        }
    }
    printf("\n-----------------------------------\n");
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}
void arquiv_1000(FILE *ftp_bin, FILE *ftp, int vet_1000[]){
    char ord;
    int err;
    ftp_bin = fopen("1000.bin", "wb");
    ftp_bin != NULL ? printf("Deu certo!\n") : printf("Error\n");
    for(int i = 0; i < 1000; i++){
        vet_1000[i] = i+1;
        printf("%d ", vet_1000[i]);
        fwrite(vet_1000, sizeof(int),1,ftp_bin);
    }
    fclose(ftp_bin);
    ftp_bin =  fopen("1000.bin", "r");
    ftp = fopen("1000.txt", "w");
    for(int i = 0; i < 1000; i++){
        if(fread(vet_1000,sizeof(int),1,ftp_bin) <=0 ){
            printf("\nvazio\n");
            exit(-1);
        }
        fprintf(ftp,"%d\n", vet_1000[i]);
    }
    printf("-----------------------------------\n");
    printf("Deseja ordenar ? S[sim] N[nao](Insertion Sort): ");
    getchar();
    scanf("%c", &ord);
    if(ord == 'S'){
        insertion_sort(vet_1000,1000);
        for(int i = 0; i < 1000; i++){
            printf("%d ", vet_1000[i]);
        }
    }
    printf("\n-----------------------------------\n");
    //if(res == 0) printf("gravacao feita\  n");
    //else if(res == EOF) printf("error na gravacao\n");
    err = fclose(ftp_bin);
    err == 0 ? printf("fechou com sucesso!\n") : printf("error ao fechar!\n");
}

//função de gerar arquivo de 10 numeros em ordem crescente, decrescente,  randomica.
#endif // BASE_H_INCLUDED

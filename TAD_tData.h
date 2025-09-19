#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} tData;

void inicializaData(tData* d){
    printf("Digite o dia: ");
    scanf("%d", &d->dia);
    printf("Digite o mes: ");
    scanf("%d", &d->mes);
    printf("Digite o ano: ");
    scanf("%d", &d->ano);
}

void apresentaData(tData* d){
    printf("Dados da data:\nDia: %02d\nMes: %02d\nAno: %04d\n", d->dia, d->mes, d->ano);
}

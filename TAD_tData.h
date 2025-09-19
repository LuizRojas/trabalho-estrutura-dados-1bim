#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} tData;

void inicializaData(tData d){
    printf("Digite o dia: ");
    scanf("%02d", &d.dia);
    printf("Digite o mes: ");
    scanf("%02d", &d.mes);
    printf("Digite o ano: ");
    scanf("%04d", &d.ano);
}

void apresentaData(tData d){
    printf("Dados da data:\nDia: %d\nMes: %d\nAno: %d", d.dia, d.mes, d.ano);
}

#include <stdio.h>

typedef struct {
    int cep;
    int numero_residencia;
    int celular;
} tEndereco;

tEndereco inicializaEndereco(){
    tEndereco endereco;

    printf("Digite o CEP: ");
    scanf("%08d", &endereco.cep);
    printf("Digite o Numero da residencia: ");
    scanf("%d", &endereco.numero_residencia);
    printf("Digite o Celular: ");
    scanf("%d", &endereco.celular);

    return endereco;
}

void apresentaEndereco(tEndereco* endereco){
    printf("Dados do Endereco:\nCEP: %d\nNumero: %d\nCelular: %d\n", endereco->cep, endereco->numero_residencia, endereco->celular);
}

void alteraResidencia(tEndereco* endereco, int cep, int numero){
    printf("Digite o novo CEP: ");
    scanf("%08d", &endereco->cep);
    printf("Digite o novo Numero da Residencia: ");
    scanf("%d", &endereco->cep);
}

void alteraCelular(tEndereco* endereco){
    int cel;
    printf("Digite o novo numero do celular: ");
    scanf("%08d", &cel);
    endereco->celular = cel;
}
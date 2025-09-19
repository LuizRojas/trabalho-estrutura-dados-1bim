#include <stdio.h>

typedef struct {
    int cep;
    int numero_residencia;
    int celular;
} tEndereco;

void inicializaEndereco(tEndereco* endereco){
    printf("Digite o CEP: ");
    scanf("%d", &endereco->cep);
    printf("Digite o Numero da residencia: ");
    scanf("%d", &endereco->numero_residencia);
    printf("Digite o Celular: ");
    scanf("%d", &endereco->celular);
}

void apresentaEndereco(tEndereco* endereco){
    printf("Dados do Endereco:\nCEP: %d\nNumero: %d\nCelular: %d\n", endereco->cep, endereco->numero_residencia, endereco->celular);
}

void alteraResidencia(tEndereco* endereco, int cep, int numero){
    endereco->cep = cep;
    endereco->numero_residencia = numero;
}

void alteraCelular(tEndereco* endereco){
    int cel;
    printf("Digite o novo numero do celular: ");
    scanf("%08d", cel);
    endereco->celular = cel;
}
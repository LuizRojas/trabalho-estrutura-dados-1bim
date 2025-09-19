#include <stdio.h>

typedef struct {
    int cep;
    int numero_residencia;
    int celular;
} tEndereco;

void inicializaEndereco(tEndereco endereco){
    printf("Digite o CEP: ");
    scanf("%08d", &endereco.cep);
    printf("Digite o Numero da residencia: ");
    scanf("%08d", &endereco.numero_residencia);
    printf("Digite o Celular: ");
    scanf("%08d", &endereco.celular);
}

void apresentaEndereco(){
    
}

void alteraResidencia(){

}

void alteraCelular(){

}
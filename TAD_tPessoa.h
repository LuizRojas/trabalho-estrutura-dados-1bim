#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "TAD_tData.h"
#include "TAD_tEndereco.h"

typedef struct{
    int rg;
    char *nome;
    tData datNascimento;
    tEndereco endereco;
} tPessoa;

tPessoa* inicializaPessoa(tPessoa* p){
    tPessoa* pessoa = (tPessoa*) malloc(sizeof(tPessoa));
    printf("Digite o RG: ");
    scanf("%d", &pessoa->rg);
    printf("Digite o nome: ");
    scanf("%s", &pessoa->nome);

    inicializaData(&pessoa->datNascimento);
    inicializaEndereco(&pessoa->endereco);

    return pessoa;
}

void apresentaPessoa(tPessoa* p){
    printf("Nome: %s\n", p->nome);
    printf("RG: %d\n", p->rg);
    apresentaData(&p->datNascimento);
    apresentaEndereco(&p->endereco);
}

void alteraResidenciaPessoa(tPessoa* p){
    int cep;
    int numeroCasa;

    printf("Digite o novo CEP: ");
    scanf("%d", &cep);
    printf("Digite o novo numero da residencia: ");
    scanf("%d", &numeroCasa);

    alteraResidencia(&p->endereco, cep, numeroCasa);
}

void alteraCelularPessoa(tPessoa* p){
    alteraCelular(&p->endereco);
}

void alteraNomePessoa(tPessoa* p){
    printf("Digite um novo Nome: ");
    scanf("%s", &p->nome);
}
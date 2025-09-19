#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TAD_tData.h"
#include "TAD_tEndereco.h"

typedef struct{
    int rg;
    char *nome;
    tData datNascimento;
    tEndereco endereco;
} tPessoa;

void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

tPessoa inicializaPessoa(){
    tPessoa pessoa;
    pessoa.nome = (char*) malloc(51*sizeof(char));
    printf("Digite o RG: ");
    scanf("%d", &pessoa.rg);
    limparBuffer();
    printf("Digite o nome: ");
    scanf("%s", pessoa.nome);

    pessoa.datNascimento = inicializaData();
    pessoa.endereco = inicializaEndereco();

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
    limparBuffer();
    printf("Digite um novo Nome: ");
    fgets(p->nome, 51, stdin);
    p->nome[strcspn(p->nome, "\n")] = 0;
}

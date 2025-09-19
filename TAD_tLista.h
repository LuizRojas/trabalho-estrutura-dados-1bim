#include <stdio.h>
#include <stdlib.h>
#include "TAD_tEstudante.h"

struct lista {
    tEstudante estudante;
    struct lista *prox;
};
typedef struct lista Lista;

Lista* criaEstudantes(){
    return NULL;
}

int listaVazia(Lista *lst){
    return (lst == NULL);
}

Lista* buscaEstudante(Lista *lst, int matricula){
    for (Lista *aux = lst; aux != NULL; aux = aux->prox){
        if(getMatriculaEstudante(&aux->estudante) == matricula)
            return aux;
    }
    return NULL;
}

Lista* insereEstudante(Lista *lst, tEstudante novoEstudante){
    if (buscaEstudante(lst, getMatriculaEstudante(&novoEstudante)) != NULL) {
        printf("\nERRO: Matricula ja cadastrada!\n");
        free(novoEstudante.pessoa.nome);
        free(novoEstudante.aluno.nomeCurso);
        return lst;
    }

    Lista *novoNo = (Lista*) malloc(sizeof(Lista));
    novoNo->estudante = novoEstudante;
    novoNo->prox = lst;
    printf("\nEstudante inserido com sucesso!\n");
    return novoNo;
}

void apresentaTodosEstudantes(Lista *lst){
    if (listaVazia(lst)){
        printf("\nNenhum estudante cadastrado.\n");
        return;
    }
    for (Lista *aux = lst; aux != NULL; aux = aux->prox){
        apresentacaoEstudante(&aux->estudante);
    }
}

Lista* removeEstudante(Lista *lst, int matricula){
    Lista *ant = NULL;
    Lista *aux = lst;

    while (aux != NULL && getMatriculaEstudante(&aux->estudante) != matricula){
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL){
        printf("\nMatricula nao encontrada.\n");
        return lst;
    }

    if (ant == NULL) {
        lst = aux->prox;
    } else {
        ant->prox = aux->prox;
    }

    free(aux->estudante.pessoa.nome);
    free(aux->estudante.aluno.nomeCurso);
    free(aux);

    printf("\nEstudante removido com sucesso.\n");
    return lst;
}

void liberaLista(Lista *lst){
    Lista *aux = lst;
    Lista *prx;

    while (aux != NULL){
        prx = aux->prox;
        free(aux->estudante.pessoa.nome);
        free(aux->estudante.aluno.nomeCurso);
        free(aux);
        aux = prx;
    }
}

void alteraCelularLista(Lista *lst, int matricula){
    Lista *aux = buscaEstudante(lst, matricula);
    if (aux != NULL) {
        alteraCelularEstudante(&aux->estudante);
    } else {
        printf("\nMatricula nao encontrada.\n");
    }
}

void alteraResidenciaLista(Lista *lst, int matricula){
    Lista *aux = buscaEstudante(lst, matricula);
    if (aux != NULL) {
        alteraResidenciaEstudante(&aux->estudante);
    } else {
        printf("\nMatricula nao encontrada.\n");
    }
}

void alteraNomeLista(Lista *lst, int matricula){
    Lista *aux = buscaEstudante(lst, matricula);
    if (aux != NULL) {
        alteraNomeEstudante(&aux->estudante);
    } else {
        printf("\nMatricula nao encontrada.\n");
    }
}

void alteraPeriodoLista(Lista *lst, int matricula){
    Lista *aux = buscaEstudante(lst, matricula);
    if (aux != NULL) {
        alteraPeriodoEstudante(&aux->estudante);
    } else {
        printf("\nMatricula nao encontrada.\n");
    }
}

void alteraCrLista(Lista *lst, int matricula){
    Lista *aux = buscaEstudante(lst, matricula);
    if (aux != NULL) {
        alteraCrEstudante(&aux->estudante);
    } else {
        printf("\nMatricula nao encontrada.\n");
    }
}
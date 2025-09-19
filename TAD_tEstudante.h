#include <stdlib.h>
#include <stdio.h>
#include "TAD_tPessoa.h"
#include "TAD_tAluno.h"

typedef struct {
    tPessoa pessoa;
    tAluno aluno;
} tEstudante;

tEstudante inicializaEstudante() {
    tEstudante estudante;
    printf("\nNovo Estudante\n");
    estudante.pessoa = inicializaPessoa();
    estudante.aluno = inicializaAluno();
    return estudante;
}

void apresentacaoEstudante(tEstudante *e) {
    printf("\nEstudante\n");
    apresentaPessoa(&e->pessoa);
    apresentaAluno(&e->aluno);
}

int getMatriculaEstudante(tEstudante *e) {
    return getMatricula(&e->aluno);
}

void alteraCelularEstudante(tEstudante *e) {
    alteraCelularPessoa(&e->pessoa);
}

void alteraResidenciaEstudante(tEstudante *e) {
    alteraResidenciaPessoa(&e->pessoa);
}

void alteraNomeEstudante(tEstudante *e) {
    alteraNomePessoa(&e->pessoa);
}

void alteraPeriodoEstudante(tEstudante *e) {
    alteraPeriodoAluno(&e->aluno);
}

void alteraCrEstudante(tEstudante *e) {
    alteraCRAluno(&e->aluno);
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char *nomeCurso;
    int periodo;
    float cr;
} tAluno;

tAluno inicializaAluno() {
    
    tAluno a;
    
    a.nomeCurso = (char*) malloc(51 * sizeof(char));
    
    printf("\n=== Cadastro de Aluno ===\n");
    printf("Matricula: ");
    scanf("%d", &a.matricula);
    printf("Curso: ");
    scanf(" %49s", a.nomeCurso);
    printf("Periodo: ");
    scanf("%d", &a.periodo);
    printf("CR: ");
    scanf("%f", &a.cr);
    return a;
}

void apresentaAluno(tAluno* a){
    printf("Matricula: %d\n", a->matricula);
    printf("Curso: %s\n", a->nomeCurso);
    printf("Periodo: %d\n", a->periodo);
    printf("CR: %.2f\n", a->cr);
}

int retornaMatricula(tAluno* a){
    return a->matricula;
}

void alteraPeriodoAluno(tAluno* a){
    printf("Digite o novo Periodo: ");
    scanf("%d", &a->periodo);
}

void alteraCRAluno(tAluno* a){
    printf("Digite o novo CR: ");
    scanf("%f", &a->cr);
}

int getMatricula(tAluno* a){
    return a->matricula;
}
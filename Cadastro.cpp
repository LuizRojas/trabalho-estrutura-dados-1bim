#include <stdio.h>
#include "TAD_tLista.h"

void exibirMenuPrincipal() {
    printf("\n===== CADASTRO DE ESTUDANTES =====\n");
    printf("1. Inserir Estudante\n");
    printf("2. Buscar Estudante\n");
    printf("3. Editar Estudante\n");
    printf("4. Remover Estudante\n");
    printf("5. Exibir Todos os Estudantes\n");
    printf("6. Sair\n");
    printf("Escolha uma opcao: ");
}

void exibirSubMenuEdicao() {
    printf("\n--- O que deseja editar? ---\n");
    printf("1. Residencia (CEP e Numero)\n");
    printf("2. Celular\n");
    printf("3. Nome\n");
    printf("4. Periodo\n");
    printf("5. CR\n");
    printf("Escolha uma opcao: ");
}

int main() {
    Lista* listaDeEstudantes = criaEstudantes();
    int opcao, matricula;

    do {
        exibirMenuPrincipal();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                tEstudante novo = inicializaEstudante();
                listaDeEstudantes = insereEstudante(listaDeEstudantes, novo);
                break;
            }
            case 2: {
                printf("Digite a matricula para busca: ");
                scanf("%d", &matricula);
                Lista* encontrado = buscaEstudante(listaDeEstudantes, matricula);
                if (encontrado != NULL) {
                    apresentacaoEstudante(&encontrado->estudante);
                } else {
                    printf("\nMatricula nao encontrada.\n");
                }
                break;
            }
            case 3: {
                printf("Digite a matricula do estudante para edicao: ");
                scanf("%d", &matricula);
                Lista* estudanteParaEditar = buscaEstudante(listaDeEstudantes, matricula);
                if (estudanteParaEditar != NULL) {
                    int optEdicao;
                    exibirSubMenuEdicao();
                    scanf("%d", &optEdicao);
                    switch (optEdicao) {
                        case 1: alteraResidenciaEstudante(&estudanteParaEditar->estudante); break;
                        case 2: alteraCelularEstudante(&estudanteParaEditar->estudante);    break;
                        case 3: alteraNomeEstudante(&estudanteParaEditar->estudante);       break;
                        case 4: alteraPeriodoEstudante(&estudanteParaEditar->estudante);    break;
                        case 5: alteraCrEstudante(&estudanteParaEditar->estudante);         break;
                        default: printf("Opcao de edicao invalida!\n");
                    }
                } else {
                    printf("\nMatricula nao encontrada.\n");
                }
                break;
            }
            case 4: {
                printf("Digite a matricula para remocao: ");
                scanf("%d", &matricula);
                listaDeEstudantes = removeEstudante(listaDeEstudantes, matricula);
                break;
            }
            case 5:
                apresentaTodosEstudantes(listaDeEstudantes);
                break;
            case 6:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 6);

    liberaLista(listaDeEstudantes);
    return 0;
}
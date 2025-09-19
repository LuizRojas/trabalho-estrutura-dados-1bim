#include "TAD_tData.h"
#include "TAD_tEndereco.h"

int main(){

    tData data;
    inicializaData(data);
    apresentaData(data);

    tEndereco endereco;
    inicializaEndereco(endereco);
    apresentaEndereco(endereco);

    return 0;
}
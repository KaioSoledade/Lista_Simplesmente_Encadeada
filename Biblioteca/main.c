#include <stdio.h>
#include "listese.h"

int main(){
    No *lista;

    lista = inicializa_lista();

    inserir_no_fim(&lista, 30);
    inserir_no_fim(&lista, 20);
    inserir_no_fim(&lista, 80);


    lista_vazia(lista);

    imprimir_lista(lista);
}
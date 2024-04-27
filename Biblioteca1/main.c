#include <stdio.h>
#include "listese.h"

int main(){
    No *lista;

    lista = inicializa_lista();

    inserir_no_meio(&lista, 30, 10);
    inserir_no_meio(&lista, 20, 30);
    inserir_no_meio(&lista, 10, 30);

    lista_vazia(lista);

    imprimir_lista(lista);
}
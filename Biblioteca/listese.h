#ifndef LISTASE_H
#define LISTASE_H
#include <stdio.h>
#include <stdlib.h>

typedef int
    item;

typedef struct no{
    item valor;
    struct no *proximo;
}No;

No *inicializa_lista(){
    return NULL;
}

int lista_vazia(No *lista){
    if(lista){
        printf("\nLista nao vazia\n");
        return 0;
    }
    else {
        printf("\nLista vazia\n");
        return 1;
    }
}

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->valor != ant && aux->proximo != NULL){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }
    else{
        printf("Erro ao alocar memoria!! (inserir no  meio)");
    }
}

void imprimir_lista(No *no){
    printf("\nLista: ");
    No *atu = no;
    while(atu != NULL){
        printf("\n%d", atu->valor);
        atu = atu->proximo;
    }
    printf("\n\nFim da Lista");
}

#endif
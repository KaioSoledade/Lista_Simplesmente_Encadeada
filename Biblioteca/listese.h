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

No * inicializa_lista(){
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

void inserir_no_inicio(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));


    if(novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }
    else{
        printf("Erro ao alocar memoria!! (Inserir no inicio)\n");
    }
}

void inserir_no_meio(No **lista, item num, int ant){
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
void inserir_no_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;

        //Esse é o primeiro?
        if(*lista == NULL){
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->proximo){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }

    }
    else{
        printf("Erro em aloca memoria!! (inserir no fim)");
    }
}
void imprimir_lista(No *no){
    printf("\nLista: ");
    No *atu = no;
    while(atu != NULL){
        printf("\n%d", atu->valor);
        atu = atu->proximo;
    }
    printf("\nFim da Lista");
}
#endif
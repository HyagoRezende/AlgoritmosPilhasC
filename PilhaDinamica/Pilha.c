#include<stdio.h>
#include<stdlib.h>
#include"Pilha.h"

//Criar funcao de inicializacao da pilha
Pilha *criaPilha()
{
    Pilha *pilha = (Pilha *) malloc(sizeof(Pilha));

    if(pilha != NULL)
    {
        pilha->tamanho = 0;
        pilha->cabeca = NULL;
    }

    return pilha;
}

//Funcao para empilhar
int empilha(Pilha *pilha, int elemento)
{
    No *novoNo = (No *) malloc(sizeof(No));
    novoNo->elemento = elemento;

    if(pilha == NULL)
    {
        return -1; //Pilha nula
    }

    else
    {
        novoNo->prox = pilha->cabeca;
        pilha->cabeca = novoNo;
    }

    return 1; //Sucesso ao alocar
}

//Funcao para mostrar itens da pilha
void mostraPilha(Pilha *pilha)
{
    if(pilha == NULL)
    {
        printf("Pilha Vazia\n");
    }
    else
    {
        No *aux = pilha->cabeca;

        while(aux != NULL)
        {
            printf("%d - ", aux->elemento);
            aux = aux->prox;
        }
    }
}

int main()
{
    Pilha *pilha;
    pilha = criaPilha();

    empilha(pilha, 1);
    empilha(pilha, 2);
    empilha(pilha, 3);
    empilha(pilha, 4);

    mostraPilha(pilha);
    return 0;
}
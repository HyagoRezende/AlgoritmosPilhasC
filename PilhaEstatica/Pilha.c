#include<stdio.h>
#include<stdlib.h>
#include"Pilha.h"

//Criar funcao de inicializacao da pilha
Pilha *criaPilha()
{
    Pilha *novaPilha = (Pilha *) malloc(sizeof(Pilha));

    if(novaPilha != NULL)
    {
        novaPilha->tamanho = 0;
    }

    return novaPilha;
}

//Funcao para empilhar
int empilha(Pilha *pilha, int elemento)
{
    if(pilha->tamanho == MAX)
    {
        return -1; //Pilha ja esta cheia
    }
    else
    {
        pilha->vet[pilha->tamanho] = elemento;
        pilha->tamanho++;
        return 1; //Sucesso no empilhamento
    }
}

//Funcao para desempilhar
int desempilha(Pilha *pilha)
{
    if(pilha == NULL || pilha->tamanho == 0)
    {
        return -1; //Pilha nao alocada
    }
    else
    {
        pilha->tamanho--;
        return 1; //Sucesso ao desempilhar
    }
}

//Funcao para mostrar itens da pilha
void mostraPilha(Pilha *pilha)
{
    if(pilha == NULL || pilha->tamanho == 0)
    {
        printf("Pilha vazia\n");
    }
    else
    {
        for(int i = pilha->tamanho-1; i >= 0; i--)
        {
            printf("%d - ", pilha->vet[i]);
        }
    }
}

//Funcao para desalocar a pilha
void limpaPilha(Pilha *pilha)
{
    free(pilha);
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
    printf("\n\n");

    desempilha(pilha);
    desempilha(pilha);
    mostraPilha(pilha);



    return 0;
}
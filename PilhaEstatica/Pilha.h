#define MAX 10

//Criar tad pilha
typedef struct Pilha
{
    int tamanho;
    int vet[MAX];
}Pilha;

//Criar funcao de inicializacao da pilha
Pilha *criaPilha();

//Funcao para empilhar
int empilha(Pilha *pilha, int elemento);

//Funcao para desempilhar
int desempilha(Pilha *pilha);

//Funcao para mostrar itens da pilha
void mostraPilha(Pilha *pilha);

//Funcao para desalocar a pilha
void limpaPilha(Pilha *pilha);
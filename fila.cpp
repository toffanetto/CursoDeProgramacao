#include <bits/stdc++.h>

using namespace std;


#define MAX 5

typedef struct NO_AUX
{
    int infoLista;
    struct NO_AUX *proximo;
} NO_LISTA;

// PROTOTIPOS
int main ( void );
NO_LISTA *criarNo ( int );
void montarListaCaracteres ( NO_LISTA*&,int & );

void colocarNoFim ( NO_LISTA*&, int);
int retirarNoInicio(NO_LISTA*&);

void mostrarLista ( NO_LISTA*);

bool cheio(int);
bool vazio(NO_LISTA*);

int main ()
{
    NO_LISTA *lista;
    int tamanho;

    // INCLUINDO OS NOS NA LISTA
    montarListaCaracteres (lista,tamanho );

    // MOSTRANDO A LISTA
    //mostrarLista ( lista);//, (char*)"LISTA DE CARACTERES" );
}

void montarListaCaracteres ( NO_LISTA*& lista,int &tamanho)
{
    lista = NULL;
    tamanho = 0;
    char op;
    int numero;
    do
    {
        scanf(" %c ",&op);
        printf("%c\n",op);
        switch(op)
        {
        case 'C':
            scanf("%d",&numero);
            if(!cheio(tamanho)){
                colocarNoFim(lista,numero);
                tamanho++;
            }else { printf("Lista Cheia\n"); }
            break;
        case 'R':
            if(!vazio(lista)){
                numero = retirarNoInicio(lista);
                tamanho--;
                printf("%d\n",numero);
            }
            else
                printf("Lista Vazia\n");
            break;
        case 'M':
                mostrarLista(lista);
            break;
        }
    }
    while(op == 'C' || op == 'R' || op == 'M');

}

NO_LISTA* criarNo ( int vDado )
{
    NO_LISTA *noLista;

    noLista = (NO_LISTA*) calloc ( 1, sizeof(NO_LISTA));

    noLista->infoLista = vDado;
    noLista->proximo  = NULL;

    return ( noLista );
}

void colocarNoFim ( NO_LISTA *&lista,int numero)
{

    NO_LISTA *noLista, *pL, *pN;
    // BUSCANDO FINAL DA LISTA
    pL = lista;
    pN =  pL;

    while ( pL )
    {
        pN = pL;
        pL = pL->proximo;
    }

    // CRIANDO UM NOVO NO
    noLista = criarNo ( numero );

    // INCLUINDO O NOVO NO NA LISTA
    if ( pN )    // DEMAIS NOS DA LISTA
    {
        pN->proximo = noLista;
    }
    else     // PRIMEIRO NO DA LISTA
    {
        lista = noLista;
    }
}

void mostrarLista ( NO_LISTA *listaValores )
{

	printf ( "%d\n", listaValores->infoLista );
}

bool cheio(int tamanho)
{
    return tamanho == MAX;
}

bool vazio(NO_LISTA* lista)
{
    return lista == NULL;
}

int retirarNoInicio(NO_LISTA*& lista){
    int frente = lista->infoLista;
    lista = lista->proximo;
    return frente;
}

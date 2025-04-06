#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10

using namespace std;
void imprimir_pilha(int pilha[TAM])
{
    int cont;
    for (cont = 0; cont < TAM; cont++)
    {
        cout << pilha[cont] << " | ";
    }
}

void push_pilha(int pilha[TAM], int *topo)
{
    *topo = 0;
    int cont;
    while (1)
    {
        for (cont = 0; cont < TAM; cont++)
        {
            if (*topo > TAM - 1)
            {
                cout << "\nPilha cheia!";
                *topo -= 1;
                return;
            }
            cout << "\nNumero que sera inserido: ";
            cin >> pilha[*topo];
            imprimir_pilha(pilha);
            *topo += 1;
        }
    }
}

void pop_pilha(int pilha[TAM], int *topo)
{
    while (1)
    {

        if (*topo == -1)
        {
            cout << "\nPilha vazia!";
            *topo = 0;
            return;
        }
        cout << "\nNumero removido: ";
        cout << pilha[*topo] << "\n";
        pilha[*topo] = 0;
        *topo -= 1;

        imprimir_pilha(pilha);
    }
}

int main()
{
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo;
    imprimir_pilha(pilha);
    push_pilha(pilha, &topo);
    pop_pilha(pilha, &topo);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10

using namespace std;

void imprimir_fila(int fila[TAM])
{
    for (int cont = 0; cont < TAM; cont++)
    {
        cout << fila[cont] << " | ";
    }
}

void add_elementos(int fila[TAM], int *final)
{
    int cont;
    while (1)
    {
        *final += 1;
        if (*final > TAM - 1)
        {
            cout << "Fila cheia!\n";
            *final -= 1;
            return;
        }
        for (cont = 0; cont < TAM; cont++)
        {
            cout << "digite um numero: ";
            *final += 1;

            cin >>fila[cont];
            imprimir_fila(fila);
            cout << "\n";
        }
    }
}

int main()
{
    int fila[TAM];
    int final =-1;
    for (int cont = 0; cont < TAM; cont++)
        {
            fila[cont] = 0;
        } 
    while (1)
    {
        
        int opcao;
        cout << "1. add\n";
        cout << "2. remover\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            add_elementos(fila, &final);
            break;
        case 2:
            int cont;
    int contador = 1;

        if (final == -1)
        {
            cout << "Fila vazia!\n";
            break;
        }
        
        for (cont = 0; cont < TAM; cont++)
        {
            
                cout << "Posicao " << contador << ", valor: " << fila[cont] << " foi removido\n";
                fila[cont] = 0;
                imprimir_fila(fila);
                cout << "\n";
                contador += 1;
            
        }
        exit(0);
            break;
    }
    }

    return 0;
}
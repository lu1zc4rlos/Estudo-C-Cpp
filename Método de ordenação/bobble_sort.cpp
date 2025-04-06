#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM])
{
    for (int cont = 0; cont < TAM; cont++)
    {
        cout <<" |" <<vetor[cont] << "| ";
    }
}

int main(){
    int vetor[TAM] = {486,356,223,817,906,302,768,534,423,346};

     for(int cont=0;cont<TAM;cont++){
       for(int cont=0;cont<TAM-1;cont++){
        if(vetor[cont]>vetor[cont+1]){
            int aux1 = vetor[cont];
            int aux2 = vetor[cont+1];
            vetor[cont] = aux2;
            vetor[cont+1] = aux1;
        }
       }
    }
       imprimir_vetor(vetor);


    return 0;
}
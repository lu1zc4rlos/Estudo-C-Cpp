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
        int atual;
        int anterior;
        int i;

     for(i=1;i<TAM;i++){

        atual=vetor[i];
        anterior = i-1;

        while(anterior>=0 && atual<vetor[anterior]){
            vetor[anterior+1]=vetor[anterior];
            anterior-=1;
        }
        anterior+=1;
        vetor[anterior]=atual;
    
     }

     imprimir_vetor(vetor);


    return 0;
}
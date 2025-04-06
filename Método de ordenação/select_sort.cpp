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
    int aux_atual;
    int contador;
    int contador1;

    for(int cont=0;cont<TAM;cont++){
        aux_atual=vetor[cont];
        contador = cont+1;
        contador1 = cont;

        for(contador=(cont+1);contador<TAM; contador++)
        {
            if(vetor[contador]<vetor[contador1]){
            contador1=contador;}
            

        }

        if(cont!=contador1){
        vetor[cont]=vetor[contador1];
        vetor[contador1]=aux_atual;
        }
        imprimir_vetor(vetor);
        cout<<"\n";
        

    }
    return 0;
}
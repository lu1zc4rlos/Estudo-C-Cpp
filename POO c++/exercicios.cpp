#include <iostream>
#include <string>
#include <ios>
#include <limits>
#include "classe_celular.h"
#include "classe_animal.h"
#include "classe_usuario.h"
#include "classe_pessoa.h"

using namespace std;
/*
class coxinha
{
public:
    string saborCoxinha;

    coxinha(string sabor)
    {
        saborCoxinha = sabor;
    }
};


int main()
{
    string sabor;

    cout << "Informe o sabor da coxinha: ";
    cin >> sabor;

    coxinha p1(sabor);
    cout << "sua coxinha de " << p1.saborCoxinha << " esta pronta!";

    return 0;
}

class cachorro{
    public:
    string raca;
    cachorro(){
         raca = "Viralatinha";
    }
    cachorro(string nova_raca){
        raca = nova_raca;
   }
};

int main(){
    int cont = 0;
    string raca_cachorro;
    cout << "Criar cachorro sem raca\n";
    cout << "1.sim | 2.nao\n";
    cout << "Opcao: ";
    cin >> cont;
    if(cont == 1){
        cachorro p1;
        cout << "Seu cachorro da raca " << p1.raca << " foi criado";
    }
    else{
        cout << "Digite a raca: ";
        cin.sync();
        cin >> raca_cachorro;
        cachorro p1(raca_cachorro);
        cout << "Seu cachorro da raca " << p1.raca << " foi criado";
    }

    return 0;
}
    
class pessoa{
    public:
    string nome;
    int idade;
    float salario;

    pessoa(string nome_novo,int idade_novo,float salario_novo){
        nome = nome_novo; idade = idade_novo; salario = salario_novo;
    }
    
    imprimir(){
        cout << nome << " possui " <<  idade << " anos e um salario de " << salario << " reais";
    }
};
int main(){
    pessoa p1("Luiz",20,1990.18);
    p1.imprimir();

    return 0;
}
    

class calculadora{
    public:

        int soma(int x,int y){
            int resultado = x+y;
            return resultado;
        }
        int subtracao(int x,int y){
            int resultado = x-y;
            return resultado;
        }
        int multiplicacao(int x,int y){
            int resultado = x*y;
            return resultado;
        }
        float divisao(float x,float y){
            float resultado = x/y;
            return resultado;
        }   
};

int main(){
    calculadora p1;

    cout << p1.soma(100,50) << "\n";
    cout << p1.subtracao(100,50) << "\n";
    cout << p1.multiplicacao(100,50) << "\n";
    cout << p1.divisao(100,50) << "\n";

    return 0;
}



int main(){
    celular p1;
    p1.setmarca("xiomi");
    p1.setpreco(1900.20);
    cout << p1.getmarca() << "\n";
    cout << p1.getpreco() << "\n\n";

    televisao p2;
    p2.setmarca("Sansumg");
    p2.setpreco(3000.20);
    p2.setpolegadas(60);

  
    cout << "Marca: " << p2.getmarca() << "\n";
    cout << "Preco: " << p2.getpreco() << "\n";
    cout << "Polegadas: " << p2.getpolegadas() << "\n";



    return 0;
}



int main(){
cachorro cachorro1;
cachorro1.setterreno("Terra");
cachorro1.setmesesgestacao(5);
cachorro1.setraca("Pitbull");
cout << cachorro1.getterreno() <<"\n";
cout << cachorro1.getmesesgestacao() <<"\n";
cout << cachorro1.getraca() <<"\n";
cachorro1.latir();


    return 0;
}



int main(){
    personagem personagem1;
    personagem1.setnome("Luiz");
    personagem1.setemail("jujuni1000.carlos@gmail.com");
    personagem1.setnivel(1);
    personagem1.aumentaUmNivel();
    personagem1.aumentaUmNivel();
    cout << personagem1.getnome() << "\n";
    cout << personagem1.getemail() << "\n";
    cout << personagem1.getnivel() << "\n";

    return 0;
}



int main(){
    professor pessoa1("Luiz", 37083115826, 4000.43);
    cout << pessoa1.getnome() << " do cpf " << pessoa1.getcpf() << " recebe " << pessoa1.getsalario();

    return 0;
}
    */

  class menu{
    public:
    void saudar(){}
  };
  class ingles: public idioma{
    public:
    void saudar(){
     cout << "Hello\n";
    }
  };
  class russo: public idioma{
    public:
    void saudar(){
     cout << "Privet\n";
    }
  };
  class croata: public idioma{
    public:
    void saudar(){
     cout << "Hej\n";
    }
  };

  int main(){
    ingles c1;
    c1.saudar();
    russo c2;
    c2.saudar();
    croata c3;
    c3.saudar();
  }
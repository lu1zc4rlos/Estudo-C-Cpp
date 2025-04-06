#include <iostream>
#include <string>
#include <ios>
#include <limits>

using namespace std;
// criando classe em c++
class Pessoa
{
public:
    string nome;
    int idade;
    float peso;
    string especie;

    // criando metodo construtor
    Pessoa()
    {
        cout << "Metodo construtor\n";
        especie = "Humano";
    }
    Pessoa(string novoNome,int novaIdade, float novoPeso, string novaEspecie){
        nome = novoNome;
        idade = novaIdade;
        peso = novoPeso;
        especie = novaEspecie;
    }
};

int main()
{
    // criando um objeto da classe Pessoa
    Pessoa Pessoa1;
    cout << "Digite o nome da pessoa 1:";
    // Lendo string com espaço
    getline(cin, Pessoa1.nome);
    // limpando buffer de entrada padrão
    cin.sync();
    cout << "Digite a idade da pessoa 1:";
    cin >> Pessoa1.idade;
    cin.sync();
    cout << "Digite a peso da pessoa 1:";
    cin >> Pessoa1.peso;

    // printando dados digitados pelo usuario
    cout << Pessoa1.nome << " possui " << Pessoa1.idade << " anos e pesa " << Pessoa1.peso << "kg, " << "especie " << Pessoa1.especie;
    cin.sync();
    // modificando metodo construtor
    Pessoa Pessoa2;
    cout << "Digite o nome da pessoa 2: ";
    getline(cin, Pessoa2.nome);

    cin.sync();
    cout << "Digite a idade da pessoa 2: ";
    cin >> Pessoa2.idade;
    cin.sync();
    cout << "Digite a peso da pessoa 2: ";
    cin >> Pessoa2.peso;
    Pessoa2.especie = "Cachorro";

    cout << Pessoa2.nome << " possui " << Pessoa2.idade << " anos e pesa " << Pessoa2.peso << "kg, " << "especie " << Pessoa2.especie;

    Pessoa Pessoa3("Lucas", 34,89.90,"Macaco");

    cout << Pessoa3.nome << " possui " << Pessoa3.idade << " anos e pesa " << Pessoa3.peso << "kg, " << "especie " << Pessoa3.especie;


    return 0;
}


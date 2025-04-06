using namespace std;

class pessoa{
    private:
    string nome;
    int cpf;
    public:
    string getnome(){
        return nome;
    }
    int getcpf(){
        return cpf;
    }
    void setnome(string nome){
        this -> nome = nome;
    }
    void setcpf(int cpf){
        this -> cpf = cpf;
    }
};

class professor: public pessoa{
    private:
    float salario;
    public:
    float getsalario(){
        return salario;
    }
    void setsalario(float salario){
        this -> salario = salario;
    }
    professor(string nome,int cpf,float salario){
        setnome(nome);
        setcpf(cpf);
        setsalario(salario);
    }

};
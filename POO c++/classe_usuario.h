using namespace std;

class usuario{
    private:
    string nome;
    string email;
    public:
    string getnome(){
        return nome;
    }
    string getemail(){
        return email;
    }
    void setnome(string nome){
        this -> nome = nome;
    }
    void setemail(string email){
        this -> email = email;
    }
};

class personagem: public usuario{
    private:
    int nivel;
    public:
    int getnivel(){
        return nivel;
    }
    void setnivel(int nivel){
        this -> nivel = nivel;
    }
    void aumentaUmNivel(){
        nivel+=1;
    }
};
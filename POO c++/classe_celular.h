using namespace std;

class celular{
    private:
    string marca = "";
    float preco = 0;
     
    public:
    string getmarca(){
        return marca;
    }
    void setmarca(string marca){
        this -> marca = marca;
    }

    float getpreco(){
        return preco;
    }
    void setpreco(float preco){
        this -> preco = preco;
    }
    protected:
    void sou_eletronico(){
        cout << "Eu sou eletronico!\n";
    }
};

class televisao: public celular{
private:
int polegadas;
public:
     televisao(){
        sou_eletronico();
     }
     int getpolegadas(){
        return polegadas;
     }
     void setpolegadas(int polegadas){
        this -> polegadas = polegadas;
     }

};
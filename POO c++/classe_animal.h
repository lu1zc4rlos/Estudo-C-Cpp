using namespace std;

class animal
{
   
private:
 string terreno;

 public:
 
 string getterreno(){
    return terreno;
 }
 void setterreno(string terreno){
    this -> terreno = terreno;
 }
};

class mamifero: public animal
{
   
private:
 int mesesgestacao;

 public:
 int getmesesgestacao(){
    return mesesgestacao;
 }
 void setmesesgestacao(int mesesgestacao){
    this -> mesesgestacao = mesesgestacao;    
 }
};

class cachorro: public mamifero
{
   
private:
 string raca;

 public:
 string getraca(){
    return raca;
 }
 void setraca(string raca){
    this -> raca = raca;    
 }
 void latir(){
    cout << "Auuu Auuuu";
 }
};

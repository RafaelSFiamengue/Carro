#include <iostream>
using namespace std;

class Carro
{
    public:
    
    string cor;
    string modelo;
    float velmax;
    void Buzinar();
};

int main()
{
    Carro MeuCarro;
    
    MeuCarro.cor = "Azul";
    MeuCarro.modelo = "MCLAREN";
    MeuCarro.velmax = 220.0f;
    
    MeuCarro.Buzinar();
    cout << MeuCarro.cor << endl;
    cout << MeuCarro.modelo << endl;
    cout << MeuCarro.velmax << endl;
}

void Carro::Buzinar(){
    cout << "Bi,Bi!!" << endl; 
}
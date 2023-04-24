#include <iostream>
using namespace std;
//Criação da classe carro
class Carro
{
    public:
    //Base de como o carro será construido, suas especificidades
    string cor;
    string modelo;
    float velmax;
    void Buzinar();
};
//Programa Principal
int main()
{
    //Objeto meucarro sendo criado a partir da classe carro
    Carro MeuCarro;
    //Especificidades do objeto meu carro
    MeuCarro.cor = "Azul";
    MeuCarro.modelo = "MCLAREN";
    MeuCarro.velmax = 220.0f;
    //Imprime tudo sobre o meucarro para o usuário
    MeuCarro.Buzinar();
    cout << MeuCarro.cor << endl;
    cout << MeuCarro.modelo << endl;
    cout << MeuCarro.velmax << endl;
}
//Método da buzina e como é feita para o usuario
void Carro::Buzinar(){
    cout << "Bi,Bi!!" << endl; 
}

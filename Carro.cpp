#include <iostream>
using namespace std;
//Classe para os carros
class Carro
{
    //Coisas dos carros que podem mudar ou não de cada carro criado, base de cada carro
    public:
    string cor;
    string modelo;
    float velmax;
    void Buzinar();
};
//Programa Principal
int main()
{
    //Criação de dois objetos a partir da classe carro
    Carro MeuCarro;
    Carro Carro2;
    //Objeto MeuCarro e suas especificidades
    MeuCarro.cor = "Azul";
    MeuCarro.modelo = "MCLAREN";
    MeuCarro.velmax = 240.0f;
    
    //Objeto Carro2 e suas especificidades
    Carro2.cor = "Vermelho";
    Carro2.modelo = "Ferrari";
    Carro2.velmax = 220.0f;
    
    //Imprime para o usuario o objeto meucarro
    MeuCarro.Buzinar();
    cout << MeuCarro.cor << endl;
    cout << MeuCarro.modelo << endl;
    cout << MeuCarro.velmax << endl;
    //Imprime para o usuario o objeto carro2
    Carro2.Buzinar();
    cout << Carro2.cor << endl;
    cout << Carro2.modelo << endl;
    cout << Carro2.velmax << endl;
};
//Metodo buzina e como é usado
void Carro::Buzinar(){
    cout << "Bi,Bi!!" << endl; 
}

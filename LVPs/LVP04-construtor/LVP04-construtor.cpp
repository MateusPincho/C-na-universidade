#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

/* Discente: Mateus Pincho de Oliveira
Matrí­cula: 121110103
Período: 21.2
Curso: Engenharia Elétrica
Disciplina: Técnicas de Programação
Turma: 02
Professor: Marcus Salerno
Unidade 03: LVP-04 
IDE: VS-Code */


using namespace std;

struct CorpoCeleste
{
    string nome;
    double raio;
    double massa;
    
};


class SistemaInterestelar {
    
    CorpoCeleste Planeta1;
    CorpoCeleste Planeta2;
    double distanciaPlanetas;
    double constanteG;

public:
    SistemaInterestelar(string,double,double,string,double,double, double);
    bool getMaiorMassa();
    double getVelocidadeOrbita(bool);



};

int main(){
    setlocale (LC_ALL, "portuguese");
    system("CLS");
    // Mensagem Boas Vindas
    cout << "Bem vindo ao Espaço !" << endl;
    cout << "Você acabou de criar seu sistema interestelar, vamos adicionar os planetas que fazem parte dele: " << endl;
    system("pause");

    // Passo 1 - receber as informações dos planetas 

    string entradaNome1;
    double entradaRaio1;
    double entradaMassa1;
    
    string entradaNome2;
    double entradaRaio2;
    double entradaMassa2;

    double entradaDistancia;

    cout << "Foram descobertos 2 planetas no seu sistema !!" << endl;

    cout << "Informe o nome do Planeta 1: " << endl;
    cin >> entradaNome1;
    cout << "informe a massa do Planeta 1: " << endl;
    cin >> entradaMassa1;
    cout << "Informe o raio do Planeta 1:  " << endl;
    cin >> entradaRaio1;

    cout << "Informe o nome do Planeta 2: " << endl;
    cin >> entradaNome2;
    cout << "informe a massa do Planeta 2: " << endl;
    cin >> entradaMassa2;
    cout << "Informe o raio do Planeta 2:  " << endl;
    cin >> entradaRaio2;
    cout << "Informe a distância entre os planetas" << endl;
    cin >> entradaDistancia;

    // Passo 2 - criar o objeto Sistema_Interestelar 

    SistemaInterestelar vialactea( entradaNome1,entradaRaio1,entradaMassa1, entradaNome2, entradaRaio2, entradaMassa2, entradaDistancia);








    return 0;
}

SistemaInterestelar :: SistemaInterestelar (string nome1, double raio1, double massa1, string nome2, double raio2, double massa2, double distancia)
{
    Planeta1.nome = nome1;
    Planeta1.raio = raio1;
    Planeta1.massa = massa1;

    Planeta2.nome = nome2;
    Planeta2.raio = raio2;
    Planeta2.massa = massa2;

    distanciaPlanetas = distancia;
    constanteG = 6.67e-11;

}

bool SistemaInterestelar :: getMaiorMassa(){
    // getMaiorMassa nos da dois resultados 
    // true = Planeta1 tem massa maior que 2
    // false = Planeta2 tem massa maior que 1

    if (Planeta1.massa > Planeta2.massa) 
        return true;
    else 
        return false;

}

double SistemaInterestelar :: getVelocidadeOrbita( bool massaMaior) 
{
    // Se massaMaior == true => Significa que o Planeta 1 tem massa maior
    // Se massaMaior == false => Significa que o Planeta 2 tem massa maior
    
    if (massaMaior)
        return sqrt(constanteG*(Planeta1.massa/distanciaPlanetas));
    else
        return sqrt(constanteG*(Planeta2.massa/distanciaPlanetas));


}
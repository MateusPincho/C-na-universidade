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
    double getForcaGravitacional();
    double getCampoGravitacional(bool);
    double getVelocidadeEscape(bool);
    double getVelocidadeOrbita(bool);
    ~SistemaInterestelar();


};

int main(){
    setlocale (LC_ALL, "portuguese");
    system("CLS");

    // Mensagem Boas Vindas

    cout << "Bem vindo ao Espaço !" << endl;
    cout << "Você acabou de criar seu sistema interestelar, vamos procurar os planetas que fazem parte dele: " << endl;
    system("pause");

    // Passo 1 - receber as informações dos planetas

    string entradaNome1;
    double entradaRaio1;
    double entradaMassa1;

    string entradaNome2;
    double entradaRaio2;
    double entradaMassa2;

    double entradaDistancia;

    cout << "Foram descobertos 2 planetas no seu sistema !!" << endl << endl;

    cout << "Informe o nome do Planeta 1: " << endl;
    cin >> entradaNome1;
    cout << "informe a massa do Planeta 1: " << endl;
    cin >> entradaMassa1;
    cout << "Informe o raio do Planeta 1:  " << endl;
    cin >> entradaRaio1;

    cout << endl<< "Informe o nome do Planeta 2: " << endl;
    cin >> entradaNome2;
    cout << "informe a massa do Planeta 2: " << endl;
    cin >> entradaMassa2;
    cout << "Informe o raio do Planeta 2:  " << endl;
    cin >> entradaRaio2;
    cout << "Informe a distância entre os planetas" << endl;
    cin >> entradaDistancia;

    // Passo 2 - criar o objeto SistemaInterestelar usando construtor

    SistemaInterestelar vialactea( entradaNome1,entradaRaio1,entradaMassa1, entradaNome2, entradaRaio2, entradaMassa2, entradaDistancia);

    // Passo 3 - saber qual o planeta de maior massa

    bool maiorMassaDosPlanetas = vialactea.getMaiorMassa();

    // Passo 4 - Iniciar a análise do sistema

    cout << endl << "A força gravitacional entre os planetas é de " << scientific << setprecision(2) << vialactea.getForcaGravitacional() << " Newtons" << endl;

    cout << "O campo gravitacional do maior planeta é de " << scientific << setprecision(2) << vialactea.getCampoGravitacional(maiorMassaDosPlanetas) << " m/s^2" << endl;

    cout << "A velocidade de escape do maior planeta é de " << scientific << setprecision(2) << vialactea.getVelocidadeEscape(maiorMassaDosPlanetas) << " km/s" << endl;

    cout << "A velocidade de orbita do menor planeta em relação ao maior é de " << scientific << setprecision(2) << vialactea.getVelocidadeOrbita(maiorMassaDosPlanetas) << " km/s" << endl << endl;

    // Passo 5 - Mensagem do destrutor


    return 0;
}

// construtor de parâmetros que receber os dois corpos celestes (com os seus respectivos dados) e a distância entre eles
SistemaInterestelar::SistemaInterestelar (string nome1, double raio1, double massa1, string nome2, double raio2, double massa2, double distancia)
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

// método booleano para comparar as massas dos corpos celestes
bool SistemaInterestelar::getMaiorMassa()
{
    // getMaiorMassa nos da dois resultados
    // true = Planeta1 tem massa maior que 2
    // false = Planeta2 tem massa maior que 1

    if (Planeta1.massa > Planeta2.massa)
        return true;
    else
        return false;

}

// método que calcula a força gravitacional entre os corpos
double SistemaInterestelar::getForcaGravitacional()
{
    return constanteG * ( ( Planeta1.massa * Planeta2.massa ) /  (pow(distanciaPlanetas , 2)) );

}

// método para calcular o campo Gravitacional do corpo de maior massa
double SistemaInterestelar::getCampoGravitacional(bool massaMaior)
{
    // Se massaMaior == true => Significa que o Planeta 1 tem massa maior
    // Se massaMaior == false => Significa que o Planeta 2 tem massa maior

    if (massaMaior)
        return constanteG * ( Planeta1.massa / pow(Planeta1.raio, 2) ) ;
    else
        return constanteG * ( Planeta2.massa / pow(Planeta2.raio, 2) ) ;
}

// método para calcular a velocidade em orbita do corpo de massa menor em relação ao corpo de maior massa
double SistemaInterestelar::getVelocidadeOrbita(bool massaMaior)
{
    // Se massaMaior == true => Significa que o Planeta 1 tem massa maior
    // Se massaMaior == false => Significa que o Planeta 2 tem massa maior
    // Divisão por 1000 para transformar para Km/s

    if (massaMaior)
        return sqrt( constanteG * ( Planeta1.massa /  distanciaPlanetas ) ) / 1000 ;
    else
        return sqrt( constanteG * ( Planeta2.massa / distanciaPlanetas ) ) / 1000 ;
}

// método para calcular a velocidade de escape em relação ao corpo de maior massa
double SistemaInterestelar::getVelocidadeEscape(bool massaMaior)
{
    // Se massaMaior == true => Significa que o Planeta 1 tem massa maior
    // Se massaMaior == false => Significa que o Planeta 2 tem massa maior
    // Dividir por 100 para transformar para km/s

    if (massaMaior)
        return sqrt ( ( 2 * constanteG * Planeta1.massa) / Planeta1.raio ) / 1000 ;
    else
        return sqrt ( ( 2 * constanteG * Planeta2.massa) / Planeta2.raio ) / 1000 ;
}

// destrutor que imprime uma mensagem de finalização
SistemaInterestelar::~SistemaInterestelar()
{
    cout << "Você criou, configurou e analisou o seu sistema! " << endl;
}


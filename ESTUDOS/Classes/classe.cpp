#include <iostream>
#include <locale>

using namespace std;

class moto
{
    int velocidademax{80};
    bool bligada{false};
    bool bmovimentando {false};

    public:
    void DefinirVelMax(int vel);
    void ligar();
    void desligar();
};

// Esta fun��o deve modificar o valor do atributo velocidademax para o valor recebido na fun��o
void moto::DefinirVelMax(int vel)
{
    velocidademax = vel;
    cout << "A velocidade m�xima da moto �: " << velocidademax <<" km/h"<< endl;
}

// Esta fun��o deve modificar o estado bligada da moto
// Alterar o estado de false para true, caso a moto j� esteja ligada, ir� imprimir na tela a mensagem
void moto::ligar()
{
    if(bligada)
    {
        cout << "A moto j� est� ligada!";
    }
    else 
    {
        bligada = true;
        cout << "Voc� ligou a moto!";
    }
}

void moto::desligar()
{
    if (bligada)
    {
        bligada = false;
        cout << "Voc� desligou a moto!";
    }
    else
    {
        cout << "A moto j� estava desligada";
    }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    system("CLS");

    moto motocross;

    motocross.DefinirVelMax(150);
    motocross.ligar();

    return 0;
}

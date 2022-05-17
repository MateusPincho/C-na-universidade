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

// Esta função deve modificar o valor do atributo velocidademax para o valor recebido na função
void moto::DefinirVelMax(int vel)
{
    velocidademax = vel;
    cout << "A velocidade máxima da moto é: " << velocidademax <<" km/h"<< endl;
}

// Esta função deve modificar o estado bligada da moto
// Alterar o estado de false para true, caso a moto já esteja ligada, irá imprimir na tela a mensagem
void moto::ligar()
{
    if(bligada)
    {
        cout << "A moto já está ligada!";
    }
    else 
    {
        bligada = true;
        cout << "Você ligou a moto!";
    }
}

void moto::desligar()
{
    if (bligada)
    {
        bligada = false;
        cout << "Você desligou a moto!";
    }
    else
    {
        cout << "A moto já estava desligada";
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

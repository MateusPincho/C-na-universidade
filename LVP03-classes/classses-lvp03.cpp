/* Discente: Mateus Pincho de Oliveira
Matrí­cula: 121110103
Período: 21.2
Curso: Engenharia Elétrica
Disciplina: Técnicas de Programação
Turma: 02
Professor: Marcus Salerno
Unidade 02: LVP-03 */

// Simulador de circuito elétrico 



#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;

struct Resistor // tipo resistor 
{
    float ddpCircuito; // recebe entradaddp
    float correnteCircuito; // recebe entradacorrente
    float resistenciaCircuito; 

    float ddpResistor;
    float correnteResistor;
    float resistenciaResistor;

};
struct Capacitor
{
    float cargaCircuito;
    float moduloddp; // recebe entradaddp
    float capacitanciaCapacitor;

};


class circuito
{
    Resistor ResistenciaCircuito1;
    Resistor ResistenciaCircuito2;
    Capacitor CapacitanciaCircuito;

    public:
    void setCircuito(float,float);
    void setResistor(float, float, float);
    float getResistenciaCircuito();
    float getResistenciaSerie(float,int);
    float getResistenciaParalelo(float,int);
    float getTensao(int);
    float getCorrente(int);
    float getPotencia();
};


int main() // Programa Principal - Simulador
{
    setlocale(LC_ALL, "Portuguese");
    system("CLS");

    // Passo 1 - Criar circuito simulado

    circuito SimuladorCircuitoEletrico;  // Criando circuito simulado

    cout << "---------------SIMULADOR DE CIRCUITO ELÉTRICO---------------" << endl
         << "Você criou um circuito fechado com dois resistores iguais e um capacitor!" << endl;

    // Passo 2 - Receber os valores de tensão e corrente do circuito

    float entradaddp;   
    float entradacorrente;

    cout << "Informe o valor da tensão do circuito: ";
    cin >> entradaddp;  // Usuário informa ddp
    cout << "Informe o valor da corrente do circuito: ";
    cin >> entradacorrente; // Usuário informa corrente

    // Passo 3 - armazenar as configurações do circuito

    SimuladorCircuitoEletrico.setCircuito(entradaddp,entradacorrente); 

    // Passo 4 - Achar a Resistência do circuito = Resistencia Equivalente

    float resistenciaTotal = SimuladorCircuitoEletrico.getResistenciaCircuito();
    cout << "A resistência total do circuito é: " << fixed << setprecision(2) << resistenciaTotal << " Ohms" << endl;

    // Passo 5 - Saber se os resistores estão em série ou paralelo

    int tipocircuito;

    cout << "Agora é com você!" << endl
         << "Os resistores do seu circuito estão em série [1] ou em paralelo [2]? ";
    cin >> tipocircuito;

    // Passo 6 - Calcular o valor da resistência de cada resistor

    float resistor; // Armazena a resistência de 1 resistor

    switch (tipocircuito)
    {
    case 1:      // Circuito em série
        resistor = SimuladorCircuitoEletrico.getResistenciaSerie(resistenciaTotal,2);
        cout << "Cada resistor possui " << fixed << setprecision(2) << resistor << "Ohms" << endl;
        break;

    case 2:     // Circuito em paralelo
        resistor = SimuladorCircuitoEletrico.getResistenciaParalelo(resistenciaTotal,2);
        cout << "Cada resistor possui " << fixed << setprecision(2) << resistor << "Ohms" << endl;
        break;
    
    default:
        cout << "Você digitou uma opção inválida, vamos ter que recomeçar :(";
        break;
    }
    
    // Passo 7 - Calcular a tensão que passa por 1 resistor

    float tensaoPorResistor = SimuladorCircuitoEletrico.getTensao(tipocircuito);
    cout << "Por cada um dos resistores está passando uma tensão de " << fixed << setprecision(2) << tensaoPorResistor << "volts" << endl;

    // Passo 8 - Calcular a corrente que passa por 1 resistor

    float correntePorResistor = SimuladorCircuitoEletrico.getCorrente(tipocircuito);
    cout << "Por cada um dos resistores está passando uma corrente de " << fixed << setprecision(2) << correntePorResistor << "amperes" << endl;

    // Passo 9 - Armazenar todos os valores do resistor calculados 

    SimuladorCircuitoEletrico.setResistor(resistor,tensaoPorResistor,correntePorResistor);

    // Passo 10 - Calcular a potência do resistor



    return 0;
}

void circuito :: setCircuito(float numddp, float numcorrente)
{
    ResistenciaCircuito1.ddpCircuito = numddp;
    ResistenciaCircuito1.correnteCircuito = numcorrente;

    ResistenciaCircuito2.ddpCircuito = numddp;
    ResistenciaCircuito2.correnteCircuito = numcorrente;

}

void circuito :: setResistor(float numresistor,float numtensaor, float numcorrenter)
{
    numresistor = ResistenciaCircuito1.resistenciaResistor;
    numtensaor = ResistenciaCircuito1.ddpResistor;
    numcorrenter = ResistenciaCircuito1.correnteCircuito;

    numresistor = ResistenciaCircuito2.resistenciaResistor;
    numtensaor = ResistenciaCircuito2.ddpResistor;
    numcorrenter = ResistenciaCircuito2.correnteCircuito;
}

float circuito :: getResistenciaCircuito()
{
    // Tanto faz usar ResistenciaCircuito1 ou ResistenciaCircuito2 = possuem mesmos valores de circuito
    return ResistenciaCircuito1.ddpCircuito / ResistenciaCircuito1.correnteCircuito;
}

float circuito :: getResistenciaSerie(float numRequivalente, int quantResistores )
{
    return numRequivalente / quantResistores; 
}

float circuito :: getResistenciaParalelo(float numRequivalente, int quantResistores)
{
    return numRequivalente * quantResistores;
}

float circuito :: getTensao(int tipo)
{
    return tipo == 1 ? (ResistenciaCircuito1.ddpCircuito/2) : (ResistenciaCircuito1.ddpCircuito);
}

float circuito :: getCorrente(int tipo)
{
    return tipo == 1? (ResistenciaCircuito1.correnteCircuito) : (ResistenciaCircuito1.correnteCircuito/2);
}


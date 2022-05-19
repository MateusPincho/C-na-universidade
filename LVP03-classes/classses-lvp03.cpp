/* Discente: Mateus Pincho de Oliveira
Matr�cula: 121110103
Per�odo: 21.2
Curso: Engenharia El�trica
Disciplina: T�cnicas de Programa��o
Turma: 02
Professor: Marcus Salerno
Unidade 02: LVP-03 */

// Simulador de circuito el�trico 

#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;

struct Resistor // tipo resistor 
{
    float ddp;
    float corrente;

    void insereresitor(float volts, float amper ) // fun��o para inserir os valores de struct Resistor
    {
        ddp = volts;
        corrente = amper; 
    }   
};
struct Capacitor
{
    float carga;
    float moduloddp;
    float capacitancia;

    void inserecapacitor (int columbs, int modvolts, int farad)
    {
        carga = columbs;
        moduloddp = modvolts;
        capacitancia = farad;
    }
};


class circuito
{
    Resistor ResistenciaCircuito;
    Capacitor CapacitanciaCircuito;

    public:
    void SetCircuito(float,float);
    float GetResistencia();
    float GetPotencia();
    float GetCondutancia();

};

int main() // Programa Principal - Simulador
{
    setlocale(LC_ALL, "Portuguese");
    system("CLS");

    float entradaddp;   
    float entradacorrente;


    circuito SimuladorCircuitoEletrico;  // Criando circuito simulado

    cout << "---------------SIMULADOR DE CIRCUITO EL�TRICO---------------" << endl;
    cout << "Informe o valor da tens�o do circuito: ";
    cin >> entradaddp;  // Usu�rio informa ddp



    cout << "Informe o valor da corrente do circuito: ";
    cin >> entradacorrente; // Usu�rio informa corrente

    SimuladorCircuitoEletrico.SetCircuito(entradaddp,entradacorrente); // Inserindo configura��es do circuito

    float resistenciaSimulador = SimuladorCircuitoEletrico.GetResistencia(); // C�lculo da Resist�ncia 

    cout << "A resist�ncia do seu circuito simulado � " << fixed << setprecision(2) << resistenciaSimulador << " Ohms" << endl;


    return 0;
}

void circuito :: SetCircuito(float num1, float num2)
{
    ResistenciaCircuito.insereresitor(num1, num2);
}

float circuito ::GetResistencia()
{
    return ResistenciaCircuito.ddp / ResistenciaCircuito.corrente;
}

float circuito :: GetPotencia()
{
    float resistencia = ResistenciaCircuito.ddp / ResistenciaCircuito.corrente;
    return resistencia * pow(ResistenciaCircuito.corrente,2);
}

float circuito :: GetCondutancia()
{
    float resistencia = ResistenciaCircuito.ddp / ResistenciaCircuito.corrente;
    return 1 / resistencia;
}

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
    float ddp;
    float corrente;

    void insereresitor(float volts, float amper ) // função para inserir os valores de struct Resistor
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

    cout << "---------------SIMULADOR DE CIRCUITO ELÉTRICO---------------" << endl;
    cout << "Informe o valor da tensão do circuito: ";
    cin >> entradaddp;  // Usuário informa ddp



    cout << "Informe o valor da corrente do circuito: ";
    cin >> entradacorrente; // Usuário informa corrente

    SimuladorCircuitoEletrico.SetCircuito(entradaddp,entradacorrente); // Inserindo configurações do circuito

    float resistenciaSimulador = SimuladorCircuitoEletrico.GetResistencia(); // Cálculo da Resistência 

    cout << "A resistência do seu circuito simulado é " << fixed << setprecision(2) << resistenciaSimulador << " Ohms" << endl;


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

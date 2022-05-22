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
    float resistencia;
    float potencia;
    float condutancia;

};
struct Capacitor // tipo capacitor
{
    float carga;
    float ddpCapacitor; 
    float capacitancia;

};

class circuito
{
    Resistor ResistorCircuito1;
    Resistor ResistorCircuito2;
    Capacitor CapacitorCircuito;

    public:
    void setCircuito(float,float,float,float,float,float);
    float getResistencia1();
    float getResistencia2();
    float getPotencia1();
    float getPotencia2();
    float getCondutancia1();
    float getCondutancia2();
    float getResistoresSerie();
    float getResistoresParalelo();
    float getCapacitancia();
    float getEnergiaPot();
    
};


int main() // Programa Principal - Simulador
{
    setlocale(LC_ALL, "Portuguese");
    system("CLS");

    // Passo 1 - Criar circuito simulado

    circuito SimuladorCircuitoEletrico;  

    cout << "---------------SIMULADOR DE CIRCUITO EL�TRICO---------------" << endl
         << "Voc� criou um circuito fechado com dois resistores e um capacitor!" << endl;

    // Passo 2.1 - Receber os valores de tens�o e corrente dos resistores 1 e 2

    float entradaddp1;   
    float entradacorrente1;
    float entradaddp2;   
    float entradacorrente2;

    cout << "Para o Resistor (1): " << endl
         << "Informe o valor da ddp que passa por este resistor : ";
    cin >> entradaddp1; 

    cout << "Informe o valor da corrente que passa por este resistor : ";
    cin >> entradacorrente1; 

    cout << "Para o Resistor (2): " << endl
         << "Informe o valor da ddp que passa por este resistor : ";
    cin >> entradaddp2; 

    cout << "Informe o valor da corrente que passa por este resistor : ";
    cin >> entradacorrente2; 

    //Passo 2.2 - Receber os valores de tens�o e carga do capacitor

    float entradaddpC;
    float entradacarga;

    cout << "Para o Capacitor : " << endl
         << "Informe o valor da ddp que passa pelo capacitor : ";
    cin >> entradaddpC; 

    cout << "Informe a quantidade de carga que este capacitor armazena : ";
    cin >> entradacarga;


    // Passo 3 - armazenar as configura��es do circuito

    SimuladorCircuitoEletrico.setCircuito(entradaddp1,entradacorrente1,entradaddp2,entradacorrente2,entradaddpC,entradacarga);
   
    // Passo 4 - Iniciar an�lise do circuito 

    cout << "Voc� acabou de configurar o seu Circuito Simulado!" << endl<< "Vamos agora fazer uma an�lise minuciosa sobre suas caracteristicas" << endl;
    system("pause");

    // Passo 5 - Achar as informa��es dos resistores

    //Para o primeiro resistor (1)

    cout << "A tens�o que passa pelo resistor (1) �" 
         << fixed << setprecision(2) << entradaddp1 << " Volts" << endl;
    cout << "A corrente que passa pelo resistor (1) �" 
         << fixed << setprecision(2) << entradacorrente1 << " Amper" << endl;
    cout << "A resist�ncia do resistor (1) � " 
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getResistencia1() << " Ohms" << endl;
    cout << "A Pot�ncia do resistor (1) � " 
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getPotencia1() << " Watts" << endl;
    cout << "A condut�ncia do resistor (1) � "
         << fixed << setprecision(3) << SimuladorCircuitoEletrico.getCondutancia1() << " Siemens" << endl << endl;
    system("pause");
    // Para o segundo resistor (2)

    cout << "A tens�o que passa pelo resistor (2) � " 
         << fixed << setprecision(2) << entradaddp2 << " Volts" << endl;
    cout << "A corrente que passa pelo resistor (2) � " 
         << fixed << setprecision(2) << entradacorrente2 << " Amper" << endl;
    cout << "A resist�ncia do resistor (2) � " 
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getResistencia2() << " Ohms" << endl;
    cout << "A Pot�ncia do resistor (2) � " 
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getPotencia2() << " Watts" << endl;
    cout << "A condut�ncia do resistor (2) � "
         << fixed << setprecision(3) << SimuladorCircuitoEletrico.getCondutancia2() << " Siemens" << endl << endl;
    system("pause");

    // Passo 6 - Para os resistores associados
    
    // Em S�rie

    cout << "A resist�ncia equivalente do circuito caso os resistores estivem ligados em S�rie � "
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getResistoresSerie() << " Ohms" << endl;
    
    // Em Paralelo
    
    cout << "A resist�ncia equivalente do circuito caso os resistores estivem ligados em Paralelo � "
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getResistoresParalelo() << " Ohms" << endl << endl;

    system("pause");
    
    // Passo 7 - Achar as informa��es do capacitor

    cout << "A tens�o que passa pelo capacitor � " 
         << fixed << setprecision(2) << entradaddpC << " Volts" << endl;
    cout << "A carga armazenada pelo capacitor � " 
         << fixed << setprecision(2) << entradacarga << " Columbs" << endl;
    cout << "A capacit�ncia do capacitor � " 
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getCapacitancia() << " Farad" << endl;
    cout << "A Energia Potencial Eletrost�tica do capacitor � " 
         << fixed << setprecision(2) << SimuladorCircuitoEletrico.getEnergiaPot() << " Joules" << endl;

    cout << "---------------FIM DA AN�LISE---------------" << endl;

    return 0;
}

void circuito :: setCircuito(float ddpR1, float correnteR1, float ddpR2, float correnteR2, float ddpC, float carga )
{
    ResistorCircuito1.ddp = ddpR1;
    ResistorCircuito2.ddp= ddpR2;
    ResistorCircuito1.corrente =correnteR1;
    ResistorCircuito2.corrente = correnteR2;

    CapacitorCircuito.ddpCapacitor = ddpC;
    CapacitorCircuito.carga =  carga;
}

// M�todos para o resistor (1)

float circuito :: getResistencia1()
{
    ResistorCircuito1.resistencia = ResistorCircuito1.ddp / ResistorCircuito1.corrente;
    return  ResistorCircuito1.resistencia;
}

float circuito :: getPotencia1()
{
   ResistorCircuito1.potencia = ResistorCircuito1.resistencia* pow (ResistorCircuito1.corrente,2);
   return ResistorCircuito1.potencia;
}

float circuito :: getCondutancia1()
{
    ResistorCircuito1.condutancia = 1 / ResistorCircuito1.resistencia;
    return ResistorCircuito1.condutancia;
}

// M�todos para o resistor (2)

float circuito :: getResistencia2()
{
    ResistorCircuito2.resistencia = ResistorCircuito2.ddp / ResistorCircuito2.corrente;
    return  ResistorCircuito2.resistencia;
}

float circuito :: getPotencia2()
{
   ResistorCircuito2.potencia = ResistorCircuito2.resistencia * pow (ResistorCircuito2.corrente,2);
   return ResistorCircuito2.potencia;
}

float circuito :: getCondutancia2()
{
    ResistorCircuito2.condutancia = 1 / ResistorCircuito2.resistencia;
    return ResistorCircuito2.condutancia;
}

// M�todos para encontrar a resist�ncia equivalente

float circuito :: getResistoresSerie()
{
    return ResistorCircuito1.resistencia + ResistorCircuito2.resistencia;
}

float circuito :: getResistoresParalelo()
{
    return (ResistorCircuito1.resistencia * ResistorCircuito2.resistencia) / (ResistorCircuito1.resistencia + ResistorCircuito2.resistencia);
}

// M�todos para o capacitor

float circuito :: getCapacitancia ()
{
    CapacitorCircuito.capacitancia = CapacitorCircuito.carga / CapacitorCircuito.ddpCapacitor;
    return CapacitorCircuito.capacitancia;

}

float circuito :: getEnergiaPot() 
{
    return pow(CapacitorCircuito.carga,2) / (2*CapacitorCircuito.capacitancia);
}

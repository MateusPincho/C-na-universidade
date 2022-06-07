/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 04: LVP-06
IDE: VS-Code */

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
// Importar arquivos de implementação
#include "Estacionamento.cpp"

int main(){
    system("CLS");
    setlocale(LC_ALL,"Portuguese");

    // Passo 1 - Instaciar um objeto
    Estacionamento estacionamentos;

    // Passo 2 - Receber as entradas do usuário
    string entradaNome;
    string entradaPlaca;
    int entradaHoraInicio;
    int entradaMinutoInicio;
    int entradaSegundoInicio;
    int entradaHoraSaida;
    int entradaMinutoSaida;
    int entradaSegundoSaida;

    cout << "Informe seu nome: " << endl;
    cin >> entradaNome;
    cout << "Informe a placa de seu veículo: " << endl;
    cin >> entradaPlaca;
    cout << "Qual o horario em que estacionou seu veiculo? " << endl;
    cin >> entradaHoraInicio, entradaMinutoInicio, entradaSegundoInicio;
    cout << "Qual o horario em que está saindo?" << endl;
    cin >> entradaHoraSaida, entradaMinutoSaida, entradaSegundoSaida;

    
    // Passo3 - Realizar os metodos sets
    estacionamentos.setPlaca(entradaPlaca);
    estacionamentos.setDono(entradaNome);
    estacionamentos.setHoraEntrada(entradaHoraInicio, entradaMinutoInicio, entradaSegundoInicio);
    estacionamentos.setHoraSaida(entradaHoraSaida, entradaMinutoSaida, entradaSegundoSaida);

    // Passo 4 - Calcular o tempo que o carro passou estacionado
    int tempoGasto = estacionamentos.getTempoPercorrido();

    // Passo 5 - Calcular o valor a ser pago 
    float custoEstacionamento = estacionamentos.getValorPago(tempoGasto);

    // Passo 6 - Realizar saída para o usuário
    cout << "O Sistema encontrou seu carro!" << endl;
    cout << "Placa: " << estacionamentos.getPlaca() << endl;
    cout << "Nome do proprietario: " << estacionamentos.getDono() << endl;
    cout << "O Sistema está calculando o valor a ser pago pelo tempo percorrido em nosso estacionamento..." << endl;
    system("pause");
    cout << "Horas ocupadas: " << tempoGasto << "h" << endl;
    cout << "Valor a ser pago: " << custoEstacionamento << " Reais" << endl;

    return 0;
}

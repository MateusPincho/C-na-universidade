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

#include "Estacionamento.h"

// Construtor sem parametro que inicia o objeto com dados vazios
Estacionamento::Estacionamento()
{
    placaCarro = "";
    donoCarro = "";
    HoraEntrada.hora = 0;
    HoraEntrada.minutos = 0;
    HoraEntrada.segundos = 0;
    HoraSaida.hora = 0;
    HoraSaida.minutos = 0;
    HoraSaida.segundos = 0;
    precoHora = 1.5;
}

// Função set para a placa do carro

void Estacionamento::setPlaca(string placa)
{
    this -> placaCarro = placa;
}
// Função set para o proprietário
void Estacionamento::setDono(string nome)
{
    this -> donoCarro = nome;
}
// Função set para a hora de entrada
void Estacionamento::setHoraEntrada(int hora, int minuto, int segundo)
{
    this -> HoraEntrada.hora = hora;
    this -> HoraEntrada.minutos = minuto;
    this -> HoraEntrada.segundos = segundo;
}
// Função set para a hora de saída
void Estacionamento::setHoraSaida(int hora, int minuto, int segundo)
{
    this -> HoraSaida.hora = hora;
    this -> HoraSaida.minutos = minuto;
    this -> HoraSaida.segundos = segundo;
}
// Função get para a placa do carro 
string Estacionamento::getPlaca()
{
    return placaCarro;
}
// Função get para proprietario
string Estacionamento::getDono()
{
    return donoCarro;
}
// Função get para calcular o tempo total percorrido
float Estacionamento::getTempoPercorrido()
{
    int HoraEntradaEmSegundos = (HoraEntrada.hora * 3600 ) + (HoraEntrada.minutos * 60) + (HoraEntrada.segundos);
    int HoraSaidaEmSegundos = (HoraSaida.hora * 3600 ) + (HoraSaida.minutos * 60) + (HoraSaida.segundos);
    float TempoPercorrido = HoraSaidaEmSegundos - HoraEntradaEmSegundos;
    float TempoPercorridoEmHora = ceil(TempoPercorrido / 3600); 
    return TempoPercorridoEmHora;

}
// Função get para o valor total gasto
float Estacionamento::getValorPago(int tempoPercorrido)
{
    float custo = precoHora * tempoPercorrido;
    return custo;
}
// Destrutor com mensagem de encerramento do programa
Estacionamento::~Estacionamento()
{
    cout << "Voce pagou o valor do estacionamento! Obrigado e volte sempre" ;
}
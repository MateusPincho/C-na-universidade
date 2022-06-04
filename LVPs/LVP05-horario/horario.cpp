/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 03: LVP-05
IDE: VS-Code */

#include <iostream>
#include <locale>
#include <ctime>

using namespace std;
#include "horario.h"

// Construtor sem parametros que usa a Lib ctime para usar a hora local
Horario::Horario()
{
    time_t t;
    struct tm * infoTempo;

    time(&t);
    infoTempo = localtime(&t);

    hora = infoTempo ->tm_hour;
    minuto = infoTempo ->tm_min;
    segundo = infoTempo ->tm_sec;
}

// Construtor com paramêtros que verifica se os números informados são válidos
Horario::Horario(int hor, int min, int seg)
{
    hora = ( hor >= 0 && hor < 24) ? hor : 00;
    minuto = (min >= 0 && min < 60) ? min : 00;
    segundo = (seg >= 0 && seg < 60) ? seg : 00;
}

/* Função que converte o horário em uma string
   Concatena as strings com os dois pontos e retorna o horário formatado com zero a esquerda caso numero menor que 10 */
string Horario::getHorarioStr()
{
    string hora_str;
    if (hora < 10)
        hora_str = "0" + to_string(hora) + ":";
    else
        hora_str = to_string(hora) + ":";


    string min_str;
    if (minuto < 10)
        min_str = "0" + to_string(minuto) + ":";
    else
        min_str = to_string(minuto) + ":";

    string sec_str;
    if (segundo < 10)
        sec_str = "0" + to_string(segundo);
    else
        sec_str = to_string(segundo);

    string horario_str = hora_str + min_str + sec_str;
    return horario_str; 
}

// Função para avançar a hora em 1 segundo e realizar as correções caso necessário
void Horario::avancaHora(int quantidadeSegundos)
{
    segundo += quantidadeSegundos;
    if (segundo > 59)
    {
        segundo = segundo % 60;
        minuto +=  1 ;
    }
    if (minuto > 59)
    {
        minuto = minuto % 60;
        hora += 1;
    }
}
// Função set para o atributo hora
void Horario :: setHora(int hor)
{
    hora = ( hor >= 0 && hor < 24) ? hor : 00;
}

// Função get para retornar o atributo hora
int Horario :: getHora()
{
    return hora;
}

// Função set para o atributo minuto
void Horario :: setMinuto(int min)
{
    minuto = (min >= 0 && min < 60) ? min : 00;
}
// Função get para retornar o atributo minuto
int Horario :: getMinuto()
{
    return minuto;
}
// Função set para o atributo hora
void Horario :: setSegundo(int seg)
{
     segundo = (seg >= 0 && seg < 60) ? seg : 00;
}
// Função get para retornar o atributo segundo
int Horario :: getSegundo()
{
    return segundo;
}

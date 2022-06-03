/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 03: LVP-04
IDE: VS-Code */

#include <iostream>
#include <locale>
#include <ctime>

using namespace std;
#include "horario.h"

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

Horario::Horario(int hor, int min, int seg)
{
    hora = ( hor >= 0 && hor < 24) ? hor : 00;
    minuto = (min >= 0 && min < 60) ? min : 00;
    segundo = (seg >= 0 && seg < 60) ? seg : 00;
     

/*
    this -> hora = hora;
    this -> minuto = minuto;
    this -> segundo = segundo;
*/
}

void Horario::getHorarioStr()
{
    cout << "A hora do relogio eh " << to_string(hora) << ":" << to_string(minuto) << ":" << to_string(segundo) << endl;
}

void Horario::avancaHora()
{
    segundo += 1;
    if (segundo > 59)
    {
        segundo = 00;
        minuto +=  1;
    }
    if (minuto > 59)
    {
        minuto = 00;
        hora += 1;
    }
}



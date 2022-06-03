/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 03: LVP-04
IDE: VS-Code */


#ifndef Horario_H
#define Horario_H

class Horario
{

    int hora;
    int minuto;
    int segundo;

public:

    Horario();
    Horario(int,int,int);
    void getHorarioStr();
    void avancaHora();
    



};

#endif
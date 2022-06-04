/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 03: LVP-05
IDE: VS-Code */

#ifndef Horario_H
#define Horario_H

class Horario
{
    int hora;
    int minuto;
    int segundo;

public:
    Horario();                                      // Construtor sem parâmetros que utiliza a hora local
    Horario(int,int,int);                           // Construtor com parâmetros
    string getHorarioStr();                         // Função que converte o horário em string
    void avancaHora(int);                              // Função para avançar o horário em 1 segundo com as devidas correções
    void setHora(int);                              // Função set para o atributo hora
    int getHora();                                  // Função get para retornar o atributo hora
    void setMinuto(int);                            // Função set para o atributo minuto
    int getMinuto();                                // Função get para retornar o atributo minuto
    void setSegundo(int);                           // Função set para o atributo hora
    int getSegundo();                               // Função get para retornar o atributo segundo
};
#endif
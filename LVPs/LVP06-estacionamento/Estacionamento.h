/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 04: LVP-06
IDE: VS-Code */

#ifndef Estacionamento_H
#define Estacionamento_H

struct Horario             // Armazena o horário de entrada e saida
{
    int hora;
    int minutos;
    int segundos;
};




class Estacionamento
{
    string placaCarro;
    string donoCarro;
    float precoHora;
    Horario HoraEntrada;
    Horario HoraSaida;    

public:
    Estacionamento();
    //Funções set
    void setPlaca(string);
    void setDono(string);
    void setHoraEntrada(int,int,int);
    void setHoraSaida(int,int,int);
    //Funções get
    string getPlaca();
    string getDono();
    float getTempoPercorrido();
    float getValorPago(int);
    ~Estacionamento();
};


#endif
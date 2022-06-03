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
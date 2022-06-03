#include <iostream>
#include <ctime>

using namespace std;

class Horario {
    int hora;
    int minuto; 
    int segundo;

public:

    Horario();
    int getHora();
    int getMin();
    int getSec();
    void getHorarioStr();
        

};


int main(){

    Horario relogio;

    relogio.getHorarioStr();

    return 0;
}

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

void Horario::getHorarioStr()
{
    cout << to_string(hora) << " : " << to_string(minuto) << " : " << to_string(segundo);
}

int Horario :: getHora()
{
    return hora;

}

int Horario :: getMin()
{
    
    return minuto;

}

int Horario :: getSec()
{ 
    return segundo;

}
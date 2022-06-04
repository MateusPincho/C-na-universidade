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
using namespace std;

// Importar arquivo de implementação
#include "horario.cpp"

int main(){
    system("CLS");
    setlocale(LC_ALL, "Portuguese");

    // Passo 1 - Criar objeto usando construtor com parametros
    cout << "Horas sendo criadas com construtor com parametros: " << endl;
    Horario relogio1 (12,59,12);
    cout << relogio1.getHorarioStr() << endl;
    relogio1.avancaHora(93);
    cout << relogio1.getHorarioStr() << endl << endl;

    // Passo 2 - Criar objeto usando construtor sem parametros
    cout << "Horas sendo criadas usando a hora local: " << endl;
    Horario relogio2;
    cout << relogio2.getHorarioStr() << endl;
    relogio2.avancaHora(23);
    cout << relogio2.getHorarioStr() << endl << endl;

    // Passo 3 - Criar objeto usando método set
    cout << "Horas sendo criadas usando metodo set: " << endl;
    Horario relogio3;
    relogio3.setHora(9);
    relogio3.setMinuto(59);
    relogio3.setSegundo(59);
    cout << relogio3.getHorarioStr() << endl;
    relogio3.avancaHora(1);
    cout << relogio3.getHorarioStr() << endl;


    return 0;
}
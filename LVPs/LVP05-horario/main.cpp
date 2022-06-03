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

using namespace std;
#include "horario.cpp"

int main(){
    system("CLS");
    setlocale(LC_ALL, "Portuguese");

    Horario relogio (12,59,59);

    relogio.getHorarioStr();
    relogio.avancaHora();
    relogio.getHorarioStr();

    return 0;
}
//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-09 - RESTAURANTE
//IDE: VSCODE   */

#include "Mesa.h"
// Construtor sem parametros
Mesa::Mesa(){}

// Metodos set e get para o atributo cadeira
void Mesa::setCadeiras(int cadeiras)
{
    this -> cadeiras = cadeiras;
}

int Mesa::getCadeiras()
{
    return cadeiras;
}

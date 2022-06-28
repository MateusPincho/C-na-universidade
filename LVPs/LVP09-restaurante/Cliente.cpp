//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-09 - RESTAURANTE  
//IDE: VSCODE   */

#include "Cliente.h"
// Construtor com parâmetros
Cliente::Cliente(string nome, int codigo, int acompanhantes)
{
    this -> nome = nome;
    this -> codigo = codigo;
    this -> acompanhantes = acompanhantes;
}

// Construtor sem parâmentros
Cliente::Cliente()
{
    // Vazio
}
// Metodo set para nome 
void Cliente::setNome(string nome)
{
    this -> nome = nome;
}

// Metodo set para codigo
void Cliente::setCodigo(int codigo)
{
    this -> codigo = codigo;
}

// Metodo set para acompanhantes
void Cliente::setAcompanhates(int acompanhantes)
{
    this -> acompanhantes = acompanhantes;
}

string Cliente::getNome()
{
    return nome;
}
int Cliente::getCodigo()
{
    return codigo;
}
int Cliente::getAcompanhantes()
{
    return acompanhantes;
}
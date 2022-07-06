//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#include "Ficcao.h"

// construtor default
Ficcao::Ficcao()
{
    nome = "";
    nomeAutor = "";
    ISBM = 0;
    anoPublicao = 0;
    preco = 0;
    departamento = "";
    ambienteNarrativo = "";
}
// metodos set de atributo
void Ficcao::setDepartamento(string departamento)
{
    this -> departamento = departamento;
}

void Ficcao::setAmbienteNarrativo(string ambienteNarrativo)
{
    this -> ambienteNarrativo = ambienteNarrativo;
}

// metodos get de atributo
string Ficcao::getDepartamento() const
{
    return departamento;
}

string Ficcao::getAmbienteNarrativo() const
{
    return ambienteNarrativo;
}


//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
//IDE: CodeBlocks   */

#include "FiccaoArquivo.h"

// construtor da classe ficcao
Ficcao::Ficcao(string nome, string nomeAutor, double ISBM, int anoPublicacao, float preco, string departamento, string ambienteNarrativo)
{
    this -> nome = nome;
    this -> nomeAutor = nomeAutor;
    this -> ISBM = ISBM;
    this -> anoPublicacao = anoPublicacao;
    this -> preco = preco;
    this -> departamento = departamento;
    this -> ambienteNarrativo = ambienteNarrativo;
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

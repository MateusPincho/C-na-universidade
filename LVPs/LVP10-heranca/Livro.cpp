//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#include "Livro.h"

// construtor default
Livro::Livro()
{
    nome = "";
    nomeAutor = "";
    ISBM = 0;
    anoPublicao = 0;
    preco = 0;
}

// metodos set de atributo
void Livro::setNome(string nome)
{
    this -> nome = nome;
}

void Livro::setAome(string nomeAutor)
{
    this -> nomeAutor = nomeAutor;
}

void Livro::setISMB(long int ISBM)
{
    this -> ISBM = ISBM;
}

void Livro::setPublicacao(int anoPublicao)
{
    this -> anoPublicao = anoPublicao;
}

void Livro::setPreco(float preco)
{
    this -> preco = preco;
}

//metodos get de atributo
string Livro::getNome() const
{
    return nome;
}

string Livro::getAutor() const
{
    return nomeAutor;
}

long int Livro::getISBM() const
{
    return ISBM;
}

int Livro::getPublicacao() const
{
    return anoPublicao;
}

float Livro::getPreco() const
{
    return preco;
}

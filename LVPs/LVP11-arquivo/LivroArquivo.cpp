//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
//IDE: CodeBlocks   */

#include "LivroArquivo.h"

// construtor da classe livro
Livro::Livro(string nome, string nomeAutor, double ISBM, int anoPublicacao, float preco)
{
    this -> nome = nome;
    this -> nomeAutor = nomeAutor;
    this -> ISBM = ISBM;
    this -> anoPublicacao = anoPublicacao;
    this -> preco = preco;
}

// metodos set de atributo
void Livro::setNome(string nome)
{
    this -> nome = nome;
}

void Livro::setAutor(string nomeAutor)
{
    this -> nomeAutor = nomeAutor;
}

void Livro::setISBM(double ISBM)
{
    this -> ISBM = ISBM;
}

void Livro::setPublicacao(int anoPublicao)
{
    this -> anoPublicacao = anoPublicao;
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

double Livro::getISBM() const
{
    return ISBM;
}

int Livro::getPublicacao() const
{
    return anoPublicacao;
}

float Livro::getPreco() const
{
    return preco;
}


/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 04: LVP-06
IDE: CodeBlocks */

#include "ProdutoVector.h"

Produto::Produto(){}

Produto::Produto(string nome, int quantidade, float preco)
{
    this -> nome = nome;
    this -> quantidade = quantidade;
    this -> preco = preco;
}

// metodos set
void Produto::setNome(string nome)
{
    this -> nome = nome;
}

void Produto::setQuantidade(int quantidade)
{
    this -> quantidade = quantidade;
}

void Produto::setPreco(float preco)
{
    this -> preco = preco;
}

// metodos get
string Produto::getNome()
{
    return nome;
}

int Produto::getQuantidade()
{
    return quantidade;
}

float Produto::getPreco()
{
    return preco;
}

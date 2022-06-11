#include "Produto.h"

Produto::Produto(string nome, int quantidade)
{
    this -> nome = nome;
    this -> quantidade = quantidade;
}

void Produto::setNome(string nome)
{
    this -> nome = nome;
}

void Produto::setQuantidade(int quantidade)
{
    this -> quantidade = quantidade;
}

string Produto::getNome()
{
    return nome;
}

int Produto::getQuantidade()
{
    return quantidade;
}

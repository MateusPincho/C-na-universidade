#include "Produto.h"

Produto::Produto(string nome, int quantidade)       // construtor com os parametros
{
    this -> nome = nome;
    this -> quantidade = quantidade;
}
Produto::Produto()      // Construtor sem os parametros
{
    nome = "";
    quantidade = 0;
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

// metodos get

string Produto::getNome()
{
    return nome;
}

int Produto::getQuantidade()
{
    return quantidade;
}

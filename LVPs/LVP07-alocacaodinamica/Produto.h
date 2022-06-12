#ifndef PRODUTO_H
#define PRODUTO_H

class Produto
{
    string nome;
    int quantidade;
public:
    Produto(string, int);
    Produto();
    void setNome(string);
    void setQuantidade(int);
    string getNome();
    int getQuantidade();
};
#endif

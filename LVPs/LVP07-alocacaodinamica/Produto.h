#ifndef PRODUTO_H
#define PRODUTO_H

class Produto
{
    string nome;
    int quantidade;
public:
    Produto(string, int);               // construtor que recebe o nome e a quantidade
    Produto();                          // construtor que cria um objeto com atributos vazios

    //metodos set
    void setNome(string);
    void setQuantidade(int);

    // metodos get
    string getNome();
    int getQuantidade();
};
#endif

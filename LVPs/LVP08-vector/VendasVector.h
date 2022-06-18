#ifndef VENDASVECTOR_H
#define VENDASVECTOR_H

class Vendas
{
    vector <Produto> produtosEmEstoque;

public:
    Vendas();
    void adicionarProduto(Produto);
    void exibirEstoque();

};
#endif // VENDASVECTOR_H

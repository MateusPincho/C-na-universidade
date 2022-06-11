#ifndef VENDAS_H
#define VENDAS_H

class Vendas{
    Produto *produtos;      // criar lista dinâmica de produtos
    int quantidadeProdutos;     // quantidade atual de produtos, atualizada a cada nova inserção
public:
    Vendas(int);        // construtor que recebe a quantidade do estoque -> tamanho da lista
    void adicionarProduto(Produto);     // adicionar um novo produto ao estoque, passar o produto que desejamos adicionar
    void venderProduto(string, int);    // vender um produto, pesquisar pelo nome recebido e subtrair da quantidade desejada
    void pesquisarProduto(string);      // Pesquisar um produto dentro do estoque(lista) e exibi-lo com sua quantidade
    void exibirProduto();       // exibir todos os produtos do estoque (lista)
};

#endif // VENDAS_H

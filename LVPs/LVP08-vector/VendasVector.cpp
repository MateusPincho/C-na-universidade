#include "VendasVector.h"
#include "Pedido.h"

Vendas::Vendas(){}

void Vendas::adicionarProduto(Produto produto)
{
    produtosEmEstoque.push_back(produto);
}

void Vendas::exibirEstoque()
{
    for(int i = 0; i < produtosEmEstoque.size(); i++)                    // Percorrer toda a lista e exibir os produtos de cada posição
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
        cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
        cout << "Preço: " << produtosEmEstoque[i].getPreco() << endl;
     }
    cout << "===========================================" << endl;
}

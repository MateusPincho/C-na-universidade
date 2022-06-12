#include "Vendas.h"

Vendas::Vendas(int tamanhoLista)
{
    produtosEmEstoque = new Produto[tamanhoLista];
    posicao = 0;
}

bool Vendas::verificaNome(string nome)
{
    bool existencia;
    for (int i = 0; i < posicao; i++)
    {
        if(produtosEmEstoque[i].getNome() == nome)
        {
            existencia = true;
            break;
        }
        else
        {
            existencia = false;
        }
    }
    if (existencia)
        return true;
    else
        return false;
}

void Vendas::adicionarProduto(Produto produto)
{
    /*string nomeProduto = produto.getNome();
    int quantiProduto = produto.getQuantidade();

    if (verificaNome(nomeProduto) == false)     // caso seja verificado que não há produtos com esse nome, adicionar ele a lista
    {

    }
    else        // caso seja verificado que há produto com este mesmo nome, apenas alterar a quantidade, sem adicionar na lista
    {
        for (int i = 0; i < posicao; i++)
        {
            if (produtosEmEstoque[i].getNome() == nomeProduto)
            {
            int quantiAtual = produtosEmEstoque[i].getQuantidade();
            int novaQuantidade = quantiAtual + quantiProduto;
            produtosEmEstoque[i].setQuantidade(novaQuantidade);
            }
        }
    }*/
    produtosEmEstoque[posicao] = produto;
    posicao++;

}

void Vendas::exibirEstoque()
{
    for(int i = 0; i < posicao; i++)
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
        cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
    }
    cout << "===========================================" << endl;
}

void Vendas::venderProduto(string nomeProduto, int quantiProduto)
{
   if(verificaNome(nomeProduto) == false)                               // caso não haja este produto em estoque, avisar!
       cout << "O produto que voce deseja está em falta, sinto muito!" << endl;
   else                                                                 // caso haja, realizar a venda
   {
       for (int i = 0; i < posicao; i++)                                // percorrer por toda a lista e procurar o que possui o mesmo nome
       {
           if(produtosEmEstoque[i].getNome() == nomeProduto)
           {
               int quantAtual = produtosEmEstoque[i].getQuantidade();   // Recebe a quantidade atual do produto
               if (quantiProduto > quantAtual)                          // Verifica se possui a quantidade necessaria para a venda
               {
                   cout << "Não possuimos a quantidade que deseja!" << endl;
                   break;
               }
               else                                                        // Caso possua: realizar venda
               {
                   int novaQuant = quantAtual - quantiProduto;              // Subtrai da quantidade que irá ser vendida
                   produtosEmEstoque[i].setQuantidade(novaQuant);           // Armazena a nova quantidade
                   cout << "Sua venda foi realizada com sucesso!" << endl;
                   break;
               }

           }
       }
   }
}

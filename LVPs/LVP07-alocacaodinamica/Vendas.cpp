#include "Vendas.h"

Vendas::Vendas(int tamanhoLista)                        // construtor que cria a aloca��o dinamica
{
    produtosEmEstoque = new Produto[tamanhoLista];
    posicao = 0;                                        // Indica quantos produtos j� est�o dentro da lista
}

bool Vendas::verificaNome(string nome)                  // verifica se h� um produto com aquele nome -> realizar valida��es nas outras fun��es
{
    bool existencia;
    for (int i = 0; i < posicao; i++)
    {
        if(produtosEmEstoque[i].getNome() == nome)      // Percorrer toda a lista em busca do nome
        {
            existencia = true;                          // Caso encontre, retorna True
            break;
        }
        else
        {
            existencia = false;                         // Caso n�o encontre, retorna False
        }
    }
    if (existencia)                                     // Realizar o retorno da fun��o verificaNome()
        return true;
    else
        return false;
}

void Vendas::adicionarProduto(Produto produto)          // Fun��o para adicionar um novo produto
{
    produtosEmEstoque[posicao] = produto;               // Colocar o novo produto na posi��o indicada
    posicao++;                                          // Somar um ao valor da posi��o para ir para a proxima posi��o vazia

}

void Vendas::exibirEstoque()                            // Fun��o para exibir todos os produtos na lista
{
    for(int i = 0; i < posicao; i++)                    // Percorrer toda a lista e exibir os produtos de cada posi��o
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
        cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
    }
    cout << "===========================================" << endl;
}

void Vendas::venderProduto(string nomeProduto, int quantiProduto)        // Fun��o para vender um produto
{
   if(verificaNome(nomeProduto) == false)                               // caso n�o haja este produto em estoque, avisar!
       cout << "O produto que voce deseja est� em falta, sinto muito!" << endl;
   else                                                                 // caso haja, realizar a venda
   {
       for (int i = 0; i < posicao; i++)                                // percorrer por toda a lista e procurar o que possui o mesmo nome
       {
           if(produtosEmEstoque[i].getNome() == nomeProduto)
           {
               int quantAtual = produtosEmEstoque[i].getQuantidade();   // Recebe a quantidade atual do produto
               if (quantiProduto > quantAtual)                          // Verifica se possui a quantidade necessaria para a venda
               {
                   cout << "N�o possuimos a quantidade que deseja!" << endl;
                   break;
               }
               else                                                        // Caso possua: realizar venda
               {
                   int novaQuant = quantAtual - quantiProduto;              // Subtrai da quantidade que ir� ser vendida
                   produtosEmEstoque[i].setQuantidade(novaQuant);           // Armazena a nova quantidade
                   cout << "Sua venda foi realizada com sucesso!" << endl;
                   break;
               }

           }
       }
   }
}

void Vendas::pesquisarProduto(string nomePesquisa)                       // Fun��o para pesquisar um produto na lista
{
   if(verificaNome(nomePesquisa) == false)                               // caso n�o haja este produto na lista, avisar!
       cout << "O produto que voce deseja n�o foi encontrado, verifique se digitou o nome corretamente!" << endl;
   else                                                                 // caso haja, realizar a pesquisa
   {
       for (int i = 0; i < posicao; i++)                                // percorrer por toda a lista e procurar o que possui o mesmo nome
       {
           if(produtosEmEstoque[i].getNome() == nomePesquisa)            // caso o nome seja igual, exibir
           {
               cout << "===========================================" << endl;
               cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
               cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;

           }
       }
       cout << "===========================================" << endl;
   }
}

Vendas::~Vendas()
{
    delete []produtosEmEstoque;
    cout << "Encerrando sess�o, obrigado!" << endl;
}

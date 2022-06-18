#include "Vendas.h"

Vendas::Vendas(int tamanhoLista)                        // construtor que cria a alocação dinamica
{
    produtosEmEstoque = new Produto[tamanhoLista];
    posicao = 0;                                        // Indica quantos produtos já estão dentro da lista
}

bool Vendas::verificaNome(string nome)                  // verifica se há um produto com aquele nome -> realizar validações nas outras funções
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
            existencia = false;                         // Caso não encontre, retorna False
        }
    }
    if (existencia)                                     // Realizar o retorno da função verificaNome()
        return true;
    else
        return false;
}

void Vendas::adicionarProduto(Produto produto)          // Função para adicionar um novo produto
{
    produtosEmEstoque[posicao] = produto;               // Colocar o novo produto na posição indicada
    posicao++;                                          // Somar um ao valor da posição para ir para a proxima posição vazia

}

void Vendas::exibirEstoque()                            // Função para exibir todos os produtos na lista
{
    for(int i = 0; i < posicao; i++)                    // Percorrer toda a lista e exibir os produtos de cada posição
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
        cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
    }
    cout << "===========================================" << endl;
}

void Vendas::venderProduto(string nomeProduto, int quantiProduto)        // Função para vender um produto
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

void Vendas::pesquisarProduto(string nomePesquisa)                       // Função para pesquisar um produto na lista
{
   if(verificaNome(nomePesquisa) == false)                               // caso não haja este produto na lista, avisar!
       cout << "O produto que voce deseja não foi encontrado, verifique se digitou o nome corretamente!" << endl;
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
    cout << "Encerrando sessão, obrigado!" << endl;
}

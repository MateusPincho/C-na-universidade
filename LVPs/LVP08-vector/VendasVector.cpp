//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 06: LVP-08
//IDE: CodeBlocks */

#include "VendasVector.h"
#include "Pedido.h"

Vendas::Vendas(){}

void Vendas::adicionarProduto(Produto produto)
{
    produtosEmEstoque.push_back(produto);
}

void Vendas::exibirEstoque()
{
    for(int i = 0; i < produtosEmEstoque.size(); i++)                    // Percorrer toda a lista e exibir os produtos de cada posi��o
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
        cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
        cout << "Pre�o: " << produtosEmEstoque[i].getPreco() << " Reais" << endl;
     }
    cout << "===========================================" << endl;
}


bool Vendas::verificarExistencia(string nome)                  // verifica se h� um produto com aquele nome -> realizar valida��es nas outras fun��es
{
    bool existencia;
    for (int i = 0; i < produtosEmEstoque.size(); i++)
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

void Vendas::pesquisarProduto(string nomeProduto)
{
    if(verificarExistencia(nomeProduto) == false)                               // caso n�o haja este produto na lista, avisar!
       cout << "O produto que voce deseja n�o foi encontrado, verifique se digitou o nome corretamente!" << endl;
    else                                                                 // caso haja, realizar a pesquisa
    {
        for (int i = 0; i < produtosEmEstoque.size(); i++)                                // percorrer por toda a lista e procurar o que possui o mesmo nome
        {
            if(produtosEmEstoque[i].getNome() == nomeProduto)            // caso o nome seja igual, exibir
            {
                cout << "===========================================" << endl;
                cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
                cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
                cout << "Pre�o: " << produtosEmEstoque[i].getPreco() << " Reais" <<  endl;
            }
        }
        cout << "===========================================" << endl;
    }
}


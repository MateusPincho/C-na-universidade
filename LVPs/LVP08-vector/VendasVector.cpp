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

// Construtor vazio que inicializa o objeto
Vendas::Vendas(){}

// Adiciona um produto ao final do vector
void Vendas::adicionarProduto(Produto produto)
{
    produtosEmEstoque.push_back(produto);
}

// Exibe todos os produtos dentro do vector
void Vendas::exibirEstoque()
{
    for(int i = 0; i < produtosEmEstoque.size(); i++)
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
        cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
        cout << "Preço: " << produtosEmEstoque[i].getPreco() << " Reais" << endl;
     }
    cout << "===========================================" << endl;
}

// Verifica se esse produto existe dentro do estoque
bool Vendas::verificarExistencia(string nome)
{
    bool existencia;
    for (int i = 0; i < produtosEmEstoque.size(); i++)
    {
        if(produtosEmEstoque[i].getNome() == nome)
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

// Pesquisar por um produto especifico
void Vendas::pesquisarProduto(string nomeProduto)
{
    // caso não haja este produto na lista, avisar!
    if(verificarExistencia(nomeProduto) == false)
       cout << "O produto que voce deseja não foi encontrado, verifique se digitou o nome corretamente!" << endl;
    // caso haja, realizar a pesquisa
    else
    {
        // percorrer por toda a lista e procurar o que possui o mesmo nome
        for (int i = 0; i < produtosEmEstoque.size(); i++)
        {
             // caso o nome seja igual, exibir
            if(produtosEmEstoque[i].getNome() == nomeProduto)
            {
                cout << "===========================================" << endl;
                cout << "Nome: " << produtosEmEstoque[i].getNome() << endl;
                cout << "Quantidade: " << produtosEmEstoque[i].getQuantidade() << endl;
                cout << "Preço: " << produtosEmEstoque[i].getPreco() << " Reais" <<  endl;
            }
        }
        cout << "===========================================" << endl;
    }
}

// Verifica se há quantidade desejada para a venda é compátivel com a do estoque
bool Vendas::verificarQuantidade(string nomeProduto, int quantidadeDesejada)
{
    int quantidadeProduto;
    for (int i = 0; i < produtosEmEstoque.size(); i++)
    {
        if(produtosEmEstoque[i].getNome() == nomeProduto)
        {
            quantidadeProduto = produtosEmEstoque[i].getQuantidade();
            // Se a quantidade Desejada for maior que a existente, a venda não pode ser realizada
            if (quantidadeDesejada > quantidadeProduto)
                return false;
            // Caso contrário, a venda pode ser realizada
            else
                return true;
        }
    }
}

// Remove uma quantidade do produto
// Faz novamente uma validação da quantidade desejada para a venda
void Vendas::removerQuantidade(string nomeProduto, int quantidadeDesejada)
{
    int quantidadeProduto;
    int novaQuantidade;
    for (int i = 0; i < produtosEmEstoque.size(); i++)
    {
        if(produtosEmEstoque[i].getNome() == nomeProduto)
        {
            quantidadeProduto = produtosEmEstoque[i].getQuantidade();
            if (quantidadeDesejada > quantidadeProduto)
            {
                cout << "Não possuimos a quantidade que deseja!" << endl;
                break;
            }
            else
            {
                novaQuantidade = quantidadeProduto - quantidadeDesejada;
                produtosEmEstoque[i].setQuantidade(novaQuantidade);
                break;
            }
        }
    }
}

// Verfica a quantidade de produtos no estoque
// Usada para evitar que ações na main sejam executadas sem terem produtos no estoque
int Vendas::quantidadeEstoque()
{
    int quantidade = 0;
    for (int i = 0; i < produtosEmEstoque.size(); i ++)
    {
        quantidade += produtosEmEstoque[i].getQuantidade();
    }
    return quantidade;
}




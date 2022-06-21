//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 06: LVP-08
//IDE: CodeBlocks */

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <vector>

using namespace std;

#include "ProdutoVector.cpp"
#include "Pedido.cpp"
#include "VendasVector.cpp"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Criando vari�veis auxiliares
    Produto entradaProduto;
    string entradaNomeProduto;
    int entradaQuantiProduto;
    float entradaPrecoProduto;

    string entradaNomePesquisa;

    string entradaNomeVenda;
    int entradaQuantVenda;
    float entradaPrecoVenda;
    int numeroRemover;


    int opcao;
    int opcaoVendas;


    Vendas vendedor;

    Pedidos carrinhoCompras;

    // Criar interface de intera��o com o usu�rio
    while(1)
    {
        system("cls");

        cout << "===========================================" << endl
             << "=========== SISTEMA DE PEDIDOS ============" << endl
             << "===========================================" << endl << endl;

        // Perguntar qual a a��o a ser realizada
        cout << "1 - Adiconar produto" << endl
             << "2 - Exibir estoque atual de produtos" << endl
             << "3 - Pesquisar produto" << endl
             << "4 - Adicionar produto ao carrinho" << endl
             << "5 - Remover produto do carrinho" << endl
             << "6 - Ir para o caixa" << endl
             << "7 - Encerrar" << endl;
        cout << "Digite a op��o desejada: " << endl;
        cin >> opcao;

        system("cls");

        // Encerrar o programa caso a opcao seja 7
        if (opcao == 7)
        {
            cout << "Encerrando sess�o, obrigado!" << endl;
            break;
        }

        // Realizar as a��es escolhidas pelo usu�rio
        switch(opcao)
        {
            case 1:
                // Perguntar os atributos do produto
                cout << "Qual o nome do produto que deseja adicionar ao estoque? " << endl;
                cin.ignore();
                getline(cin,entradaNomeProduto);
                entradaProduto.setNome(entradaNomeProduto);

                cout << "Informe a quantidade desse produto: " << endl;
                cin >> entradaQuantiProduto;
                entradaProduto.setQuantidade(entradaQuantiProduto);

                cout << "Defina o pre�o do produto: " << endl;
                cin >> entradaPrecoProduto;
                entradaProduto.setPreco(entradaPrecoProduto);

                // Adicionar produto no estoque
                vendedor.adicionarProduto(entradaProduto);
                break;

            case 2:
                // Verificar se h� produtos no estoque
                if (vendedor.quantidadeEstoque() == 0)
                {
                    cout << "N�o temos nenhum produto em estoque, tente adicionar novos produtos!" << endl;
                    break;
                }
                //Apenas exibir o estoque caso ele possua produtos
                else
                {
                    vendedor.exibirEstoque();
                    break;
                }

            case 3:
                // Verificar se h� produtos no estoque
                if (vendedor.quantidadeEstoque() == 0)
                {
                    cout << "N�o temos nenhum produto em estoque, tente adicionar novos produtos!" << endl;
                    break;
                }
                // Apenas pesquisar caso haja produtos no estoque
                else
                {
                    cout << "Qual o nome do produto que deseja pesquisar?" << endl;
                    cin.ignore();
                    getline(cin, entradaNomePesquisa);
                    vendedor.pesquisarProduto(entradaNomePesquisa);
                    break;
                }

            case 4:
                // Verificar se h� produtos no estoque
                if (vendedor.quantidadeEstoque() == 0)
                {
                    cout << "N�o temos nenhum produto em estoque, tente adicionar novos produtos!" << endl;
                    break;
                }
                // Apenas adicionar ao carrinho caso haja produtos no estoque
                else
                {
                    // Listar todos os produtos do estoque
                    cout << "Temos em estoque os seguintes produtos: " << endl;
                    vendedor.exibirEstoque();
                    cout << endl << "Qual produto voc� deseja comprar? " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeVenda);
                    // Verificar se o produto digitado existe no estoque
                    if(vendedor.verificarExistencia(entradaNomeVenda) == false)
                    {
                        cout << "O produto informado n�o consta em nossos estoques" << endl;
                        break;
                    }
                    // Apenas adicionar ao carrinho produtos existentes no estoque
                    else
                    {
                        cout << "Informe o pre�o do produto como consta no menu: " << endl;
                        cin >> entradaPrecoVenda;
                        cout << "Qual a quantidade desejada: " << endl;
                        cin >> entradaQuantVenda;

                        // Verificar se h� a quantidade desejada do produto para ser vendida
                        if (vendedor.verificarQuantidade(entradaNomeVenda, entradaQuantVenda) == true)
                        {
                            // Apenas adicionar ao carrinho uma quantidade de produto que exista!
                            carrinhoCompras.adicionarAoCarrinho(entradaNomeVenda, entradaQuantVenda, entradaPrecoVenda);
                            // J� remove do estoque a quantidade do produto desejado
                            vendedor.removerQuantidade(entradaNomeVenda, entradaQuantVenda);
                            cout << "Produto adicionado com sucesso!" << endl;
                            break;
                        }
                        else
                        {
                           cout << "N�o possuimos a quantidade desejada!" << endl;
                           break;
                        }
                    }
                }

            case 5:
                // Verificar se h� produtos no carrinho
                if (carrinhoCompras.quantidadeNoCarrinho() == 0)
                {
                    cout << "Seu carrinho est� vazio, tente adicionar um pedido antes!" << endl;
                    break;
                }
                // Apenas executar se houver algum pedido para ser removido
                else
                {
                    // Exibir todos os pedidos do carrinho
                    cout << "Seu carrinho de compras �: " << endl;
                    carrinhoCompras.exibirPedidosNoCarrinho();
                    // Remover o pedido com base na posi��o dele no vector
                    cout << endl << "Qual o pedido que voc� deseja excluir (informe o n�mero anexado ao produto) : " << endl;
                    cin >> numeroRemover;
                    carrinhoCompras.removerPedido(numeroRemover);
                    break;
                }


            case 6:
                // Verificar se h� pedidos no carrinho
                if (carrinhoCompras.quantidadeNoCarrinho() == 0)
                {
                    cout << "Seu carrinho est� vazio, tente adicionar um pedido antes!" << endl;
                    break;
                }
                // Apenas ir para o caixa se houver produtos no carrinho
                else
                {
                    // Exibe todos os pedidos do carrinho
                    cout << "Seu carrinho de compras � :" << endl;
                    carrinhoCompras.exibirPedidosNoCarrinho();
                    // Calcula o valor total da venda
                    cout << "O valor total da venda foi de " << carrinhoCompras.getValorTotal() << " Reais" << endl;
                    // Esvazia o carrinho ap�s a venda
                    carrinhoCompras.esvaziarCarrinho();
                    cout << "Sua venda foi realizada com sucesso!" << endl;
                    break;
                }
        }
        system("pause");

    }


    return 0;
}

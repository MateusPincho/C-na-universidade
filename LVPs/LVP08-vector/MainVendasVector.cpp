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

        // Encerrar o programa caso a opcao seja 5
        if (opcao == 7)
        {
            cout << "Encerrando sess�o, obrigado!" << endl;
            break;
        }

        // Realizar as a��es escolhidas pelo usu�rio
        switch(opcao)
        {
            case 1:
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
                vendedor.exibirEstoque();
                break;

            case 3:
                cout << "Qual o nome do produto que deseja pesquisar?" << endl;
                cin.ignore();
                getline(cin, entradaNomePesquisa);
                vendedor.pesquisarProduto(entradaNomePesquisa);

            case 4:
                cout << "Temos em estoque os seguintes produtos: " << endl;
                vendedor.exibirEstoque();
                cout << endl << "Qual produto voc� deseja comprar? " << endl;
                cin.ignore();
                getline(cin, entradaNomeVenda);
                cout << "Informe o pre�o do produto como consta no menu: " << endl;
                cin >> entradaPrecoVenda;
                cout << "Qual a quantidade desejada: " << endl;
                cin >> entradaQuantVenda;

                Pedidos.adicionarAoCarrinho(entradaNomeVenda, entradaQuantVenda, entradaPrecoVenda);

            case 5:
                cout << "Seu carrinho de compras �: " << endl;
                Pedidos.exibirPedidosNoCarrinho();
                cout << endl << "Qual o pedido que voc� deseja excluir (informe o n�mero anexado ao produto) : " << endl;
                cin >> numeroRemover;
                Pedidos.removerPedido(numeroRemover);

            case 6:
                cout << "Seu carrinho de compras � :" << endl;
                Pedidos.exibirPedidosNoCarrinho();
                cout << "O valor total da venda foi de " << Pedidos.getValorTotal() << " Reais" << endl;
                break;


        }
        system("pause");

    }


    return 0;
}

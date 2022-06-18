#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

#include "Produto.cpp"
#include "Vendas.cpp"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Criando vari�veis auxiliares
    Produto entradaProduto;
    string entradaNomeProduto;
    int entradaQuantidadeProduto;
    int capacidadeMaxEstoque;
    int capacidadeEstoqueAtual;
    int opcao;

    string nomeVenda;
    int quantidadeVenda;

    string nomePesquisa;



    // Iniciando programa - saber quantas posi��es ter� nossa lista
    cout << "Voce acabou de abrir sua loja!" << endl;
    cout << "Qual a capacidade m�xima de produtos no seu estoque?" << endl;
    cin >> capacidadeMaxEstoque;

    // Criar lista de aloca��o din�mica com a quantidades de posi��es j� estabelecidas
    Vendas vendedor(capacidadeMaxEstoque);

    // Criar interfase de intera��o com o usu�rio
    while(1)
    {
        system("cls");

        // Perguntar qual a a��o a ser realizada
        cout << "1 - Adiconar produto" << endl
             << "2 - Exibir estoque atual de produtos" << endl
             << "3 - Vender produtos" << endl
             << "4 - Pesquisar produto" << endl
             << "5 - Encerrar" << endl;
        cout << "Digite a op��o desejada: " << endl;
        cin >> opcao;

        system("cls");

        // Encerrar o programa caso a opcao seja 5
        if (opcao == 5)
        {
            vendedor.~Vendas();
            break;
        }

        // Realizar as a��es escolhidas pelo usu�rio
        switch(opcao)
        {

            case 1:     // Fun��o adicionar produto

                // Verificar se a capacidade para adicionar na lista
                if (capacidadeEstoqueAtual >= capacidadeMaxEstoque)
                {
                    cout << "O estoque lotou! N�o h� capacidade para adicionar mais produtos";
                    break;
                }
                cout << "Qual o nome do produto que deseja adicionar ao estoque? " << endl;
                cin.ignore();
                getline(cin,entradaNomeProduto);
                entradaProduto.setNome(entradaNomeProduto);

                cout << "Informe a quantidade desse produto: " << endl;
                cin >> entradaQuantidadeProduto;
                entradaProduto.setQuantidade(entradaQuantidadeProduto);

                vendedor.adicionarProduto(entradaProduto);
                capacidadeEstoqueAtual ++;

                cout << "Produto adicionado com sucesso!" << endl;
                break;

            case 2:         // Fun��o exibir estoque

                // Verificar se h� itens para serem exibidos
                if (capacidadeEstoqueAtual == 0)
                {
                    cout << "N�o h� produtos no estoque! Lembre de adicionar os novo produtos que chegaram" << endl;
                    break;
                }
                vendedor.exibirEstoque();
                break;

            case 3:         // Fun��o vender produtos

                // Verificar se h� itens para serem vendidos
                if (capacidadeEstoqueAtual == 0)
                {
                    cout << "N�o h� produtos no estoque! Lembre de adicionar os novo produtos que chegaram" << endl;
                    break;
                }

                cout << "Qual o produto que deseja comprar?" << endl;
                cin.ignore();
                getline(cin, nomeVenda);
                cout << "Quantas unidades desse produto voc� deseja?" << endl;
                cin >> quantidadeVenda;
                vendedor.venderProduto(nomeVenda,quantidadeVenda);
                break;


            case 4:       // Fun��o pesquisar produtos

                // Verificar se h� itens para serem vendidos
                if (capacidadeEstoqueAtual == 0)
                {
                    cout << "N�o h� produtos no estoque! Lembre de adicionar os novo produtos que chegaram" << endl;
                    break;
                }

                cout << "Qual o produto que voce deseja pesquisar? " << endl;
                cin.ignore();
                getline(cin, nomePesquisa);
                vendedor.pesquisarProduto(nomePesquisa);
                break;


        }
        system("pause");
    }
    return 0;
}

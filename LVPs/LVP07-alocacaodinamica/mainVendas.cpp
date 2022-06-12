#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

#include "Produto.cpp"
#include "Vendas.cpp"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Produto entradaProduto;
    string entradaNomeProduto;
    int entradaQuantidadeProduto;
    int capacidadeMaxEstoque;
    int capacidadeEstoqueAtual;
    int opcao;

    cout << "Voce acabou de abrir sua loja!" << endl;
    cout << "Qual a capacidade máxima de produtos no seu estoque?" << endl;
    cin >> capacidadeMaxEstoque;

    Vendas vendedor(capacidadeMaxEstoque);

    while(1)
    {
        system("cls");
        cout << "1 - Adiconar produto" << endl
             << "2 - Exibir estoque atual de produtos" << endl
             << "3 - Vender produtos" << endl
             << "4 - Pesquisar produto" << endl
             << "5 - Encerrar" << endl;
        cout << "Digite a opção desejada: " << endl;
        cin >> opcao;

        system("cls");
        if (opcao == 5)
        {
            cout << "Encerrando sessão, obrigado! ";
            break;
        }
        switch(opcao)
        {

            case 1:
                if (capacidadeEstoqueAtual >= capacidadeMaxEstoque)
                {
                    cout << "O estoque lotou! Não há capacidade para adicionar mais produtos";
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

            case 2:
                if (capacidadeEstoqueAtual == 0)
                {
                    cout << "Não há produtos no estoque! Lembre de adicionar os novo produtos que chegaram" << endl;
                    break;
                }
                vendedor.exibirEstoque();
                break;

            case 3:
                cout << "Função ainda não adicionada!";
                break;

            case 4:
                cout << "Função ainda não adicionada!";
                break;

        }
        system("pause");
    }
    return 0;
}

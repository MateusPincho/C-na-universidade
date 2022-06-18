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
    int opcao;


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
             << "3 - Vender produtos" << endl
             << "4 - Pesquisar produto" << endl
             << "5 - Encerrar" << endl;
        cout << "Digite a op��o desejada: " << endl;
        cin >> opcao;

        system("cls");

        // Encerrar o programa caso a opcao seja 5
        if (opcao == 5)
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
        }
        system("pause");

    }


    return 0;
}

//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 06: LVP-08
//IDE: CodeBlocks */
#include "Pedido.h"

void Pedidos::adicionarAoCarrinho(string nomeItem, int quantItem, float precoItem)
{
    Pedido item;
    item.nome = nomeItem;
    item.quantidade = quantItem;
    item.preco = precoItem;

    carrinhoDeCompras.push_back(item);
}

void Pedidos::exibirPedidosNoCarrinho()
{
    for(int i = 0; i < carrinhoDeCompras.size(); i++)                    // Percorrer toda a lista e exibir os produtos de cada posição
    {
        cout << "===========================================" << endl;
        cout << i << endl;
        cout << "Nome: " << carrinhoDeCompras[i].nome << endl;
        cout << "Quantidade: " << carrinhoDeCompras[i].quantidade << endl;
        cout << "Preço: " << carrinhoDeCompras[i].preco << " Reais" << endl;
     }
    cout << "===========================================" << endl;
}

void Pedidos::removerPedido(int posicao)
{
    carrinhoDeCompras.erase(carrinhoDeCompras.begin() + posicao);
}

float Pedidos::getValorTotal()
{
    float valorTotal ;
    for (int i = 0; i < carrinhoDeCompras.size(); i ++)
    {
        valorTotal = valorTotal + carrinhoDeCompras[i].preco;
    }
    return valorTotal;
}



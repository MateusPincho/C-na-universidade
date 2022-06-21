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
// Adicionar itens ao carrinho
void Pedidos::adicionarAoCarrinho(string nomeItem, int quantItem, float precoItem)
{
    // criar uma struct pedido auxiliar
    Pedido item;
    item.nome = nomeItem;
    item.quantidade = quantItem;
    item.preco = precoItem;
    // adicionar ao final do vector o item
    carrinhoDeCompras.push_back(item);

}
// Exibir todos os pedidos do carrinho
void Pedidos::exibirPedidosNoCarrinho()
{
    // Percorrer todo o vector
    for(int i = 0; i < carrinhoDeCompras.size(); i++)
    {
        // Exibir os atributos do pedido da posição i
        // Fazer a manipulação i+1 para pular o número 0 e sair mais amigável para o usuário
        cout << "===========================================" << endl;
        cout << "Pedido N°" << i+1 << endl;
        cout << "Nome: " << carrinhoDeCompras[i].nome << endl;
        cout << "Quantidade: " << carrinhoDeCompras[i].quantidade << endl;
        cout << "Preço: " << carrinhoDeCompras[i].preco << " Reais" << endl;
     }
    cout << "===========================================" << endl;
}

// Remover um pedido com base na sua posição no vector
// Recebe a posição do pedido informada pelo usuário, que foi mostrada pela função-membro exibirPedidosNoCarrinho()
void Pedidos::removerPedido(int posicao)
{
    // Retirar o 1 que foi adicionando anteriormente na função-membro exibirPedidosNoCarrinho()
    carrinhoDeCompras.erase(carrinhoDeCompras.begin() + posicao - 1);
}

// Calcula o valor total de todos os pedidos
// Multiplica o preço pela quantidade de cada pedido do carrinho
float Pedidos::getValorTotal()
{
    float valorTotal = 0;
    for (int i = 0; i < carrinhoDeCompras.size(); i ++)
    {
        valorTotal += carrinhoDeCompras[i].preco*carrinhoDeCompras[i].quantidade;
    }
    return valorTotal;
}

// Verificar a quantidade de pedidos no carrinho, ou seja, verifica se ele não está vazio
// Usada para impedir que ações da main aconteçam sem ter pedidos no carrinho
int Pedidos::quantidadeNoCarrinho()
{
    int quantidade = 0;
    for (int i = 0; i < carrinhoDeCompras.size(); i++)
    {
        quantidade += carrinhoDeCompras[i].quantidade;
    }
    return quantidade;
}

// Esvaziar o carrinho após a compra
void Pedidos::esvaziarCarrinho()
{
    carrinhoDeCompras.clear();
}


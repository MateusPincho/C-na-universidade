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
        // Exibir os atributos do pedido da posi��o i
        // Fazer a manipula��o i+1 para pular o n�mero 0 e sair mais amig�vel para o usu�rio
        cout << "===========================================" << endl;
        cout << "Pedido N�" << i+1 << endl;
        cout << "Nome: " << carrinhoDeCompras[i].nome << endl;
        cout << "Quantidade: " << carrinhoDeCompras[i].quantidade << endl;
        cout << "Pre�o: " << carrinhoDeCompras[i].preco << " Reais" << endl;
     }
    cout << "===========================================" << endl;
}

// Remover um pedido com base na sua posi��o no vector
// Recebe a posi��o do pedido informada pelo usu�rio, que foi mostrada pela fun��o-membro exibirPedidosNoCarrinho()
void Pedidos::removerPedido(int posicao)
{
    // Retirar o 1 que foi adicionando anteriormente na fun��o-membro exibirPedidosNoCarrinho()
    carrinhoDeCompras.erase(carrinhoDeCompras.begin() + posicao - 1);
}

// Calcula o valor total de todos os pedidos
// Multiplica o pre�o pela quantidade de cada pedido do carrinho
float Pedidos::getValorTotal()
{
    float valorTotal = 0;
    for (int i = 0; i < carrinhoDeCompras.size(); i ++)
    {
        valorTotal += carrinhoDeCompras[i].preco*carrinhoDeCompras[i].quantidade;
    }
    return valorTotal;
}

// Verificar a quantidade de pedidos no carrinho, ou seja, verifica se ele n�o est� vazio
// Usada para impedir que a��es da main aconte�am sem ter pedidos no carrinho
int Pedidos::quantidadeNoCarrinho()
{
    int quantidade = 0;
    for (int i = 0; i < carrinhoDeCompras.size(); i++)
    {
        quantidade += carrinhoDeCompras[i].quantidade;
    }
    return quantidade;
}

// Esvaziar o carrinho ap�s a compra
void Pedidos::esvaziarCarrinho()
{
    carrinhoDeCompras.clear();
}


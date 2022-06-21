//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 06: LVP-08
//IDE: CodeBlocks */

#ifndef PEDIDO_H
#define PEDIDO_H

struct Pedido
{
    string nome;
    int quantidade;
    float preco;
};

class Pedidos
{
    vector <Pedido> carrinhoDeCompras;
    float valorTotal;
public:

    void adicionarAoCarrinho(string, int, float);           // Para adicionar novos itens no carrinho
    void exibirPedidosNoCarrinho();                         // Para exibir todos os itens do carrinho
    void removerPedido(int);                                // Para remover um pedido do carrinho com base no seu indice no vector
    float getValorTotal();                                  // Para saber o valor total da Venda
    int quantidadeNoCarrinho();                             // Saber se há algo no carrinho -> quantidade != 0
    void esvaziarCarrinho();                                // Esvaziar um carrinho depois que a venda foi realizada
};
#endif // PEDIDO_H

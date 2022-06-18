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
    void adicionarAoCarrinho(Pedido);
    float getValorTotal();
};
#endif // PEDIDO_H

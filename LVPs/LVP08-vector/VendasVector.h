//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 06: LVP-08
//IDE: CodeBlocks */

#ifndef VENDASVECTOR_H
#define VENDASVECTOR_H

class Vendas
{
    vector <Produto> produtosEmEstoque;

public:
    Vendas();
    void adicionarProduto(Produto);             // Adiciona um produto ao estoque
    void exibirEstoque();                       // Exibe o estoque de todos os produtos
    void pesquisarProduto(string);              // Pesquisa um determinado produto dentro do estoque, recebe o nome desse produto
    bool verificarExistencia(string);           // Verifica se há a exitencia de um determinado produto
    bool verificarQuantidade(string, int);      // Verifica se há quantidade suficiente para realizar a venda
    void removerQuantidade(string, int);        // Remove a quantidade de um produto depois de sua venda
    int quantidadeEstoque();                    // Descobrir a quantidade total de produtos dentro do estoque, saber se o estoque não está vazio


};
#endif // VENDASVECTOR_H

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
    void adicionarProduto(Produto);
    void exibirEstoque();
    void pesquisarProduto(string);
    bool verificarExistencia(string);


};
#endif // VENDASVECTOR_H

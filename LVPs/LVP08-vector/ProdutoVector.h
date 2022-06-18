/* Discente: Mateus Pincho de Oliveira
Matricula: 121110103
Periodo: 21.2
Curso: Engenharia Eletrica
Disciplina: Tecnicas de Programacao
Turma: 02
Professor: Marcus Salerno
Unidade 04: LVP-06
IDE: CodeBlocks */

#ifndef PRODUTOVECTOR_H
#define PRODUTOVECTOR_H

class Produto
{
    string nome;
    int quantidade;
    float preco;

public:
    Produto();
    Produto(string, int, float);        // construtor que recebe os parametros dos atributos

    //metodos set
    void setNome(string);
    void setQuantidade(int);
    void setPreco(float);

    //metodos get
    string getNome();
    int getQuantidade();
    float getPreco();
};
#endif // PRODUTOVECTOR_H

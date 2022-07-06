//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */
#ifndef LIVRO_H
#define LIVRO_H

class Livro
{
protected:
    string nome;
    string nomeAutor;
    double ISBM;
    int anoPublicao;
    float preco;

public:
    Livro();
    // metodos set de atributo
    void setNome(string);
    void setAutor(string);
    void setISBM(double);
    void setPublicacao(int);
    void setPreco(float);

    // metodos get de atributo
    string getNome()const;
    string getAutor()const;
    double getISBM()const;
    int getPublicacao()const;
    float getPreco()const;

};
#endif // LIVRO_H

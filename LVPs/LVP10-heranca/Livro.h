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
    long int ISBM;
    int anoPublicao;
    float preco;

public:
    Livro();
    void setNome(string);
    void setAutor(string);
    void setISBM(long int);
    void setPublicacao(int);
    void setPreco();

    string getNome()const;
    string getAutor()const;
    long int getISBM()const;
    int getPublicacao()const;
    float getPreco()const;

};
#endif // LIVRO_H

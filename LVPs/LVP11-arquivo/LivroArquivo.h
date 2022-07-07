//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
//IDE: CodeBlocks   */
#ifndef LIVRO_H
#define LIVRO_H

class Livro
{
protected:
    string nome;
    string nomeAutor;
    double ISBM;
    int anoPublicacao;
    float preco;

public:
    // construtor com argumento default
    Livro(string = "", string = "", double = 0, int = 0, float = 0);
    
    // metodos set de atributo
    void setNome(string);
    // metodos set de atributo
    void setAutor(string);
    // metodos set de atributo
    void setISBM(double);
    // metodos set de atributo
    void setPublicacao(int);
    // metodos set de atributo
    void setPreco(float);

    // metodos get de atributo
    string getNome()const;
    // metodos get de atributo
    string getAutor()const;
    // metodos get de atributo
    double getISBM()const;
    // metodos get de atributo
    int getPublicacao()const;
    // metodos get de atributo
    float getPreco()const;
};
#endif // LIVRO_H
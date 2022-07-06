//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#ifndef LIVRARIA_H
#define LIVRARIA_H

class Livraria
{
    vector <Ficcao> livrosFiccao;
    vector <NaoFiccao> livrosNaoFiccao;
    string nomeUsuario;
    int senhaUsuario;

public:
    Livraria();
    // metodos para acesso do sistema
    void setNomeUsuario(string);
    void setSenha(int);
    string getNomeUsuario();
    int getSenha();
    void verificarUsuario(string);
    void verificarSenha(int);

    // metodos do sistema
    void cadastrarLivroFiccao(Ficcao);                          // adicionar livro a lista
    void cadastrarLivroNaoFiccao(NaoFiccao);
    void exibirFiccaoDisponivel();                              // exibe todos os livros
    void exibirNaoFiccaoDisponivel();
    void venderFiccao(string);                                  // vende um livro
    void venderNaoFiccao(string);
    //bool ordenarPorNome();
    //void ordenarPorRanking();
    bool verificarNomeFiccao(string);                           // verifica se um livro já existe pelo seu nome
    bool verificarNomeNaoFiccao(string);
    bool verificarExistenciaFiccao();                           // verifica se a lista está vazia
    bool verificarExistenciaNaoFiccao();
};
#endif // LIVRARIA_H

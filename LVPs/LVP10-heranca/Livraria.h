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
    // metodos para acesso do sistema
    void setNomeUsuario(string);
    void setSenha(int);
    string getNomeUsuario();
    int getSenha();

    // metodos do sistema
    void cadastrarLivroFiccao(Ficcao);
    void cadastrarLivroNaoFiccao(NaoFiccao);
    void exibirFiccaoDisponivel();
    void exibirNaoFiccaoDisponivel();
    void venderFiccao(string);
    void venderNaoFiccao(string);
};
#endif // LIVRARIA_H

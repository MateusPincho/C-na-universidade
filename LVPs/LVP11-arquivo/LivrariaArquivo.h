//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
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
    // construtor da classe livraria - faz a chamada para a leitura do arquivo txt
    Livraria();
    // destrutor da classe livraria - armazena as alterações da lista no arquivo txt
    ~Livraria();

    // metodos para acesso do sistema
    
    // configuração nome de usuario
    void setNomeUsuario(string);
    // configuração senha
    void setSenha(int);
    // retornar usuario 
    string getNomeUsuario();
    // retornar senha
    int getSenha();

    // metodos do sistema

    // adicionar livro a lista
    void cadastrarLivroFiccao(Ficcao);
    // adicionar livro a lista                          
    void cadastrarLivroNaoFiccao(NaoFiccao);
    // exibe todos os livros
    void exibirFiccaoDisponivel();
    // exibe todos os livros                              
    void exibirNaoFiccaoDisponivel();
    // vende um livro
    void venderFiccao(string);
    // vende um livro                                  
    void venderNaoFiccao(string);
    // verifica se um livro ja existe pelo seu nome
    bool verificarNomeFiccao(string);
    // verifica se um livro ja existe pelo seu nome                           
    bool verificarNomeNaoFiccao(string);
    // verifica se a lista esta vazia
    bool verificarExistenciaFiccao();
    // verifica se a lista esta vazia                           
    bool verificarExistenciaNaoFiccao();
};
#endif // LIVRARIA_H

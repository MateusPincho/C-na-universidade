//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-09 - RESTAURANTE
//IDE: VSCODE   */


#ifndef RESTAURANTE_H
#define RESTAURANTE_H

class Restaurante
{
    string nome;

    // Atributo que gera o código dos clientes
    static int codigoParaCliente;
    // Armazena a quantidade de mesas existentes
    static int quantidadeMesas;
    // Armazena a quantidade máxima de mesas, deve ser verificado se ainda podem ser criadas mesas
    static int quantidadeMaximaDeMesas;

    // Clientes que ainda não foram atendidos(recem criados) devem ser armazenados aqui
    vector <Cliente> filaDeEspera;
    // Clientes que foram atentidos devem ser excluidos da fila de espera e armazenados aqui
    vector <Cliente> clientesAtentidos;
    // Armazena todas as mesas ja criadas
    vector <Mesa> mesasOcupadas;
public:
    // Construtor sem parametros
    Restaurante();

    // metodos set e get para o atributo nome
    void setNome(string);
    string getNome();

    // metodos de verificação - retornam se a condição desejada ocorre

    // verifica se a fila de espera esta vazia
    bool verificarFilaDeEspera();
    // verifica se a fila de atendidos esta vazia
    bool verificarFilaAtendidos();
    // verifica se o codigo informado existe no sistema
    bool verificarCodigo(int);
    // verifica se ainda podem ser criadas mesas
    static bool verificarMesas();

    // metodo que cria cliente - adiciona na fila de espera
    void adicionarClienteNaFilaEspera(string, int);
    // exibir todos os clientes da fila de espera
    void exibirFilaEspera();
    // remover um cliente da fila pelo seu código
    void removerClienteDaFilaEspera(int);
    // pesquisar se um cliente existe pelo seu código
    void pesquisarCliente(int);
    // atender um clinte - retirar da fila de espera e colocar na fila de atendidos
    void atenderCliente();
    // mostrar todos os clientes que foram atendidos até então
    void exibirRelatorioDeAtendidos();

};
#endif

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
    static int codigoParaCliente;
    static int quantidadeMesas;
    static int quantidadeMaximaDeMesas;
    vector <Cliente> filaDeEspera;
    vector <Cliente> clientesAtentidos;
    vector <Mesa> mesasOcupadas;
public:
    Restaurante();
    void setNome(string);
    string getNome();
    bool verificarFilaDeEspera();
    bool verificarFilaAtendidos();
    void adicionarClienteNaFilaEspera(string, int);
    void exibirFilaEspera();
    void removerClienteDaFilaEspera(int);
    static bool verificarMesas();
    void atenderCliente();
    void exibirRelatorioDeAtendidos();

};
#endif

//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-09 - RESTAURANTE  
//IDE: VSCODE   */

#include "Restaurante.h"

// Atributo static que controla a quantidade de mesas instanciadas
int Restaurante::quantidadeMesas = 0;

// Atributo static que mantém a quantidade de mesas abaixo do valor máximo
int Restaurante::quantidadeMaximaDeMesas = 20;

// Atributo static que controla o código de cada cliente - soma-se 1 a cada cliente adicionado
int Restaurante::codigoParaCliente = 1;

Restaurante::Restaurante(){}

void Restaurante::setNome(string nome)
{
    this -> nome = nome;
}

void Restaurante::adicionarClienteNaFilaEspera(string nomeCliente, int acompanhantes)
{
    Cliente clienteAuxiliar;
    clienteAuxiliar.setNome(nomeCliente);
    clienteAuxiliar.setCodigo(codigoParaCliente);
    clienteAuxiliar.setAcompanhates(acompanhantes);

    codigoParaCliente++;
    filaDeEspera.push_back(clienteAuxiliar);
}

void Restaurante::exibirFilaEspera()
{
    for (int i = 0; i < filaDeEspera.size(); i++)
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << filaDeEspera[i].getNome() << endl;
        cout << "Código: " << filaDeEspera[i].getCodigo() << endl;
        cout << "Quantidade de Acompanhantes: " << filaDeEspera[i].getAcompanhantes() << endl;
     }
    cout << "===========================================" << endl;
}

void Restaurante::removerClienteDaFilaEspera(int codigo)
{
    for (int i = 0; i < filaDeEspera.size(); i++)
    {
        if (filaDeEspera[i].getCodigo == codigo)
        {
            filaDeEspera.erase(filaDeEspera[i]);
        }
    }
}
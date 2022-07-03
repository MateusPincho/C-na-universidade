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

// construtor vazio para classe
Restaurante::Restaurante(){}

// métodos set e get para o atributo nome
void Restaurante::setNome(string nome)
{
    this -> nome = nome;
}
string Restaurante::getNome()
{
    return nome;
}

// metodo para verificar se fila de espera esta vazia
bool Restaurante::verificarFilaDeEspera()
{
    if (filaDeEspera.size() == 0)
        return true;
    else
        return false;
}

// método que avalia se ainda ha mesas disponíveis para serem ocupadas
bool Restaurante::verificarMesas()
{
    if (quantidadeMesas <= quantidadeMaximaDeMesas)
        return true;
    else
        return false;
}

// metodo para verificar se o codigo informado existe
bool Restaurante::verificarCodigo(int codigo)
{
    // Como não existe um mesmo código para dois clientes, ele só pode estar em uma das filas!

    // Variavel auxiliar que indica a existencia do codigo
    bool existencia;

    // Percorrer toda a lista de espera a fim de encontra-lo
    for (int i = 0; i < filaDeEspera.size(); i++)
    {
        // Caso encontre, existencia é verdadeira
        if (filaDeEspera[i].getCodigo() == codigo)
            existencia = true;
    }

    // Percorrer toda a lista de clientes atendidos a fim de encontra-lo
    for (int i = 0; i < clientesAtentidos.size(); i++)
    {
        // Caso encontre, existencia é verdadeira
        if (clientesAtentidos[i].getCodigo() == codigo)
            existencia = true;
    }

    // Caso não tenha sido encontrado nenhum valor para existencia, ela então deve ser false
    if (existencia != true)
        existencia = false;

    // caso tenha sido encontrado um código igual, retorna true. Caso contrario, retornar false
    if(existencia == true)
        return true;
    else
    {
        return false;
    }

}
// metodo para verificar se algum cliente ja foi atendido
bool Restaurante::verificarFilaAtendidos()
{
    if (clientesAtentidos.size() == 0)
        return true;
    else
        return false;
}

// metodo para adicionar cliente a fila de espera
void Restaurante::adicionarClienteNaFilaEspera(string nomeCliente, int acompanhantes)
{
    // Criar um objeto para auxiliar
    Cliente clienteAuxiliar;

    // Atribuir os valores para os seus atributos
    clienteAuxiliar.setNome(nomeCliente);
    clienteAuxiliar.setCodigo(codigoParaCliente);
    clienteAuxiliar.setAcompanhates(acompanhantes);

    // Como um cliente foi criado, adicionar 1 ao código que monitora a quantidade de clientes
    codigoParaCliente++;

    // Adicionar cliente a fila de espera
    filaDeEspera.push_back(clienteAuxiliar);
}

// metodo para exibir todos os clientes da fila de espera
void Restaurante::exibirFilaEspera()
{
    // Percorrer toda a fila de espera
    for (int i = 0; i < filaDeEspera.size(); i++)
    {
        // Exibir os atributos de todos na fila de espera
        cout << "===========================================" << endl;
        cout << "Nome: " << filaDeEspera[i].getNome() << endl;
        cout << "Código: " << filaDeEspera[i].getCodigo() << endl;
        cout << "Quantidade de Acompanhantes: " << filaDeEspera[i].getAcompanhantes() << endl;
     }
    cout << "===========================================" << endl;
}

//  metodo paa remover algum cliente da fila pelo seu código
void Restaurante::removerClienteDaFilaEspera(int codigo)
{
    // Percorre toda a fila de espera
    for (int i = 0; i < filaDeEspera.size(); i++)
    {
        // Caso encontre alguém com o mesmo código
        if (filaDeEspera[i].getCodigo() == codigo)
        {
            // Remover este cliente
            filaDeEspera.erase(filaDeEspera.begin() + i);
        }
    }
}

// metodo para atender um cliente que está na fila de espera
void Restaurante::atenderCliente()
{
    // Crio um objeto para auxiliar
    Cliente clienteAuxiliar;

    // Recebo os atributos do primeiro cliente da fila de espera
    string nomeCliente = filaDeEspera[0].getNome();
    int codigoCliente = filaDeEspera[0].getCodigo();
    int acompanhantesCliente = filaDeEspera[0].getAcompanhantes();

    // Atribuo ao objeto auxiliar as mesmas caracteristicas do cliente da fila
    clienteAuxiliar.setNome(nomeCliente);
    clienteAuxiliar.setCodigo(codigoCliente);
    clienteAuxiliar.setAcompanhates(acompanhantesCliente);

    // Instancio uma mesa para este cliente
    Mesa mesaCliente;
    int totalDeCadeiras = acompanhantesCliente + 1;
    mesaCliente.setCadeiras(totalDeCadeiras);
    mesasOcupadas.push_back(mesaCliente);

    // Aumentar a quantidade de mesas ocupadas
    quantidadeMesas++;

    // Adicionar o objeto auxiliar na lista de atendidos e apagar da fila de espera
    clientesAtentidos.push_back(clienteAuxiliar);
    filaDeEspera.erase(filaDeEspera.begin());
}

// metodo para realizar a pesquisa de um cliente pelo código
// deve ser executado apenas depois da existencia do codigo ter se mostrado verdadeira
void Restaurante::pesquisarCliente(int codigo)
{
    // Percorrer a fila de espera em busca do codigo igual
   for (int i = 0; i < filaDeEspera.size(); i++)
    {
        // Caso encontre, exibir
        if (filaDeEspera[i].getCodigo() == codigo)
        {
            cout << "===========================================" << endl;
            cout << "Nome: " << filaDeEspera[i].getNome() << endl;
            cout << "Código: " << filaDeEspera[i].getCodigo() << endl;
            cout << "Quantidade de Acompanhantes: " << filaDeEspera[i].getAcompanhantes() << endl;
            cout << "===========================================" << endl;
        }
    }

    // caso o código não tenha sido encontrado no loop passado, ele deve estar na classe de atendidos!
    for (int i = 0; i < clientesAtentidos.size(); i++)
    {
        // Caso encontre, exibir
        if (clientesAtentidos[i].getCodigo() == codigo)
        {
            cout << "===========================================" << endl;
            cout << "Nome: " << clientesAtentidos[i].getNome() << endl;
            cout << "Código: " << clientesAtentidos[i].getCodigo() << endl;
            cout << "Quantidade de Acompanhantes: " << clientesAtentidos[i].getAcompanhantes() << endl;
            cout << "===========================================" << endl;
        }
    }
}

void Restaurante::exibirRelatorioDeAtendidos()
{
   // Percorrer toda a lista
    for (int i = clientesAtentidos.size() - 1; i >= 0; i--)
    {
        // Exibir os atributos de todos na lista
        cout << "===========================================" << endl;
        cout << "Nome: " << clientesAtentidos[i].getNome() << endl;
        cout << "Código: " << clientesAtentidos[i].getCodigo() << endl;
        cout << "Quantidade de Acompanhantes: " << clientesAtentidos[i].getAcompanhantes() << endl;
     }
    cout << "===========================================" << endl << endl;
    cout << "Mesas ocupadas: " << endl << endl;

    // Percorrer toda a lista
    for (int i = clientesAtentidos.size() - 1; i >= 0; i--)
    {
        // Exibir os atributos de todos na lista
        cout << "===========================================" << endl;
        cout << "Mesa n° " << i + 1 << endl;
        cout << "Cadeiras ocupadas: " << mesasOcupadas[i].getCadeiras() << endl;

     }



}

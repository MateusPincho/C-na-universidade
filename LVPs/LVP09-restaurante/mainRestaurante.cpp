//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-09 - RESTAURANTE
//IDE: VSCODE   */

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <vector>

using namespace std;

#include "Cliente.cpp"
#include "Mesa.cpp"
#include "Restaurante.cpp"


int main(){
    setlocale(LC_ALL, "Portuguese");
    //Criando vari�veis auxiliares
    int opcao;
    Restaurante restaurante;
    string entradaNomeRestaurante;

    string entradaNomeCliente;
    int entradaAcompanhantes;

    int entradaRemoverCodigo;
    int entradaCodigo;

    // Perguntar o nome do restaurante do usu�rio
    cout << "Estamos iniciando o sistema de gereciamento do seu restaurante!" << endl;
    cout << "Como voc� deseja cham�-lo?" << endl;
    cin.ignore();
    getline(cin, entradaNomeRestaurante);
    restaurante.setNome(entradaNomeRestaurante);


    // Criar interface de interacaoo com o usuario
    while(1)
    {
        system("cls");

        cout << "===========================================" << endl
             << "=========== SISTEMA RESTAURANTE  ==========" << endl
             << "===========================================" << endl << endl;

        // Perguntar qual a acao a ser realizada
        cout << "1 - Adiconar um cliente a fila de espera" << endl
             << "2 - Exibir fila de espera" << endl
             << "3 - Remover cliente da fila de espera" << endl
             << "4 - Atender um cliente" << endl
             << "5 - Exibir dados de um cliente" << endl
             << "6 - Gerar relatorio de clientes atendidos" << endl
             << "7 - Encerrar" << endl;
        cout << "Digite a opi��o desejada: " << endl;
        cin >> opcao;

        system("cls");

        // Encerrar o programa caso a opcao seja 7
        if (opcao == 7)
        {
            cout << "Encerrando sess�o, obrigado!" << endl;
            break;
        }

        // Realizar as a��es escolhidas pelo usu�rio
        switch(opcao)
        {
            case 1: // Adicionar cliente a fila de espera

                // Perguntar os atributos do cliente
                cout << "Qual o nome do cliente?" << endl;
                cin.ignore();
                getline(cin, entradaNomeCliente);
                cout << "Quantos acompanhantes ele possui?" << endl;
                cin >> entradaAcompanhantes;

                if (entradaAcompanhantes > 8)
                {
                    cout << "Infelizmente n�o aceitamos clientes com mais de 8 acompanhantes" << endl;
                    break;
                }
                else
                {
                    // Adicionar ao fim da fila - push_back
                    restaurante.adicionarClienteNaFilaEspera(entradaNomeCliente,entradaAcompanhantes);
                    cout << endl << "Cliente adicionado com sucesso!" << endl;
                    break;
                }



            case 2: // Exibir fila de espera

                //Verificar se a fila n�o esta vazia
                if (restaurante.verificarFilaDeEspera())
                {
                    cout << "A fila de espera est� vazia, adicione novos clientes para poder exibir a fila" << endl;
                    break;
                }
                else
                {
                    // Percorrer toda a fila e exibir os clientes pertencentes
                    restaurante.exibirFilaEspera();
                    break;
                }

            case 3: // Remover um cliente da fila de espera

                //Verificar se a fila n�o esta vazia
                if (restaurante.verificarFilaDeEspera())
                {
                    cout << "A fila de espera est� vazia, adicione novos clientes para poder exibir a fila" << endl;
                    break;
                }
                else
                {

                    // Exibir toda a fila e perguntar qual cliente deve ser removido - pelo c�digo
                    cout << "Aqui est�o todos os clientes na fila de espera!" << endl << endl;
                    restaurante.exibirFilaEspera();
                    cout << endl << "Qual deles voc� deseja remover? Informe a seguir o seu c�digo" << endl;
                    cin >> entradaRemoverCodigo;
                    // Verificar se o c�digo informado existe
                    if (restaurante.verificarCodigo(entradaRemoverCodigo) == true)
                    {
                         // Remover o cliente desejado usando o seu c�digo
                        restaurante.removerClienteDaFilaEspera(entradaRemoverCodigo);
                        cout << endl << "Cliente removido com sucesso!" << endl;
                        break;
                    }
                    else
                    {
                        cout << "O c�digo informado n�o consta na lista de espera" << endl;
                        break;
                    }

                }


            case 4: // Atender um cliente

                //Verificar se a fila n�o esta vazia
                if (restaurante.verificarFilaDeEspera())
                {
                    cout << "A fila de espera est� vazia, adicione novos clientes para atende-los" << endl;
                    break;
                }
                else
                {
                    // Verificar se h� mesas dispon�veis
                    if(restaurante.verificarMesas() == false)
                    {
                        cout << "Todas as mesas foram ocupadas, seu restaurante lotou!" << endl;
                        break;
                    }
                    else
                    {
                        // Atender clientes somente se houver disponibilidade
                        restaurante.atenderCliente();
                        cout << "Cliente foi atendido e designado para uma mesa" << endl;
                        break;
                    }
                }

            case 5: // Exibir dados de um cliente

                //Verificar se a fila n�o esta vazia
                if (restaurante.verificarFilaDeEspera() && restaurante.verificarFilaAtendidos())
                {
                    cout << "Voc� n�o possui clientes para serem pesquisados" << endl;
                    break;
                }
                else
                {
                    cout << "Qual o c�digo do cliente que deseja pesquisar?" << endl;
                    cin >> entradaCodigo;

                    // verificar se este c�digo existe - pesquisa feita em ambas as filas!!!
                    if (restaurante.verificarCodigo(entradaCodigo) == true)
                    {
                        restaurante.pesquisarCliente(entradaCodigo);
                        break;
                    }
                    else
                    {
                        cout << "N�o foi encontrado nenhum c�digo correspondente, verifique o c�digo digitado" << endl;
                        break;
                    }

                }

            case 6: // Gerar relat�rio de todos os clientes atendidos

                //Verificar se a fila n�o esta vazia
                if (restaurante.verificarFilaAtendidos())
                {
                    cout << "N�o foi poss�vel gerar o relat�rio, pois voc� ainda n�o atendeu nenhum cliente!" << endl;
                    break;
                }
                else
                {
                    restaurante.exibirRelatorioDeAtendidos();
                    break;
                }

        }
        system("pause");

    }


    return 0;
}

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

#include "Restaurante.cpp"
#include "Mesa.cpp"
#include "Cliente.cpp"

int main(){
    setlocale(LC_ALL, "Portuguese");
    //Criando variáveis auxiliares
    int opcao;


    // Criar interface de interacaoo com o usuario
    while(1)
    {
        system("cls");

        cout << "===========================================" << endl
             << "=========== SISTEMA RESTAURANTE ===========" << endl
             << "===========================================" << endl << endl;

        // Perguntar qual a acao a ser realizada
        cout << "1 - Adiconar um cliente a fila de espera" << endl
             << "2 - Exibir fila de espera" << endl
             << "3 - Remover cliente da fila de espera" << endl
             << "4 - Atender um cliente" << endl
             << "5 - Exibir dados de um cliente" << endl
             << "6 - Gerar relatorio de clientes atendidos" << endl
             << "7 - Encerrar" << endl;
        cout << "Digite a opição desejada: " << endl;
        cin >> opcao;

        system("cls");

        // Encerrar o programa caso a opcao seja 7
        if (opcao == 7)
        {
            cout << "Encerrando sessão, obrigado!" << endl;
            break;
        }

        // Realizar as ações escolhidas pelo usuário
        switch(opcao)
        {
            case 1: // Adicionar cliente a fila de espera
                // Perguntar os atributos do cliente
                

                // Adicionar ao fim da fila - push_back
                
            case 2: // Exibir fila de espera
                // Percorrer toda a fila e exibir os clientes pertencentes
                

            case 3: // Remover um cliente da fila de espera
                // Exibir toda a fila e perguntar qual cliente deve ser removido - pelo código

                // Remover o cliente desejado usando o seu código
                

            case 4: // Atender um cliente
                // Pegar o primeiro cliente da fila de espera - begin()
                
                // Criar uma mesa para ele

                // Remover este cliente da fila de espera

                // Adicionar este cliente a lista de clientes atendidos

            case 5: // Exibir dados de um cliente
                // Perguntar o código do cliente 

                // Mostrar o cliente que possui este código
                
            case 6: // Gerar relatório de todos os clientes atendidos
                // Exibir todos os clientes atendidos existentes na lista de atendidos
                
                
        }
        system("pause");

    }


    return 0;
}

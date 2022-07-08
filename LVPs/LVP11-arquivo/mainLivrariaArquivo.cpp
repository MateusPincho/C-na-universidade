//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulacao de arquivos
//IDE: CodeBlocks   */

#include <iostream>
#include <string>
#include <iomanip>
#include <clocale>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

#include "LivroArquivo.cpp"
#include "FiccaoArquivo.cpp"
#include "NaoFiccaoArquivo.cpp"
#include "LivrariaArquivo.cpp"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    // criando variaveis auxiliares
    Livraria sistemaLivraria;

    string entradaUsuario;
    int entradaSenha;
    string entradaNomeLivro;
    string entradaNomeAutor;
    double entradaISBM;
    int entradaAnoPublicacao;
    float entradaPreco;
    string entradaDepartamento;
    string entradaAmbienteNarrativo;
    string entradaTipoMidia;
    int entradaPosicaoVendas;


    int opcao;

    /*//Acesso ao sistema - criacao de login
    cout << "===========================================" << endl
         << "============= FAZER CADASTRO ==============" << endl
         << "===========================================" << endl << endl;

    cout << "Vimos que este eh seu primeiro acesso ao sistema, vamos criar um login para voce" << endl;
    cout << "Digite um nome de usuario: (ATENCAO - Seu nome de usuario nao deve conter espacos)" << endl;
    cin >> entradaUsuario;
    cout << "Crie uma senha numerica para login: " << endl;
    cin >> entradaSenha;

    sistemaLivraria.setNomeUsuario(entradaUsuario);
    sistemaLivraria.setSenha(entradaSenha);

    cout << "Login configurado com sucesso!" << endl;
    system("pause");

    // Acesso ao sistema - fazer login
    entradaUsuario = "";
    entradaSenha = 0;
    system ("cls");

    cout << "===========================================" << endl
         << "=============== FAZER LOGIN ===============" << endl
         << "===========================================" << endl << endl;

    cout << "Informe seu nome de usuario: " << endl;
    cin >> entradaUsuario;
    // enquanto nao for informado o usuario corretamente, solicitar nova entrada
    while (entradaUsuario != sistemaLivraria.getNomeUsuario())
    {
        cout << "Nome de usuario informado nao foi encontrado no nosso banco de dados, tente novamente: " << endl;
        cin >> entradaUsuario;
    }

    cout << "Informe sua senha de login: " << endl;
    cin >> entradaSenha;
    // enquanto nao for informado a senha corretamente, solicitar nova entrada
    while (entradaSenha != sistemaLivraria.getSenha())
    {
        cout << "Senha informada incorreta, tente novamente: " << endl;
        cin >> entradaSenha;
    }
*/
    // Login confirmado - Acesso ao sistema
    while(1)
    {

        system("cls");

        cout << "===========================================" << endl
             << "============ SISTEMA LIVRARIA =============" << endl
             << "===========================================" << endl << endl;

        cout << "Bem vindo, " << sistemaLivraria.getNomeUsuario() << "!" << endl << endl;
        // menu de interacaoo
        cout << "1 - Cadastrar Livro de Ficaoo" << endl
             << "2 - Cadastrar Livro de Nao Ficcao" << endl
             << "3 - Exibir livros de Ficcao disponiveis" << endl
             << "4 - Exibir livros de Nao Ficcao disponiveis" << endl
             << "5 - Vender livros de Ficcao" << endl
             << "6 - Vender livros de Nao Ficcao" << endl
             << "7 - Encerrar" << endl;
        cout << "Digite a opcao desejada: " << endl;
        cin >> opcao;

        system("cls");

        if (opcao == 7)
        {
            cout << "Encerrando sessao, obrigado!" << endl;
            break;
        }

        switch(opcao)
        {

            // Cadastrar Livro de Ficcao
            case 1:
                // Inserir informacoes sobre o livro:
                cout << "Informe o nome do livro: " << endl;
                cin.ignore();
                getline(cin, entradaNomeLivro);

                // verificar se este livro nao ja existe
                if (sistemaLivraria.verificarNomeFiccao(entradaNomeLivro)==true)
                {
                    cout << "Este livro ja esta cadastrado no sistema!" << endl;
                    break;
                }
                else
                {
                    // inserir informacoes sobre o livro
                    cout << "Informe o ISBM do livro: " << endl;
                    cin >> entradaISBM;

                    cout << "Informe o nome do autor: " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeAutor);

                    cout << "Informe o ano de publicacao do livro: " << endl;
                    cin >> entradaAnoPublicacao;

                    cout << "Informe o departamento em que o se livro se situa: " << endl;
                    cin.ignore();
                    getline(cin, entradaDepartamento);

                    cout << "Informe o preco do livro: " << endl;
                    cin >> entradaPreco;

                    cout << "Informe o ambiente narrativo do livro: " << endl;
                    cin.ignore();
                    getline(cin, entradaAmbienteNarrativo);

                    // configurar livro a ser adicionado
                    Ficcao entradaLivroFiccao(entradaNomeLivro,entradaNomeAutor,entradaISBM,entradaAnoPublicacao,entradaPreco,entradaDepartamento,entradaAmbienteNarrativo);

                    // cadastrar livro no sistema
                    sistemaLivraria.cadastrarLivroFiccao(entradaLivroFiccao);
                    cout << "Livro cadastrado com sucesso!" << endl;
                    break;
                }

            // cadastrar livro nao ficcao
            case 2:
                cout << "Informe o nome do livro: " << endl;
                cin.ignore();
                getline(cin, entradaNomeLivro);

                // verificar se este livro ja nao existe
                if (sistemaLivraria.verificarNomeNaoFiccao(entradaNomeLivro)==true)
                {
                    cout << "Este livro ja esta cadastrado no sistema!" << endl;
                    break;
                }
                else
                {
                    // inserir informacoes sobre o livro
                    cout << "Informe o ISBM do livro: " << endl;
                    cin >> entradaISBM;

                    cout << "Informe o nome do autor: " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeAutor);

                    cout << "Informe o ano de publicacao do livro: " << endl;
                    cin >> entradaAnoPublicacao;

                    cout << "Informe o preco do livro: " << endl;
                    cin >> entradaPreco;

                    cout << "Informe o departamento em que o se livro se situa: " << endl;
                    cin.ignore();
                    getline(cin, entradaDepartamento);

                    cout << "Informe o tipo de midia do livro: " << endl;
                    cin >> entradaTipoMidia;

                    cout << "Informe o ambiente narrativo do livro: " << endl;
                    cin.ignore();
                    getline(cin, entradaAmbienteNarrativo);

                    cout << "Informe a posicao no ranking de vendas: " << endl;
                    cin >> entradaPosicaoVendas;

                    // configurar livro a ser adicionado

                    NaoFiccao entradaLivroNaoFiccao(entradaNomeLivro,entradaNomeAutor,entradaISBM,entradaAnoPublicacao,entradaPreco,entradaDepartamento,entradaAmbienteNarrativo,entradaTipoMidia,entradaPosicaoVendas);

                    // cadastrar livro no sistema
                    sistemaLivraria.cadastrarLivroNaoFiccao(entradaLivroNaoFiccao);
                    cout << "Livro cadastrado com sucesso!" << endl;
                    break;
                }

            // exibir livros de ficcao
            case 3:
                // verificar se ha livros para serem listados
                if (sistemaLivraria.verificarExistenciaFiccao() == false)
                {
                    cout << "Nao ha livros cadastrados!" << endl;
                    break;
                }
                else
                {
                    cout << "Os livros em estoque sao: " << endl;
                    sistemaLivraria.exibirFiccaoDisponivel();
                    break;
                }

            // exibir livros de nao ficcao
            case 4:
                // verificar se ha livros para serem listados
                if (sistemaLivraria.verificarExistenciaNaoFiccao() == false)
                {
                    cout << "Nao ha livros cadastrados!" << endl;
                    break;
                }
                else
                {
                    cout << "Os livros em estoque sao: " << endl;
                    sistemaLivraria.exibirNaoFiccaoDisponivel();
                    break;
                }

            // vender livros de ficcao
            case 5:
                // verificar se ha livros para serem vendidos
                if (sistemaLivraria.verificarExistenciaFiccao() == false)
                {
                    cout << "Nao ha livros cadastrados!" << endl;
                    break;
                }
                else
                {
                    cout << "Os livros disponoveis para venda sao: " << endl;
                    sistemaLivraria.exibirFiccaoDisponivel();
                    cout << endl << "Qual o nome do livro que voce deseja? " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeLivro);
                    // verificar se ha livros com este nome
                    if (sistemaLivraria.verificarNomeFiccao(entradaNomeLivro)==false)
                    {
                    cout << "O livro informado nao consta no nosso sistema, verifique se digitou corretamente" << endl;
                    break;
                    }
                    else
                    {
                        // passada as verificacoes, vender livro
                        sistemaLivraria.venderFiccao(entradaNomeLivro);
                        cout << "Livro vendido com sucesso!" << endl;
                        break;
                    }
                }

            case 6:
                // verificar se ha livros para serem vendidos
                if (sistemaLivraria.verificarExistenciaNaoFiccao() == false)
                {
                    cout << "Nao ha livros cadastrados!" << endl;
                    break;
                }
                else
                {
                    cout << "Os livros disponoveis para venda sao: " << endl;
                    sistemaLivraria.exibirNaoFiccaoDisponivel();
                    cout << endl << "Qual o nome do livro que voce deseja? " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeLivro);
                    // verificar se ha livros com este nome
                    if (sistemaLivraria.verificarNomeNaoFiccao(entradaNomeLivro)==false)
                    {
                    cout << "O livro informado nao consta no nosso sistema, verifique se digitou corretamente" << endl;
                    break;
                    }
                    else
                    {
                        // passada as verifica??es, vender livro
                        sistemaLivraria.venderNaoFiccao(entradaNomeLivro);
                        cout << "Livro vendido com sucesso!" << endl;
                        break;
                    }
                }






        }
        system("pause");
    }






    return 0;
}









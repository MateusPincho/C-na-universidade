//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#include <iostream>
#include <iomanip>
#include <clocale>
#include <cstdlib>
#include <vector>

using namespace std;

#include "Livro.cpp"
#include "Ficcao.cpp"
#include "NaoFiccao.cpp"
#include "Livraria.cpp"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // criando variaveis auxiliares
    Livraria sistemaLivraria;
    Ficcao entradaLivroFiccao;
    NaoFiccao entradaLivroNaoFiccao;

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

/*

    //Acesso ao sistema - criação de login
    cout << "===========================================" << endl
         << "============= FAZER CADASTRO ==============" << endl
         << "===========================================" << endl << endl;

    cout << "Vimos que este é seu primeiro acesso ao sistema, vamos criar um login para você" << endl;
    cout << "Digite um nome de usuário: (ATENÇÃO - Seu nome de usuário não deve conter espaços)" << endl;
    cin >> entradaUsuario;
    cout << "Crie uma senha númerica para login: " << endl;
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

    cout << "Informe seu nome de usuário: " << endl;
    cin >> entradaUsuario;

    while (entradaUsuario != sistemaLivraria.getNomeUsuario())
    {
        cout << "Nome de usuário informado não foi encontrado no nosso banco de dados, tente novamente: " << endl;
        cin >> entradaUsuario;
    }

    cout << "Informe sua senha de login: " << endl;
    cin >> entradaSenha;
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

        cout << "1 - Cadastrar Livro de Ficção" << endl
             << "2 - Cadastrar Livro de Não Ficção" << endl
             << "3 - Exibir livros de Ficção disponíveis" << endl
             << "4 - Exibir livros de Não Ficção disponíveis" << endl
             << "5 - Vender livros de Ficção" << endl
             << "6 - Vender livros de Não Ficção" << endl
             << "7 - Encerrar" << endl;
        cout << "Digite a opção desejada: " << endl;
        cin >> opcao;

        system("cls");

        if (opcao == 7)
        {
            cout << "Encerrando sessão, obrigado!" << endl;
            break;
        }

        switch(opcao)
        {

            // Cadastrar Livro de Ficção
            case 1:
                // Inserir informações sobre o livro:
                cout << "Informe o nome do livro: " << endl;
                cin.ignore();
                getline(cin, entradaNomeLivro);

                // verificar se este livro não ja existe
                if (sistemaLivraria.verificarNomeFiccao(entradaNomeLivro)==true)
                {
                    cout << "Este livro já está cadastrado no sistema!" << endl;
                    break;
                }
                else
                {
                    cout << "Informe o ISBM do livro: " << endl;
                    cin >> entradaISBM;

                    cout << "Informe o nome do autor: " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeAutor);

                    cout << "Informe o ano de publicação do livro: " << endl;
                    cin >> entradaAnoPublicacao;

                    cout << "Informe o departamento em que o se livro se situa: " << endl;
                    cin.ignore();
                    getline(cin, entradaDepartamento);

                    cout << "Informe o preço do livro: " << endl;
                    cin >> entradaPreco;

                    cout << "Informe o ambiente narrativo do livro: " << endl;
                    cin.ignore();
                    getline(cin, entradaAmbienteNarrativo);

                    // configurar livro a ser adicionado
                    entradaLivroFiccao.setNome(entradaNomeLivro);
                    entradaLivroFiccao.setAutor(entradaNomeAutor);
                    entradaLivroFiccao.setISBM(entradaISBM);
                    entradaLivroFiccao.setPublicacao(entradaAnoPublicacao);
                    entradaLivroFiccao.setPreco(entradaPreco);
                    entradaLivroFiccao.setDepartamento(entradaDepartamento);
                    entradaLivroFiccao.setAmbienteNarrativo(entradaAmbienteNarrativo);

                    // cadastrar livro no sistema
                    sistemaLivraria.cadastrarLivroFiccao(entradaLivroFiccao);
                    break;
                }

            // cadastrar livro não ficcao
            case 2:
                cout << "Informe o nome do livro: " << endl;
                cin.ignore();
                getline(cin, entradaNomeLivro);

                // verificar se este livro já não existe
                if (sistemaLivraria.verificarNomeNaoFiccao(entradaNomeLivro)==true)
                {
                    cout << "Este livro já está cadastrado no sistema!" << endl;
                    break;
                }
                else
                {
                    cout << "Informe o ISBM do livro: " << endl;
                    cin >> entradaISBM;

                    cout << "Informe o nome do autor: " << endl;
                    cin.ignore();
                    getline(cin, entradaNomeAutor);

                    cout << "Informe o ano de publicação do livro: " << endl;
                    cin >> entradaAnoPublicacao;

                    cout << "Informe o preço do livro: " << endl;
                    cin >> entradaPreco;

                    cout << "Informe o departamento em que o se livro se situa: " << endl;
                    cin.ignore();
                    getline(cin, entradaDepartamento);

                    cout << "Informe o tipo de mídia do livro: " << endl;
                    cin >> entradaTipoMidia;

                    cout << "Informe o ambiente narrativo do livro: " << endl;
                    cin.ignore();
                    getline(cin, entradaAmbienteNarrativo);

                    cout << "Informe a posição no ranking de vendas: " << endl;
                    cin >> entradaPosicaoVendas;

                    // configurar livro a ser adicionado
                    entradaLivroNaoFiccao.setNome(entradaNomeLivro);
                    entradaLivroNaoFiccao.setAutor(entradaNomeAutor);
                    entradaLivroNaoFiccao.setISBM(entradaISBM);
                    entradaLivroNaoFiccao.setPublicacao(entradaAnoPublicacao);
                    entradaLivroNaoFiccao.setPreco(entradaPreco);
                    entradaLivroNaoFiccao.setDepartamento(entradaDepartamento);
                    entradaLivroNaoFiccao.setAmbienteNarrativo(entradaAmbienteNarrativo);
                    entradaLivroNaoFiccao.setTipoMidia(entradaTipoMidia);
                    entradaLivroNaoFiccao.setPosicaoVendas(entradaPosicaoVendas);
                    entradaLivroNaoFiccao.setClassificacaoVendas();
                    // cadastrar livro no sistema
                    sistemaLivraria.cadastrarLivroNaoFiccao(entradaLivroNaoFiccao);
                    break;
                }

            // exibir livros de ficcao
            case 3:
                if (sistemaLivraria.verificarExistenciaFiccao() == false)
                {
                    cout << "Não há livros cadastrados!" << endl;
                    break;
                }
                else
                {
                    // verificar se há livros para serem listados
                    cout << "Os livros em estoque são: " << endl;
                    sistemaLivraria.exibirFiccaoDisponivel();
                    break;
                }

            // exibir livros de nao ficcao
            case 4:
                if (sistemaLivraria.verificarExistenciaNaoFiccao() == false)
                {
                    cout << "Não há livros cadastrados!" << endl;
                    break;
                }
                else
                {
                    // verificar se há livros para serem listados
                    cout << "Os livros em estoque são: " << endl;
                    sistemaLivraria.exibirNaoFiccaoDisponivel();
                    break;
                }





        }
        system("pause");
    }






    return 0;
}


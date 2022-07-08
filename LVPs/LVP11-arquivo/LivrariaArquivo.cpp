//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
//IDE: CodeBlocks   */

#include "LivrariaArquivo.h"

// construtor que ira dar o input no arquivo de dados e armanezar na lista os livros que já foram cadastrados
Livraria::Livraria()
{
    // variaveis que irão armezenar temporariamente os valores do arquivo
    string nome, nomeAutor, departamento, ambienteNarrativo, tipoMidia, classificacaoVendas;
    double ISBM;
    int anoPublicacao, posicaoVendas;
    float preco;

    // PARA LIVROS DE FICCAO
    // arquivo configurado para leitura dos dados
    ifstream arquivoLivrosFiccao;
    arquivoLivrosFiccao.open("cadastroLivrosFiccao.txt");

    // salvando no vector os livros de ficcao ja criados
    if (arquivoLivrosFiccao.is_open()) // se o arquivo abrir
    {
        while (!arquivoLivrosFiccao.eof()) // enquanto não for o fim do arquivo
        {
            getline(arquivoLivrosFiccao,nome);

            if(arquivoLivrosFiccao.eof())
                break;

            getline(arquivoLivrosFiccao,nomeAutor);
            arquivoLivrosFiccao >> ISBM;
            arquivoLivrosFiccao >> anoPublicacao;
            arquivoLivrosFiccao >> preco;

            arquivoLivrosFiccao.ignore();

            getline(arquivoLivrosFiccao,departamento);
            getline(arquivoLivrosFiccao,ambienteNarrativo);

            Ficcao livroFAuxiliar(nome,nomeAutor,ISBM,anoPublicacao,preco,departamento,ambienteNarrativo);
            livrosFiccao.push_back(livroFAuxiliar);
        }
    }
    else
    {
        cout << "Não foi possível abrir o arquivo" << endl;
    }

    // PARA LIVROS DE NAO FICCAO
    // arquivo configurado para leitura dos dados
    ifstream arquivoLivrosNaoFiccao;
    arquivoLivrosNaoFiccao.open("cadastroNaoFiccao.txt");

    // salvando no vector os livros de ficcao ja criados
    if(arquivoLivrosNaoFiccao.is_open()) // se o arquivo abrir
    {
        while(!arquivoLivrosNaoFiccao.eof()) // enquanto não for fim de arquivo
        {
            getline(arquivoLivrosNaoFiccao,nome);

            if(arquivoLivrosNaoFiccao.eof())
                break;

            getline(arquivoLivrosNaoFiccao,nomeAutor);
            arquivoLivrosNaoFiccao >> ISBM;
            arquivoLivrosNaoFiccao >> anoPublicacao;
            arquivoLivrosNaoFiccao >> preco;
            arquivoLivrosNaoFiccao >> posicaoVendas;

            arquivoLivrosNaoFiccao.ignore();

            getline(arquivoLivrosNaoFiccao,departamento);
            getline(arquivoLivrosNaoFiccao,ambienteNarrativo);
            getline(arquivoLivrosNaoFiccao,tipoMidia);

            NaoFiccao livroNFAuxiliar(nome,nomeAutor,ISBM,anoPublicacao,preco,departamento,ambienteNarrativo,tipoMidia,posicaoVendas);
            livrosNaoFiccao.push_back(livroNFAuxiliar);
        }
    }
    else
    {
        cout << "Nao foi possível abrir o arquivo" << endl;
    }

}
//destrutor que irá salvar todas as alterações na lista de livros no arquivo txt
Livraria::~Livraria()
{
    // PARA LIVROS DE FICCAO
    // arquivo configurado para escrita de dados
    ofstream arquivoLivrosFiccao;
    arquivoLivrosFiccao.open("cadastroLivrosFiccao.txt", std::ios::trunc);

    if(arquivoLivrosFiccao.is_open())
    {
        for (int i = 0; i<livrosFiccao.size(); i++)
        {
            arquivoLivrosFiccao << livrosFiccao[i].getNome() << endl;
            arquivoLivrosFiccao << livrosFiccao[i].getAutor() << endl;
            arquivoLivrosFiccao << livrosFiccao[i].getISBM() << endl;
            arquivoLivrosFiccao << livrosFiccao[i].getPublicacao() << endl;
            arquivoLivrosFiccao << livrosFiccao[i].getPreco() << endl;
            arquivoLivrosFiccao << livrosFiccao[i].getDepartamento() << endl;
            arquivoLivrosFiccao << livrosFiccao[i].getAmbienteNarrativo() <<endl;
        }
        arquivoLivrosFiccao.close();
    }
    else
    {
        cout << "Não foi possível gravar o arquivo" << endl;
    }

    // PARA LIVROS DE NAO FICCAO
    // arquivo configurado para leitura de dados
    ofstream arquivoLivrosNaoFiccao;
    arquivoLivrosNaoFiccao.open("cadastroNaoFiccao.txt", std::ios::trunc);

    if(arquivoLivrosNaoFiccao.is_open())
    {
        for (int i = 0; i < livrosNaoFiccao.size(); i++)
        {
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getNome() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getAutor() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getISBM() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getPublicacao() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getPreco() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getPosicaoVendas() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getDepartamento() << endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getAmbienteNarrativo() <<endl;
            arquivoLivrosNaoFiccao << livrosNaoFiccao[i].getTipoMidia() << endl;

        }
        arquivoLivrosNaoFiccao.close();
    }
    else
    {
        cout << "Não foi possível gravar o arquivo" << endl;
    }
}

//metodo set para usuario
void Livraria::setNomeUsuario(string nomeUsuario)
{
    this-> nomeUsuario = nomeUsuario;
}
//metodo set para senha
void Livraria::setSenha(int senhaUsuario)
{
    this-> senhaUsuario = senhaUsuario;
}
//metodo get para usuario
string Livraria::getNomeUsuario()
{
    return nomeUsuario;
}
//metodo set para senha
int Livraria::getSenha()
{
    return senhaUsuario;
}

// METODOS DE VERIFICACAO

// metodos de verificacao da existencia de um livro de ficcao pelo seu nome
bool Livraria::verificarNomeFiccao(string nome)
{
    // variavel auxiliar
    bool existencia;

    for (int i = 0; i < livrosFiccao.size(); i++)
    {
        if(livrosFiccao[i].getNome() == nome)
        {
            existencia = true;                          // Caso encontre, existencia é True
        }

    }
    if (existencia != true)                             // Caso nao seja encotrado, existencia é false
        existencia = false;

    if(existencia == true)                              // Realizar o retorno da função verificaNome()
        return true;
    else
        return false;
}

// metodos de verificacao da existencia de um livro de  nao ficcao pelo seu nome
bool Livraria::verificarNomeNaoFiccao(string nome)
{
    bool existencia;
    for (int i = 0; i < livrosNaoFiccao.size(); i++)
    {
        if(livrosNaoFiccao[i].getNome() == nome)
        {
            existencia = true;                          // Caso encontre, existencia é True
            break;
        }
    }
    if (existencia != true)                             // Caso nao seja encotrado, existencia é false
        existencia = false;

    if (existencia)                                     // Realizar o retorno da funcao verificaNome()
        return true;
    else
        return false;
}

// metodo para verificar se ja foi cadastrado algum livro (verificar se o vetor não esta vazio)
bool Livraria::verificarExistenciaFiccao()
{
    if(livrosFiccao.empty())
        return false;                                   // Se o vetor estiver vazio, entao nao ha livros cadastrados
    else
        return true;                                     // Se o vetor tiver algo, significa que ja foram cadastrados livros

}

// metodo para verificar se ja foi cadastrado algum livro (verificar se o vetor não esta vazio)
bool Livraria::verificarExistenciaNaoFiccao()
{
    if(livrosNaoFiccao.empty())
        return false;                                    // Se o vetor estiver vazio, entao nao ha livros cadastrados
    else
        return true;                                     // Se o vetor tiver algo, significa que ja foram cadastrados livros

}

// METODOS DO SISTEMA

// metodo para cadastro de livros de ficcao
void Livraria::cadastrarLivroFiccao(Ficcao livro)
{
    //lerArquivoFiccao();
    livrosFiccao.push_back(livro);              // adicionar livro a lista
    //salvarArquivoFiccao();
}

// metodo para cadastro de livros de nao ficcao
void Livraria::cadastrarLivroNaoFiccao(NaoFiccao livro)
{
    livrosNaoFiccao.push_back(livro);          // adicionar livro a lista
}

// metodo para exibir por ordem alfabetica todos os livros de ficcao disponiveis
void Livraria::exibirFiccaoDisponivel()
{
    // ordenar alfabeticamente pelo metodo seletion sort
    for(int prev = 0; prev < livrosFiccao.size()-1; prev ++)
    {
        for(int next = prev + 1; next < livrosFiccao.size(); next ++)
        {
            Ficcao auxiliar = livrosFiccao[prev];
            if (livrosFiccao[next].getNome() < livrosFiccao[prev].getNome())
            {
                livrosFiccao[prev] = livrosFiccao[next];
                livrosFiccao[next] = auxiliar;
            }
        }
    }

    for (int i = 0; i < livrosFiccao.size(); i++)                           // percorre toda a lista e exibe os atributos do livro da posicao i
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << livrosFiccao[i].getNome() << endl;
        cout << "Autor: " << livrosFiccao[i].getAutor() << endl;
        cout << fixed << setprecision(2) << "ISBM: " << livrosFiccao[i].getISBM()<< endl;
        cout << "Ano de Publicacaoo: " << livrosFiccao[i].getPublicacao() << endl;
        cout << "Preco: " << livrosFiccao[i].getPreco() << " Reais" << endl;
        cout << "Departamento: " << livrosFiccao[i].getDepartamento() << endl;
        cout << "Ambiente Narrativo: " << livrosFiccao[i].getAmbienteNarrativo() << endl;
     }
    cout << "===========================================" << endl;
}

// metodo para exibir por ordem de melhor ranking todos os livros de nao ficcao disponiveis
void Livraria::exibirNaoFiccaoDisponivel()
{
    // ordenar lista pelo metodo selection sort
    for(int prev = 0; prev < livrosNaoFiccao.size()-1; prev ++)
    {
        for(int next = prev + 1; next < livrosNaoFiccao.size(); next ++)
        {
            NaoFiccao auxiliar = livrosNaoFiccao[prev];
            if (livrosNaoFiccao[next].getPosicaoVendas() < livrosNaoFiccao[prev].getPosicaoVendas())
            {
                livrosNaoFiccao[prev] = livrosNaoFiccao[next];
                livrosNaoFiccao[next] = auxiliar;
            }
        }
    }
        for (int i = 0; i < livrosNaoFiccao.size(); i++)                    // percorre toda a lista e exibe os atributos do livro da posi��o i
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << livrosNaoFiccao[i].getNome() << endl;
        cout << "Autor: " << livrosNaoFiccao[i].getAutor() << endl;
        cout << fixed << setprecision(2) << "ISBM: " << livrosNaoFiccao[i].getISBM()<< endl;
        cout << "Ano de Publicacao: " << livrosNaoFiccao[i].getPublicacao() << endl;
        cout << "Preco: " << livrosNaoFiccao[i].getPreco() << " Reais" << endl;
        cout << "Departamento: " << livrosNaoFiccao[i].getDepartamento() << endl;
        cout << "Ambiente Narrativo: " << livrosNaoFiccao[i].getAmbienteNarrativo() << endl;
        cout << "Tipo de midia: " << livrosNaoFiccao[i].getTipoMidia() << endl;
        cout << "Posicao no ranking de Vendas: " << livrosNaoFiccao[i].getPosicaoVendas() << endl;
        cout << "Classificacao no Ranking: " << livrosNaoFiccao[i].getClassificacaoVendas() << endl;
     }
    cout << "===========================================" << endl;
}
// Metodo para venda de Livro - retira livro da lista
// deve ser executado depois de verificar que nao ha livros repetidos
void Livraria::venderFiccao(string nome)
{
    // percorrer toda a lista em busca do nome
    for (int i =0; i < livrosFiccao.size(); i++)
    {
        // caso um livro tenha o mesmo nome informado
        if(livrosFiccao[i].getNome() == nome)
        {
            // retirar este livro da lista pq ele foi vendido
            livrosFiccao.erase(livrosFiccao.begin()+i);
        }
    }
}

// Metodo para venda de Livro - retira livro da lista
// deve ser executado depois de verificar que nao ha livros repetidos
void Livraria::venderNaoFiccao(string nome)
{
    // percorrer toda a lista em busca do nome
    for (int i =0; i < livrosNaoFiccao.size(); i++)
    {
        // caso um livro tenha o mesmo nome informado
        if(livrosNaoFiccao[i].getNome() == nome)
        {
            // retirar este livro da lista pq ele foi vendido
            livrosNaoFiccao.erase(livrosNaoFiccao.begin()+i);
        }
    }
}


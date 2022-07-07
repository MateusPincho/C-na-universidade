//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#include "Livraria.h"

// construtor vazio
Livraria::Livraria(){}

//metodos set e get para usuario

void Livraria::setNomeUsuario(string nomeUsuario)
{
    this-> nomeUsuario = nomeUsuario;
}

void Livraria::setSenha(int senhaUsuario)
{
    this-> senhaUsuario = senhaUsuario;
}

string Livraria::getNomeUsuario()
{
    return nomeUsuario;
}

int Livraria::getSenha()
{
    return senhaUsuario;
}

// metodos de verificacao
bool Livraria::verificarNomeFiccao(string nome)
{

    bool existencia;

    for (int i = 0; i < livrosFiccao.size(); i++)
    {
        if(livrosFiccao[i].getNome() == nome)
        {
            existencia = true;                          // Caso encontre, existencia é True
        }

    }
    if (existencia != true)                             // Caso não seja encotrado, existencia é false
        existencia = false;

    if(existencia == true)                              // Realizar o retorno da função verificaNome()
        return true;
    else
        return false;
}


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
    if (existencia != true)                             // Caso não seja encotrado, existencia é false
        existencia = false;

    if (existencia)                                     // Realizar o retorno da função verificaNome()
        return true;
    else
        return false;
}

bool Livraria::verificarExistenciaFiccao()
{
    if(livrosFiccao.empty())
        return false;                                   // Se o vetor estiver vazio, então não há livros cadastrados
    else
        return true;                                     // Se o vetor tiver algo, significa que ja foram cadastrados livros

}

bool Livraria::verificarExistenciaNaoFiccao()
{
    if(livrosNaoFiccao.empty())
        return false;                                    // Se o vetor estiver vazio, então não há livros cadastrados
    else
        return true;                                     // Se o vetor tiver algo, significa que ja foram cadastrados livros

}


// metodos do sistema

void Livraria::cadastrarLivroFiccao(Ficcao livro)
{
    livrosFiccao.push_back(livro);              // adicionar livro a lista
}

void Livraria::cadastrarLivroNaoFiccao(NaoFiccao livro)
{
    livrosNaoFiccao.push_back(livro);          // adicionar livro a lista
}

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

    for (int i = 0; i < livrosFiccao.size(); i++)                           // percorre toda a lista e exibe os atributos do livro da posição i
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << livrosFiccao[i].getNome() << endl;
        cout << "Autor: " << livrosFiccao[i].getAutor() << endl;
        cout << fixed << setprecision(2) << "ISBM: " << livrosFiccao[i].getISBM()<< endl;
        cout << "Ano de Publicação: " << livrosFiccao[i].getPublicacao() << endl;
        cout << "Preço: " << livrosFiccao[i].getPreco() << " Reais" << endl;
        cout << "Departamento: " << livrosFiccao[i].getDepartamento() << endl;
        cout << "Ambiente Narrativo: " << livrosFiccao[i].getAmbienteNarrativo() << endl;
     }
    cout << "===========================================" << endl;
}

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

    for (int i = 0; i < livrosNaoFiccao.size(); i++)                    // percorre toda a lista e exibe os atributos do livro da posição i
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << livrosNaoFiccao[i].getNome() << endl;
        cout << "Autor: " << livrosNaoFiccao[i].getAutor() << endl;
        cout << fixed << setprecision(2) << "ISBM: " << livrosNaoFiccao[i].getISBM()<< endl;
        cout << "Ano de Publicação: " << livrosNaoFiccao[i].getPublicacao() << endl;
        cout << "Preço: " << livrosNaoFiccao[i].getPreco() << " Reais" << endl;
        cout << "Departamento: " << livrosNaoFiccao[i].getDepartamento() << endl;
        cout << "Ambiente Narrativo: " << livrosNaoFiccao[i].getAmbienteNarrativo() << endl;
        cout << "Tipo de mídia: " << livrosNaoFiccao[i].getTipoMidia() << endl;
        cout << "Posição no ranking de Vendas: " << livrosNaoFiccao[i].getPosicaoVendas() << endl;
        cout << "Classificação no Ranking: " << livrosNaoFiccao[i].getClassificacaoVendas() << endl;
     }
    cout << "===========================================" << endl;
}

// deve ser executado depois de verificar que não há livros repetidos
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

// deve ser executado depois de verificar que não há livros repetidos
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

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
            existencia = true;                          // Caso encontre, retorna True
        }

    }
    if (existencia != true)
        existencia = false;

    if(existencia == true)
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
            existencia = true;                          // Caso encontre, retorna True
            break;
        }
    }
    if (existencia != true)
        existencia = false;

    if (existencia)                                     // Realizar o retorno da fun��o verificaNome()
        return true;
    else
        return false;
}

bool Livraria::verificarExistenciaFiccao()
{
    if(livrosFiccao.empty())
        return false;                                   // Se o vetor estiver vazio, ent�o n�o h� livros cadastrados
    else
        return true;                                     // Se o vetor tiver algo, significa que ja foram cadastrados livros

}

bool Livraria::verificarExistenciaNaoFiccao()
{
    if(livrosNaoFiccao.empty())
        return false;                                    // Se o vetor estiver vazio, ent�o n�o h� livros cadastrados
    else
        return true;                                     // Se o vetor tiver algo, significa que ja foram cadastrados livros

}

// metodos do sistema

void Livraria::cadastrarLivroFiccao(Ficcao livro)
{
    livrosFiccao.push_back(livro);
}

void Livraria::cadastrarLivroNaoFiccao(NaoFiccao livro)
{
    livrosNaoFiccao.push_back(livro);
}

void Livraria::exibirFiccaoDisponivel()
{
    for (int i = 0; i < livrosFiccao.size(); i++)
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << livrosFiccao[i].getNome() << endl;
        cout << "Autor: " << livrosFiccao[i].getAutor() << endl;
        cout << fixed << setprecision(2) << "ISBM: " << livrosFiccao[i].getISBM()<< endl;
        cout << "Ano de Publica��o: " << livrosFiccao[i].getPublicacao() << endl;
        cout << "Pre�o: " << livrosFiccao[i].getPreco() << " Reais" << endl;
        cout << "Departamento: " << livrosFiccao[i].getDepartamento() << endl;
        cout << "Ambiente Narrativo: " << livrosFiccao[i].getAmbienteNarrativo() << endl;
     }
    cout << "===========================================" << endl;
}

void Livraria::exibirNaoFiccaoDisponivel()
{
    for (int i = 0; i < livrosNaoFiccao.size(); i++)
    {
        cout << "===========================================" << endl;
        cout << "Nome: " << livrosNaoFiccao[i].getNome() << endl;
        cout << "Autor: " << livrosNaoFiccao[i].getAutor() << endl;
        cout << fixed << setprecision(2) << "ISBM: " << livrosNaoFiccao[i].getISBM()<< endl;
        cout << "Ano de Publica��o: " << livrosNaoFiccao[i].getPublicacao() << endl;
        cout << "Pre�o: " << livrosNaoFiccao[i].getPreco() << " Reais" << endl;
        cout << "Departamento: " << livrosNaoFiccao[i].getDepartamento() << endl;
        cout << "Ambiente Narrativo: " << livrosNaoFiccao[i].getAmbienteNarrativo() << endl;
        cout << "Tipo de m�dia: " << livrosNaoFiccao[i].getTipoMidia() << endl;
        cout << "Posi��o no ranking de Vendas: " << livrosNaoFiccao[i].getPosicaoVendas() << endl;
        cout << "Classifica��o no Ranking: " << livrosNaoFiccao[i].getClassificacaoVendas() << endl;
     }
    cout << "===========================================" << endl;
}

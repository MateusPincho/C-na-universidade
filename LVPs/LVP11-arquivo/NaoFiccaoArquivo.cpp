//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
//IDE: CodeBlocks   */

#include "NaoFiccaoArquivo.h"

// construtor da classe NaoFiccao
NaoFiccao::NaoFiccao(string nome, string nomeAutor, double ISBM, int anoPublicacao, float preco, string departamento, string ambienteNarrativo, string tipoMidia, int posicaoVendas)
{
    this -> nome = nome;
    this -> nomeAutor = nomeAutor;
    this -> ISBM = ISBM;
    this -> anoPublicacao = anoPublicacao;
    this -> preco = preco;
    this -> departamento = departamento;
    this -> ambienteNarrativo = ambienteNarrativo;
    this -> tipoMidia = tipoMidia;
    this -> posicaoVendas = posicaoVendas;

    if (posicaoVendas < 11)
        this -> classificacaoVendas = "Otima";

    else if (posicaoVendas > 10 && posicaoVendas < 21)
        this -> classificacaoVendas = "Muito boa";

    else
        this -> classificacaoVendas = "Sem classificacao";
}

// metodos set de atributo
void NaoFiccao::setDepartamento(string departamento)
{
    this -> departamento = departamento;
}

void NaoFiccao::setAmbienteNarrativo(string ambienteNarrativo)
{
    this -> ambienteNarrativo = ambienteNarrativo;
}

void NaoFiccao::setTipoMidia(string tipoMidia)
{
    this -> tipoMidia = tipoMidia;
}

void NaoFiccao::setPosicaoVendas(int posicaoVendas)
{
    this -> posicaoVendas = posicaoVendas;
}

void NaoFiccao::setClassificacaoVendas()
{
    if (posicaoVendas < 11)
        this -> classificacaoVendas = "Otima";

    else if (posicaoVendas > 10 && posicaoVendas < 21)
        this ->classificacaoVendas = "Muito boa";

    else
        this ->classificacaoVendas = "Sem classificacao";


}

// metodos get de atributo
string NaoFiccao::getDepartamento() const
{
    return departamento;
}

string NaoFiccao::getAmbienteNarrativo() const
{
    return ambienteNarrativo;
}

string NaoFiccao::getTipoMidia() const
{
    return tipoMidia;
}

int NaoFiccao::getPosicaoVendas() const
{
    return posicaoVendas;
}

string NaoFiccao::getClassificacaoVendas() const
{
    return classificacaoVendas;
}

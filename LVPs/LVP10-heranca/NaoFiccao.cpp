//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#include "NaoFiccao.h"

NaoFiccao::NaoFiccao()
{
    nome = "";
    nomeAutor = "";
    ISBM = 0;
    anoPublicao = 0;
    preco = 0;
    departamento = "";
    ambienteNarrativo = "";
    tipoMidia = "";
    posicaoVendas = 0;
    classificacaoVendas = "";
}

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

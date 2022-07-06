//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#ifndef NAOFICCAO_H
#define NAOFICCAO_H
// classe é derivada de livro
class NaoFiccao : public Livro
{
    string departamento;
    string ambienteNarrativo;
    string tipoMidia;
    int posicaoVendas;
    string classificacaoVendas;
public:
    NaoFiccao();
    // metodos set de atributo
    void setDepartamento(string);
    void setAmbienteNarrativo(string);
    void setTipoMidia(string);
    void setPosicaoVendas(int);
    void setClassificacaoVendas();
    // metodos get de atributo
    string getDepartamento()const;
    string getAmbienteNarrativo()const;
    string getTipoMidia()const;
    int getPosicaoVendas()const;
    string getClassificacaoVendas()const;

} ;

#endif // NAOFICCAO_H

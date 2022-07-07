//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
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
    // construtor por argumento default
    NaoFiccao(string = "", string = "", double = 0, int = 0, float = 0, string = "", string = "", string = "", int = 0);
    
    // metodos set de atributo
    void setDepartamento(string);
    // metodos set de atributo
    void setAmbienteNarrativo(string);
    // metodos set de atributo
    void setTipoMidia(string);
    // metodos set de atributo
    void setPosicaoVendas(int);
    // metodos set de atributo
    void setClassificacaoVendas();

    // metodos get de atributo
    string getDepartamento()const;
    // metodos get de atributo
    string getAmbienteNarrativo()const;
    // metodos get de atributo
    string getTipoMidia()const;
    // metodos get de atributo
    int getPosicaoVendas()const;
    // metodos get de atributo
    string getClassificacaoVendas()const;

} ;

#endif // NAOFICCAO_H

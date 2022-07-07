//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-11 - Manipulação de arquivos
//IDE: CodeBlocks   */

#ifndef FICCAO_H
#define FICCAO_H
// classe é derivada de livro
class Ficcao : public Livro
{
    string departamento;    // é o tipo (cientifica, romance, fantasia...)
    string ambienteNarrativo;
public:
    // construtor por argumento default
    Ficcao(string = "", string = "", double = 0, int = 0, float = 0, string = "", string = "");
    
    // metodos set de atributo
    void setDepartamento(string);
    // metodos set de atributo
    void setAmbienteNarrativo(string);

    // metodos get de atributo
    string getDepartamento()const;
    // metodos get de atributo
    string getAmbienteNarrativo()const;
};
#endif // FICCAO_H

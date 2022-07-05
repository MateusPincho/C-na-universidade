//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-10 - Livraria
//IDE: CodeBlocks   */

#ifndef FICCAO_H
#define FICCAO_H

class Ficcao : public Livro
{
    string departamento;    // é o tipo (cientifica, romance, fantasia...)
    string ambienteNarrativo;
public:
    Ficcao();
    void setDepartamento(string);
    void setAmbienteNarrativo(string);

    string getDepartamento()const;
    string getAmbienteNarrativo()const;
};
#endif // FICCAO_H

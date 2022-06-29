//* Discente: Mateus Pincho de Oliveira
//Matricula: 121110103
//Periodo: 21.2
//Curso: Engenharia Eletrica
//Disciplina: Tecnicas de Programacao
//Turma: 02
//Professor: Marcus Salerno
//Unidade 07: LVP-09 - RESTAURANTE
//IDE: VSCODE   */

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente
{
    string nome;
    int codigo;
    int acompanhantes;
public:
    // construtores
    Cliente(string, int, int);
    Cliente();

    // metodos set
    void setNome(string);
    void setCodigo(int);
    void setAcompanhates(int);
    //metodos get
    string getNome();
    int getCodigo();
    int getAcompanhantes();

};
#endif

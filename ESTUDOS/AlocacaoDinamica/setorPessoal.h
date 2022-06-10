#ifndef SETORPESSOAL_H
#define SETORPESSOAL_H

class SetorPessoal{
    Funcionario *funcionarios; //nome da lista 
    unsigned num;  //unsigned = inteiro sem sinal
public:
    SetorPessoal(int);
    void addFunc(Funcionario);
    //imprime o nome e sal�rio de todos os funcion�rios
    void imprimeFolha();
    //imprime o valor total da folha de pagamento - soma de todos os sal�rios
    float valorFolha();
    //retorna o nome funcion�rio com maior sal�rio
    string MaiorSalario();
    //imprime todos os funcion�rios de um departamento (passado por par�metro - int � o n�mero do departamento)
    void mostraPorDep(int);
    //Imprime todos os funcion�rios que executam uma fun��o (passada por par�metro - string � o nome da fun��o)
    void imprimePorFuncao(string);
    //Imprime a lista de funcion�rios por ordem crescente de sal�rio
    void imprimePorSalario();
    
    //Exemplo extra - compara nomes com uma lista fornecida pelo usu�rio e retona a quantidade de nomes iguais
    //int comparaNomes(string[]);


    ~SetorPessoal();
};


#endif // SETORPESSOAL_H
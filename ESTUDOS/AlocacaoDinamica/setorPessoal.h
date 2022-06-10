#ifndef SETORPESSOAL_H
#define SETORPESSOAL_H

class SetorPessoal{
    Funcionario *funcionarios; //nome da lista 
    unsigned num;  //unsigned = inteiro sem sinal
public:
    SetorPessoal(int);
    void addFunc(Funcionario);
    //imprime o nome e salário de todos os funcionários
    void imprimeFolha();
    //imprime o valor total da folha de pagamento - soma de todos os salários
    float valorFolha();
    //retorna o nome funcionário com maior salário
    string MaiorSalario();
    //imprime todos os funcionários de um departamento (passado por parâmetro - int é o número do departamento)
    void mostraPorDep(int);
    //Imprime todos os funcionários que executam uma função (passada por parâmetro - string é o nome da função)
    void imprimePorFuncao(string);
    //Imprime a lista de funcionários por ordem crescente de salário
    void imprimePorSalario();
    
    //Exemplo extra - compara nomes com uma lista fornecida pelo usuário e retona a quantidade de nomes iguais
    //int comparaNomes(string[]);


    ~SetorPessoal();
};


#endif // SETORPESSOAL_H
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario{
	int matricula;
	string nome;
	int departamento;
	float salario;
	string funcao;
public:
	Funcionario(int, string, int, float, string);
	Funcionario();

	void setMat(int);
	void setNome(string);
	void setDep(int);
	void setSal(float);
	void setFunc(string);
	
	int getMat();
	string getNome();
	int getDep();
	float getSal();
	string getFunc();
};

#endif // FUNCIONARIO_H

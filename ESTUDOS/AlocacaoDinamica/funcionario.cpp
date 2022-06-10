#include "funcionario.h"

Funcionario::Funcionario(int matricula, string nome, int departamento, float salario, 
				string funcao){
	this->matricula = matricula;
	this->nome = nome;
	this->departamento = departamento;
	this->salario = salario;
	this->funcao = funcao;
}
Funcionario::Funcionario(){
	this->matricula = 0;
	this->nome = "";
	this->departamento = 0;
	this->salario = 0;
	this->funcao = "";
}

void Funcionario::setMat(int matricula){
	this->matricula = matricula;
}
void Funcionario::setNome(string nome){
	this->nome = nome;
}
void Funcionario::setDep(int departamento){
	this->departamento = departamento;
}
void Funcionario::setSal(float salario){
	this->salario = salario;
}
void Funcionario::setFunc(string funcao){
	this->funcao = funcao;
}
	
int Funcionario::getMat(){
	return matricula;
}
string Funcionario::getNome(){
	return nome;
}
int Funcionario::getDep(){
	return departamento;
}
float Funcionario::getSal(){
	return salario;
}
string Funcionario::getFunc(){
	return funcao;
}

#include <iostream>
//#include <iomanip>
//#include <cstdlib>
#include <cstring>
#include <clocale>

using namespace std;

#include "funcionario2.cpp"

//main usada para testar a classe funcion�rio
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Funcionario func1(1234, "jose", 1, 1250.00, "operador de m�quina"), func2;
	func2.setMat(4321);
	func2.setNome("Maria");
	func2.setDep(2);
	func2.setSal(5000.0);
	func2.setFunc("gerente");
	
	cout<<"Fun��o: "<<func1.getFunc()<<endl;
	cout<<"Matr�cula: "<<func1.getMat()<<endl;
	cout<<"Nome: "<<func1.getNome()<<endl;
	cout<<"Departamento: "<<func1.getDep()<<endl;
	cout<<"Sal�rio: "<<func1.getSal()<<endl<<endl;

	cout<<"Fun��o: "<<func2.getFunc()<<endl;
	cout<<"Matr�cula: "<<func2.getMat()<<endl;
	cout<<"Nome: "<<func2.getNome()<<endl;
	cout<<"Departamento: "<<func2.getDep()<<endl;
	cout<<"Sal�rio: "<<func2.getSal()<<endl;

	return 0;
}
	
	
	

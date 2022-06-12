#include <iostream>
using namespace std;
#include "Produto.cpp"

int main()
{
    Produto p1("Carne de sol",3);
    cout << "O produto eh "<< p1.getNome() << " e sua quantidade eh: " << p1.getQuantidade()<< endl ;

    string nome;
    int quanti;

    cout << "Digite o nome: " << endl;
    cin.ignore();
    getline(cin, nome);
    cout << "Quantidade: "<< endl;
    cin >> quanti;
    p1.setNome(nome);
    p1.setQuantidade(quanti);

    cout << "O novo produto eh "<< p1.getNome() << " e sua quantidade eh: " << p1.getQuantidade() ;
}

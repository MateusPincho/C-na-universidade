#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma_pares = 0, soma_impares = 0, i, n;

    for(i = 0;i < 10;i++){
        cout << "Digite um n�mero:";
        cin >> n;

        if (n % 2 == 0){
            soma_pares = soma_pares + n;
        } else{
            soma_impares = soma_impares + n;
        }

    }

    cout << "A soma dos pares �: " <<soma_pares<<endl;
    cout << "A soma dos �mpares �: " <<soma_impares<<endl;

}

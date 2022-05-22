#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, resto, inverso = 0;

    cout << "Digite um número: ";
    cin >> n2;

    n1 = n2;

    if (n2 > 0){

        do {
            resto = n2 % 10;
            inverso = (inverso*10) + resto;
            n2 = n2 / 10;
        } while (n2 != 0);

        cout << "o inverso do número é "<< inverso << endl;

        if (n1 == inverso){
            cout << "O número é palindromo";
        }else{
            cout << "O número não é palindromo";
        }
    }
    else{
        cout << "Fim do programa";
    }

    return 0;
}

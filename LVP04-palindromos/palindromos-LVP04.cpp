#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, resto, inverso = 0;

    cout << "Digite um n�mero: ";
    cin >> n2;

    n1 = n2;

    if (n2 > 0){

        do {
            resto = n2 % 10;
            inverso = (inverso*10) + resto;
            n2 = n2 / 10;
        } while (n2 != 0);

        cout << "o inverso do n�mero � "<< inverso << endl;

        if (n1 == inverso){
            cout << "O n�mero � palindromo";
        }else{
            cout << "O n�mero n�o � palindromo";
        }
    }
    else{
        cout << "Fim do programa";
    }

    return 0;
}

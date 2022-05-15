#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

float pot(float a,float b){

    return pow(a,b);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    float r;
    int n;


    cout << "Digite o valor da base: ";
    cin >> r;

    cout <<"Digite o valor do expoente: ";
    cin >> n;

    float resultado = pot(r,n);

    cout << "O resultado da potenciação é "<<resultado << endl;

}

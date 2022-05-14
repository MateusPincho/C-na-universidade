#include <iostream>
#include <locale>
#include <math.h>
#include <iomanip>

using namespace std;

struct Triangulo{
    float ca;
    float co;
    float hipo;

    void insere(float a, float b){
        ca = a;
        co = b;
        hipo = 0;
    }

    void calHipotenusa(){
        float hipotenusa = sqrt(ca*ca + co*co);
        hipo = hipotenusa;

    }

};

int main(){
    setlocale(LC_ALL,"Portuguese");

    float ca1,co1, ca2,co2, ca3,co3, ca4,co4 ;

    Triangulo t1,t2,t3,t4;

    cout << "Informe o cateto oposto do triângulo 1: " << endl;
    cin >> co1;

    cout << "Informe o cateto adjacente do triângulo 1: " << endl;
    cin >> ca1;

    cout << "Informe o cateto oposto do triângulo 2: " << endl;
    cin >> co2;

    cout << "Informe o cateto adjacente do triângulo 2: " << endl;
    cin >> ca2;

    cout << "Informe o cateto oposto do triângulo 3: " << endl;
    cin >> co3;

    cout << "Informe o cateto adjacente do triângulo 3: " << endl;
    cin >> ca3;

    cout << "Informe o cateto oposto do triângulo 4: " << endl;
    cin >> co4;

    cout << "Informe o cateto adjacente do triângulo 4: " << endl;
    cin >> ca4;

    t1.insere(co1,ca1);
    t2.insere(co2,ca2);
    t3.insere(co3,ca3);
    t4.insere(co4,ca4);

    t1.calHipotenusa();
    t2.calHipotenusa();
    t3.calHipotenusa();
    t4.calHipotenusa();

    cout << "A hipotenusa do triângulo 1 é: " << fixed << setprecision(2) << t1.hipo << endl;
    cout << "A hipotenusa do triângulo 2 é: " << fixed << setprecision(2) << t2.hipo << endl;
    cout << "A hipotenusa do triângulo 3 é: " << fixed << setprecision(2) << t3.hipo << endl;
    cout << "A hipotenusa do triângulo 4 é: " << fixed << setprecision(2) << t4.hipo << endl;
}

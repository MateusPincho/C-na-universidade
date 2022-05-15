//Mateus Pincho de Oliveira - 121110103 (LVP02 - UNION)

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

union Velocidade{
    float velms;
    float velmh;
    float velkmh;

};

float vel ;
int opcao;

int main(){
    setlocale(LC_ALL,"Portuguese");

    Velocidade veluser;

    cout << "Para qual unidade deseja converter? "<< endl;
    cout << "[1] Metros/s"<< endl;
    cout << "[2] Metros/h"<< endl;
    cout << "[3] Km/h"<< endl;
    cin >> opcao;

    if (opcao == 1){
        cout << "Informe a velocidade em [km/h] que deseja converter: " << endl;
        cin >> veluser.velms;

        veluser.velms = veluser.velms/3.6;

        cout << "A velocidade informada em [m/s] é: "<< fixed<< setprecision(2)<< veluser.velms;

    }
    else if (opcao == 2) {
        cout << "Informe a velocidade em [m/s] que deseja converter: " << endl;
        cin >> veluser.velmh;

        veluser.velmh = veluser.velmh*3600;

        cout << "A velocidade informada em [m/h] é: "<< fixed<< setprecision(2)<< veluser.velmh;

    }
    else if (opcao == 3) {
        cout << "Informe a velocidade em [m/s] que deseja converter: " << endl;
        cin >> veluser.velkmh;

        veluser.velkmh = veluser.velkmh*3.6;

        cout << "A velocidade informada em [km/h] é: "<< fixed<< setprecision(2)<< veluser.velkmh;

    }
    else{
        cout<<"Opção inválida, digite um dos números listados acima!";
    }




}

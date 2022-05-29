#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int numeroDeInteracoes;
    float somatorio = 0;
    int QuantidadeDeErro = 0;
    cout << "Digite o numero de interaçoes que deseja: ";
    cin >> numeroDeInteracoes;
    for(int i = 0; i < numeroDeInteracoes; i++){
        somatorio = somatorio + 4 * (pow(-1.00,i) / (1 + 2*i));
    }
    cout << fixed << setprecision(38) << somatorio << " <- Valor gerado pelo calculo" << endl;
    cout << fixed << setprecision(38) << M_PI << " <- Valor da constante M_PI" << endl;
    cout << "Caulando erro porcentual: " << endl;
    cout <<  (somatorio - M_PI / M_PI * 100)*-1;
    return 0;
}

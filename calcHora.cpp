// Este programa lhe é informado uma quantidade de segundos e ele reescreve em hh:mm:ss
#include <iostream>
using namespace std;

const int MINUTOS_EM_SEGUNDOS = 60;
const int HORA_EM_SEGUNDOS = MINUTOS_EM_SEGUNDOS * 60;

int main(int argc, char const *argv[])
{
    int segundosBruto;
    cout << "Informe os segundos";
    cin >> segundosBruto;

    int hora = segundosBruto / HORA_EM_SEGUNDOS;
    int minutos = (segundosBruto % HORA_EM_SEGUNDOS) / MINUTOS_EM_SEGUNDOS;
    int segundos = segundosBruto % MINUTOS_EM_SEGUNDOS;

    cout << "Em " << segundosBruto << "s contem " << hora << "h " << minutos << "m " << segundos << "s " << endl;

    return 0;
}

#include <iostream>
#include <memory>
#include <vector>

#include "ContaBancaria.h"

using namespace std;

void credencias(string &name, long &accountNumber)
{
    cout << "Informe o novo nome";
    getline(cin, name);
    cout << "Informe o numero da conta";
    cin >> accountNumber;
}

int main(int argc, char const *argv[])
{
    vector<shared_ptr<ContaBancaria>> banco;
    int escolha = 0;
    string name;
    long accountNumber;
    double saldo;
    do
    {
        cout << " \n ********************************\n \n ";
        cout << "   Seja bem vindo ao banco BFA \n \n ";
        cout << "**********************************\n ";
        cout << "#####    MENU:  #########\n";
        cout << "1-Criar conta bancaria \n";
        cout << "2-Actualizar os dados da Conta \n";
        cout << "3-Levantar dinheiro \n";
        cout << "4-Depositar dinheiro \n";
        cout << "0-sair \n";
        cin >> escolha;

        switch (escolha)
        {

        case 1:

            cin.ignore();
            cout << "Informe o seu nome: ";
            getline(cin, name);
            cout << "Informe o saldo incial : ";
            cin >> saldo;
            accountNumber = banco.size() + 1;
            banco.push_back(make_shared<ContaBancaria>(name, accountNumber, saldo));
            break;
        case 2:
            credencias(name, accountNumber);
            bool encontrado = false;
            for (auto &account : banco)
            {
                if (account->getName() == name && account->getAccountNumber() == accountNumber)
                {
                    cout << "Actualizado com sucesso!";
                    account->setName(name);
                    encontrado = true;
                }
            }

            if (encontrado != true)
            {
                cout << "Conta nao encontrada";
            }

            break;
        case 3:
            cout << "Informa o valor a levantar";
            cin >> saldo;

            break;

        default:
            break;
        }
    } while (escolha != 0);

    return 0;
}

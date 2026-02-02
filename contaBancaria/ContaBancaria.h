#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>

class ContaBancaria
{
private:
    std::string name;
    long accountNumber;
    double saldo;

public:
    ContaBancaria(std::string name, long accountNumber, double saldo);
    std::string getName() const;
    long getAccountNumber() const;
    double getSaldo() const;

    void depositar(double value);
    void levantar(double value);
    void setName(std::string name);
};

#endif

#include "ContaBancaria.h"
using namespace std;

ContaBancaria::ContaBancaria(string name, long accountNumber, double saldo)
{
    this->name = name;
    this->accountNumber = accountNumber;
    this->saldo = saldo;
};

long ContaBancaria::getAccountNumber() const
{
    return this->accountNumber;
}

string ContaBancaria::getName() const
{
    return this->name;
}

double ContaBancaria::getSaldo() const
{
    return this->saldo;
}

void ContaBancaria::depositar(double value)
{
    this->saldo += value;
}

void ContaBancaria::levantar(double value)
{
    this->saldo -= value;
}

void ContaBancaria::setName(string name)
{
    this->name = name;
}
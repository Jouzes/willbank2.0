#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main()
{
	Conta conta1("12345-6", Titular(Cpf("123.456.789-00"), "João da Silva"));
	conta1.depositar(1000.0);
	cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;
	ExibeSaldo(conta1);
}

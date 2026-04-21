#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular)
    : Conta(numero, titular)
{
}

float ContaCorrente::taxaDeSaque() const
{
	std::cout << "Taxa de saque da conta corrente: " << std::endl;
    return 0.05;
}

void ContaCorrente::transferir(Conta& destino, float valor)
{
    sacar(valor);
    destino.depositar(valor);
}
#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular): Conta(numero, titular)
{
}

float ContaPoupanca::taxaDeSaque() const
{
	std::cout << "Taxa de saque da conta poupança: " << std::endl;
    return 0.03;
}

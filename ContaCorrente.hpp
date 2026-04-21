#pragma once
#include "Conta.hpp"
#include <iostream>

class ContaCorrente final : public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
    float taxaDeSaque() const override;
    void transferir(Conta& conta, float valor);
};
#pragma once
#include "Funcionario.hpp"
#include "AutenticaLogin.hpp"

class Gerente final : public Funcionario, public AutenticaLogin
{
public:
    Gerente(Cpf cpf, std::string nome, float salario, std::string senha);
    float bonificacao() const;
};
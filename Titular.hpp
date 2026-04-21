#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include "AutenticaLogin.hpp"

class Titular : public Pessoa, public AutenticaLogin
{
public:
    Titular(Cpf cpf, std::string nome, std::string senha);
};

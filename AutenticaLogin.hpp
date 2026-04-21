#pragma once
#include <string>

class AutenticaLogin
{
private:
    std::string senhaCorreta;

public:
    AutenticaLogin(std::string password);
    bool autenticar(std::string password);
};
#include "AutenticaLogin.hpp"

AutenticaLogin::AutenticaLogin(std::string password)
{
    // Lógica de autenticação aqui
}

bool AutenticaLogin::autenticar(std::string password)
{
    return password == this->senhaCorreta;
}
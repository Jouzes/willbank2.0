#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Gerente.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Pessoa.hpp"
#include "AutenticaLogin.hpp"
#include "Caixa.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta)
{
    conta.sacar(200);
}

void Login(AutenticaLogin& usuario, string senha)
{
    if (usuario.autenticar(senha))
    {
        cout << "Login bem-sucedido!" << endl;
    }
    else
    {
        cout << "Senha incorreta. Tente novamente." << endl;
    }
}

int main()
{
    // Criando conta poupança
    ContaPoupanca conta1("123456", Titular(Cpf("123.456.789-10"), "conta poups", "senha123"));
    conta1.depositar(500);
    RealizaSaque(conta1);
    ExibeSaldo(conta1);

    // Criando conta corrente
    ContaCorrente conta2("654321", Titular(Cpf("098.765.432-10"), "conta corrente", "senha456"));
    conta2.depositar(300);
    RealizaSaque(conta2);
    ExibeSaldo(conta2);
    conta2.transferir(conta1, 100);
    ExibeSaldo(conta1);

    // Exibe o número total de contas criadas
    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    //Criando funcionário - gerente
    Gerente gerente(Cpf("123.456.789-10"), "joze", 1000, "senha789");
    cout << "Nome do gerente: " << gerente.recuperaNome() << endl;

    return 0;
}

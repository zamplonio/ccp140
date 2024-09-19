#include "Pessoa.cpp"

class Funcionario: public Pessoa{
    private:
        double salario;
        int cadastro;
    
    public:
        Funcionario(string nome, string sobrenome, long cpf, 
                int dia, int mes, int ano, Endereco endereco,
                double salario, int cadastro):
            Pessoa(nome, sobrenome, cpf, dia, mes, ano, endereco),
            salario{salario}, cadastro{cadastro}{}

       virtual void print(){
         cout << "Dados do Funcionario" << endl;
         cout << "Nome:" << this->getNome() << " " << this->getSobrenome() << endl;
         cout << "CPF:" << this->getCPF() << endl;
         cout << "Data de nascimento: " << this->getNascimento() << endl;
         cout << "Endereco:"<< this->getEndereco() << "\n";
         cout << "Salario: " << this->salario << "\n";
         cout << "Cadastro: " << this->cadastro << endl;
        }    

};
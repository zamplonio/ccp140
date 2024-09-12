#include <iostream>
#include "Data.cpp"
#include "Endereco.cpp"
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;
        Data nascimento;
        Endereco endereco;

    public:

        Pessoa(string nome, string sobrenome, long cpf, int dia, int mes, int ano, Endereco endereco):
        nome{nome}, sobrenome{sobrenome}, nascimento{dia, mes, ano}, endereco{endereco}{
            
            //this->nascimento = Data(dia, mes, ano);
            this->cpf = cpf;
        }

        void setNome(string nome, string sobrenome){
            this->nome;
            this->sobrenome;
        }

        void setNome (string nome){
            this->nome = nome;
        }
    
           
        void setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }

        void setCPF(long cpf){
            this->cpf = cpf;
        }

        string getNome (){
            return nome;
        }

        string getSobrenome(){
            return sobrenome;
        }

        long getCPF(){
            return cpf;
        }

        string getNascimento(){
            return this-> nascimento.getData();
        }
        
        string getEndereco(){
            return this-> endereco.getEndereco();
        }
};
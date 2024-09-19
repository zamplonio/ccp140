#include <iostream>
#include "Pessoa.cpp"
#include "Funcionario.cpp"
using namespace std;

int main(){
    Endereco e("Rua Francisco Prestes Maia", 714, "Centro");
    //Pessoa p("Lucas", "Zamplonio", 1234567,7, 7, 2003, e);
    Pessoa p("Pessoa", "Zampz", 98765432, 18, 9, 2024, e);
    Funcionario f("Funcionario", "Sobrenome", 123456, 9, 11, 2024, e, 10000, 1);
    //p.setNome("Lucas");
    //p.setSobrenome("Zamplonio");
    //p.setCPF(121212121);

    Pessoa* pessoas[2];
    pessoas[0]=&p;
    pessoas[1]=&f;

    for (int i=0; i<2; i++){
      //  cout << "Dados da pessoa" << endl;
      //  cout << "Nome:" << pessoas[i]->getNome() << " " << pessoas[i]->getSobrenome() << endl;
       // cout << "CPF:" << pessoas[i]->getCPF() << endl;
       // cout << "" << pessoas[i]->getNascimento() << endl;
       // cout << "Endereco:"<< pessoas[i]->getEndereco() << "\n\n";
       pessoas[i]->print();
    }
    // cout << "Dados da pessoa" << endl;
    // cout << "Nome:" << f.getNome() << " " << p.getSobrenome() << endl;
    // cout << "CPF:" << f.getCPF() << endl;
    // cout << "" << f.getNascimento() << endl;
    // cout << "Endereco:"<< f.getEndereco() << "\n";
}   
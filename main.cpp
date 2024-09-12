#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e("Rua Francisco Prestes Maia", 714, "Centro");
    Pessoa p("Lucas", "Zamplonio", 1234567,7, 7, 2003, e);
    //p.setNome("Lucas");
    //p.setSobrenome("Zamplonio");
    //p.setCPF(121212121);

    cout << "Dados da pessoa" << endl;
    cout << "Nome:" << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF:" << p.getCPF() << endl;
    cout << "" << p.getNascimento() << endl;
    cout << "Endereco:"<< p.getEndereco() << "\n";
}   
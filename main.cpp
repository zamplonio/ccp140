#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p("Lucas", "Zamplonio", 1234567);
    //p.setNome("Lucas");
    //p.setSobrenome("Zamplonio");
    //p.setCPF(121212121);

    cout << "Dados da pessoa" << endl;
    cout << "Nome:" << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF" << p.getCPF() << endl;
}   
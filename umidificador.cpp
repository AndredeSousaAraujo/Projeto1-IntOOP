#include <iostream>
#include "atuador.cpp"
using namespace std;

class Umidificador : public Atuador{
    public:
        Umidificador(string nome, bool ligado, bool conectado, int valor):
            Atuador(nome, ligado, conectado, valor){
            }

        bool setConfiguracao(int valor){
            if(valor < 0 && valor > 3){
                cout << "Erro ao setar config do umidificador" << endl;
                return 0;
            }
            this -> valor = valor;
            return 1;
    }        
};
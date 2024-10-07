#include <iostream>
#include "atuador.cpp"
using namespace std;

class Desumidificador : public Atuador{
    public:
        Desumidificador(string nome, bool ligado, bool conectado, int valor):
            Atuador(nome, ligado, conectado, valor){
            }

        bool setConfiguracao(int valor){
            if(valor < 0 && valor > 3){
                cout << "Erro ao setar config do desumidificador" << endl;
                return 0;
            }
            this -> valor = valor;
            return 1;
    }        
};
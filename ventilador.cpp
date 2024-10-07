#include <iostream>
#include "atuador.cpp"
using namespace std;

class Ventilador : public Atuador{
    public:
    Ventilador(string nome, bool ligado, bool conectado, int valor):
            Atuador(nome, ligado, conectado, valor){
            }

    bool setVelocidade(int valor){
        if(valor < 0 && valor > 3){
            cout << "Erro ao setar velocidade do ventilador" << endl;
            return 0;
        }
        this -> valor = valor;
        return 1;
    }        
};
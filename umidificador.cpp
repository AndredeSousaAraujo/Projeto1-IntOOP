#include <iostream>
#include "atuador.cpp"
using namespace std;
#pragma once

class Umidificador : public Atuador{
    public:
        Umidificador(string nome, bool ligado, bool conectado, int valor):
            Atuador(nome, ligado, conectado, valor){
            }

        bool setConfiguracao(int valor){
            if(valor < 0 && valor > 1){
                cout << "Erro ao setar config do umidificador" << endl;
                return 0;
            }
            else if(valor == 0 && ligado == true){
            desligar();
            cout << "O umidificador foi desligado" << endl;
            }
            else if(valor != 0 && ligado == false){
                ligar();
                cout << "O umidificador foi ligado" << endl;
            }
            this -> valor = valor;
            cout << "Configuração do umidificador definido para: "<< this->valor << endl;
            return 1;
    }        
};
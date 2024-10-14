#include <iostream>
#include "atuador.cpp"
using namespace std;
#pragma once

class Desumidificador : public Atuador{
    public:
        Desumidificador(string nome, bool ligado, bool conectado, int valor):
            Atuador(nome, ligado, conectado, valor){
            }

        bool setConfiguracao(int valor){
            if(valor < 0 && valor > 1){
                cout << "Erro ao setar config do desumidificador" << endl;
                return 0;
            }
            this -> valor = valor;
            cout << "Configuração do desumidificador definido para: "<< this->valor << endl;
            return 1;
    }        
};
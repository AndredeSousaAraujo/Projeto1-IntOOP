#include <iostream>
#include "atuador.cpp"
using namespace std;
#pragma once

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
        else if(valor == 0 && ligado == true){
            desligar();
            cout << "O ventilador foi desligado" << endl;
        }
        else if(valor != 0 && ligado == false){
            ligar();
            cout << "O ventilador foi ligado" << endl;
        }
        this -> valor = valor;
        cout << "Velocidade definida para: " << this -> valor << endl;
        return 1;
    }        
};
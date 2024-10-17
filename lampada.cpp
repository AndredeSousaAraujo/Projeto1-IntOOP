#include <iostream>
#include "atuador.cpp"
using namespace std;
#pragma once

class Lampada : public Atuador{
    public:
        Lampada(string nome, bool ligado, bool conectado, int valor):
            Atuador(nome, ligado, conectado, valor){
            }

        bool setBrilho(int valor){
            if(valor < 0 && valor > 3){
                cout << "Erro ao setar brilho da lampada" << endl;
                return 0;
            }
            else if(valor == 0 && ligado == true){
            desligar();
            cout << "A lampada foi desligada" << endl;
            }
            else if(valor != 0 && ligado == false){
                ligar();
                cout << "A lampada foi ligada" << endl;
            }
            this -> valor = valor;
            cout << "Brilho da lampada definido para: "<< this->valor << endl;
            return 1;
    }        
};
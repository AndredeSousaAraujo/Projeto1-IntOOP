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
            this -> valor = valor;
            return 1;
    }        
};
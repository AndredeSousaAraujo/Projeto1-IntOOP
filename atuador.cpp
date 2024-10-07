#include <iostream>
#include "componente.cpp"
#pragma once
using namespace std;

class Atuador : public Componente{
    public:
        Atuador(string nome, bool ligado, bool conectado, int valor):
            Componente(nome, ligado, conectado, valor){
            }

    virtual bool setValor(int valor){
        this -> valor = valor;
        cout << valor << endl;
        return 1;


    }        
};

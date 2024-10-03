#include <iostream>
#include "componente.cpp"
#include <ctime>
#pragma once
using namespace std;

class Sensor: public Componente{
    public:
        Sensor(string nome, bool ligado, bool conectado, int valor):
            Componente(nome, ligado, conectado, valor){
                srand(time(0));
            }

    virtual int getValor(){
        this -> valor = rand() % 256;
        cout << "0 a 255 = "<< valor << endl;
        return this -> valor;
    }        
};

#include <iostream>
#include "sensor.cpp"
using namespace std;
#pragma once

class Umidade: public Sensor{
    public:

        Umidade(string nome, bool ligado, bool conectado, int valor):
            Sensor(nome, ligado, conectado, valor){}

        float getUmidadeRelativa(){
            int umidade = getValor() / 2.55;
            cout << "Umidade: " <<  umidade << "%" << endl; 
            return umidade; 
            
        }

        

        


};
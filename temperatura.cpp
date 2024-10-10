#include <iostream>
#include "sensor.cpp"
using namespace std;
#pragma once

class Temperatura: public Sensor{
    public:

        Temperatura(string nome, bool ligado, bool conectado, int valor):
            Sensor(nome, ligado, conectado, valor){}

        float getTemperaturaC(){
            float temperaturaC = getValor() / 2.55; 
            return temperaturaC;
        }

        float getTemperaturaF(){
            float temperaturaF = getTemperaturaC()*1.8 + 32;
            return temperaturaF;
        }

        float getTemperaturaK(){
            float temperaturaK = getTemperaturaC() + 273;
            return temperaturaK;
        }

        


};
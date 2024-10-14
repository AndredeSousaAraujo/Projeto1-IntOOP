#include <iostream>
#include "sensor.cpp"
using namespace std;
#pragma once

class Luminosidade: public Sensor{
    private:
        int limiarClaridade = 50;
    public:

        Luminosidade(string nome, bool ligado, bool conectado, int valor):
            Sensor(nome, ligado, conectado, valor){}

        void setLimiarClaridade(int limiarClaridade){
            this -> limiarClaridade = limiarClaridade;
            
        }

        int getLimiarClaridade(){
            return limiarClaridade;
        }

        int luminosidade = getValor()/2.55;

        bool estaClaro(){
        if(luminosidade>limiarClaridade){
            cout << "Luminosidade: " << luminosidade << endl;
            cout << "Esta claro" << endl;
            return true;
            }
        cout << "Luminosidade: " << luminosidade << endl;
        cout << "Esta escuro" << endl;  
        return false;    
        }
        

        


};
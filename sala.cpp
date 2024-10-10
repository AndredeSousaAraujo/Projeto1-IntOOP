#pragma once
#include <iostream>
#include "componente.cpp"
#include "sensor.cpp"
#include "temperatura.cpp"
#include "umidade.cpp"
#include "luminosidade.cpp"
#include "atuador.cpp"
#include "ventilador.cpp"
#include "umidificador.cpp"
#include "desumidificador.cpp"
#include "lampada.cpp"


class Sala{
    public:
        Atuador* atuadores[4];
        Sensor* sensores[3]; 
        Sala(Temperatura* t, Luminosidade* l, Umidade* u, Ventilador* v, Lampada* lam, Umidificador* um, Desumidificador* desum)
        {
            atuadores[0] = v;
            atuadores[1] = lam;
            atuadores[2] = um;
            atuadores[3] = desum;

            sensores[0] = t;
            sensores[1] = l;
            sensores[2] = u;

        }


        void atualizarSensores(){
            cout << "Temperatura em C: " << ((Temperatura*)sensores[0]) -> getTemperaturaC() << endl;
            cout << "Temperatura em F: " << ((Temperatura*)sensores[0]) -> getTemperaturaF() << endl;
            cout << "Temperatura em K: " << ((Temperatura*)sensores[0]) -> getTemperaturaK() << endl;
            cout << "Limiar de Claridade: " << ((Luminosidade*)sensores[1]) -> getLimiarClaridade() << endl;
            ((Luminosidade*)sensores[1]) -> estaClaro();
            cout << "Umidade Relativa: " << ((Umidade*)sensores[2]) -> getUmidadeRelativa() << endl;
        }

        void atualizarAtuadores(){

        }

};
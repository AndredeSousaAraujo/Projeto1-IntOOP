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

        float val_temp_C;
        float val_temp_K;
        float val_temp_F;
        float val_lum;
        float val_umid;

        void atualizarSensores(){
            float val_temp_C = ((Temperatura*)sensores[0]) -> getTemperaturaC();
            this -> val_temp_C = val_temp_C;

            float val_temp_F = ((Temperatura*)sensores[0]) -> getTemperaturaF();
            this -> val_temp_F = val_temp_F;

            float val_temp_K = ((Temperatura*)sensores[0]) -> getTemperaturaK();
            this -> val_temp_K = val_temp_K;

            float val_lum = ((Luminosidade*)sensores[1]) -> getLimiarClaridade();
            this -> val_lum = val_lum;

            float val_umid = ((Umidade*)sensores[2]) -> getUmidadeRelativa();
            this -> val_umid = val_umid;

            cout << "Temperatura em C: " << val_temp_C << endl;
            cout << "Temperatura em F: " << val_temp_F << endl;
            cout << "Temperatura em K: " << val_temp_K << endl << endl;
            cout << "Limiar de Claridade: " << val_lum << endl;
            ((Luminosidade*)sensores[1]) -> estaClaro();
            cout << endl;
            cout << "Umidade Relativa: " << val_umid << "%"<< endl << endl;
            cout << "------------------------------------------------------------ " << endl << endl;
        }
        
        void atualizarAtuadores(){
            if(val_temp_C>40){
                ((Ventilador*)atuadores[0]) -> setVelocidade(3);
                cout << endl;
            }
            else if(val_temp_C>30){
                ((Ventilador*)atuadores[0]) -> setVelocidade(2);
                cout << endl;
            }
            else if(val_temp_C>20){
                ((Ventilador*)atuadores[0]) -> setVelocidade(1);
                cout << endl;
            }
            else{
                ((Ventilador*)atuadores[0]) -> setVelocidade(0);
                cout << endl;
            }

            if(val_lum>80){
                ((Lampada*)atuadores[1]) -> setBrilho(0);
                cout << endl;
            }
            else if(val_lum>50){
                ((Lampada*)atuadores[1]) -> setBrilho(1);
                cout << endl;
            }
            else if(val_lum>20){
                ((Lampada*)atuadores[1]) -> setBrilho(2);
                cout << endl;
            }
            else{
                ((Lampada*)atuadores[1]) -> setBrilho(3);
                cout << endl;
            }

            if(val_umid>0 && val_umid<33){
                ((Umidificador*)atuadores[2]) -> setConfiguracao(1);
                ((Desumidificador*)atuadores[3]) -> setConfiguracao(0);
                cout << endl;
            }
            else if (val_umid >= 33 && val_umid < 66){
                ((Umidificador*)atuadores[2]) -> setConfiguracao(0);
                ((Desumidificador*)atuadores[3]) -> setConfiguracao(0);
                cout << endl;
            }
            else{
                ((Umidificador*)atuadores[2]) -> setConfiguracao(0);
                ((Desumidificador*)atuadores[3]) -> setConfiguracao(1);
                cout << endl;
            }

        }

};
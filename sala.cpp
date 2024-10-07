#include <iostream>
#include "atuador.cpp"
#include "sensor.cpp"

class Sala{
    public:
        Atuador* atuadores[5];
        Sensor* sensores[5]; 
        Sala(Sensor* sensores[5], Atuador* atuadores[5]){
            for (int i=0; i<5; i++){
                this -> atuadores[i] = atuadores[i];
                this -> sensores[i] = sensores[i];
            }
        }
        void atualizarSensores(){
            
        }

        void atualizarAtuadores(){

        }

};
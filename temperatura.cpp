#include <iostream>
#include "sensor.cpp"
using namespace std;

class Temperatura: public Sensor{
    public:
        virtual int getTemperatura(){
            return getValor();
        }
};
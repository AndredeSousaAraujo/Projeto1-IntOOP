#include <iostream>
#include "sensor.cpp"
using namespace std;

class Temperatura: public Sensor{
    public:

        Temperatura(string nome, bool ligado, bool conectado, int valor):
            Sensor(nome, ligado, conectado, valor){}

        float getTemperaturaC(){
            float temperaturaC = getValor() / 2.55;
            cout << "temperatura em C: " <<  temperaturaC << endl; 
            return temperaturaC;
        }

        float getTemperaturaF(){
            float temperaturaF = getTemperaturaC()*1.8 + 32;
            cout << "temperatura em F: " <<  temperaturaF << endl; 
            return temperaturaF;
        }

        float getTemperaturaK(){
            float temperaturaK = getTemperaturaC() + 273;
            cout << "temperatura em K: " <<  temperaturaK << endl; 
            return temperaturaK;
        }

        


};
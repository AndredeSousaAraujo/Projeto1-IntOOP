#include <iostream>
#include "componente.cpp"
using namespace std;

class Sensor: public Componente{
    public:
        Sensor(string nome, bool ligado, bool conectado, int valor):
            Componente(nome, ligado, conectado, valor){}

    virtual int getValor(){
        return getValor();
    }        
};

#include "componente.cpp"

class Sensor: public Componente{
    public:
        Sensor(string nome, bool ligado, bool conectado, int valor):
            Componente(nome, ligado, conectado, valor){}
};
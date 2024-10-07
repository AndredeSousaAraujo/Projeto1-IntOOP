#include <iostream>
#include "componente.cpp"
#include "sensor.cpp"
#include "temperatura.cpp"
#include "umidade.cpp"
#include "luminosidade.cpp"
using namespace std;

int main(){
    // int ale = rand();
    //cout << ale << endl;
    //Componente vent("Ventilador", false, false, 10);
    Temperatura t("Term1", false, false, 0);
    Umidade u("Hum1", false, false, 0);
    Luminosidade l("Lum1", false, false, 10);
    t.getTemperaturaF();
    u.getUmidadeRelativa();
    l.estaClaro();//3232






}
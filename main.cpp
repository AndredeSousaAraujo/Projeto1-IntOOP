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
#include "sala.cpp"
#pragma once
using namespace std;

int main(){
    // int ale = rand();
    //cout << ale << endl;
    //Componente vent("Ventilador", false, false, 10);
    Temperatura t1("Term1", false, false, 0);
    Temperatura t2("Term2", false, false, 0);
    Temperatura t3("Term3", false, false, 0);
    Umidade u1("Hum1", false, false, 0);
    Umidade u2("Hum2", false, false, 0);
    Umidade u3("Hum3", false, false, 0);
    Luminosidade l1("Lum1", false, false, 10);
    Luminosidade l2("Lum2", false, false, 10);
    Luminosidade l3("Lum3", false, false, 10);
    Ventilador v1("Vent1", false, false, 10);
    Ventilador v2("Vent2", false, false, 10);
    Ventilador v3("Vent3", false, false, 10);
    Umidificador um1("Umi1", false, false, 10);
    Umidificador um2("Umi2", false, false, 10);
    Umidificador um3("Umi3", false, false, 10);
    Desumidificador d1("Desumi1", false, false, 10);
    Desumidificador d2("Desumi2", false, false, 10);
    Desumidificador d3("Desumi3", false, false, 10);
    Lampada lam1("Lamp1", false, false, 10);
    Lampada lam2("Lamp2", false, false, 10);
    Lampada lam3("Lamp3", false, false, 10);
    

    Sala s1(&t1, &l1, &u1, &v1, &lam1, &um1, &d1);
    Sala s2(&t2, &l2, &u2, &v2, &lam2, &um2, &d2);
    Sala s3(&t3, &l3, &u3, &v3, &lam3, &um3, &d3);


    for (int i = 0; i < 1440; i++) {
  
    cout << "Loop " << i+1 << endl << endl;

    cout << "Sala 1" << endl;
    s1.atualizarSensores();
    s1.atualizarAtuadores();
    cout << "------------------------------------------------------------ " << endl;
    cout << "------------------------------------------------------------ " << endl << endl;

    cout << "Sala 2" << endl;
    s2.atualizarSensores();
    s2.atualizarAtuadores();
    cout << "------------------------------------------------------------ " << endl;
    cout << "------------------------------------------------------------ " << endl << endl;

    cout << "Sala 3" << endl;
    s3.atualizarSensores();
    s3.atualizarAtuadores();
    cout << "------------------------------------------------------------ " << endl;
    cout << "------------------------------------------------------------ " << endl << endl;

    }

    






}
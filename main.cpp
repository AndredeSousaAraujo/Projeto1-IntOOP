#include <iostream>
#include "componente.cpp"
using namespace std;

int main(){
    Componente vent("Ventilador", false, false, 10);

    cout << "Valor: " << vent.getValor() << endl;
    vent.ligar();
    vent.desligar();
    vent.conectar();
    vent.desconectar();

}
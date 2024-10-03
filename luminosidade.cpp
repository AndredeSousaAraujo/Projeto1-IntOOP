#include <iostream>
#include "sensor.cpp"
using namespace std;

class Luminosidade: public Sensor{
    private:
        int limiarClaridade = 150;
    public:

        Luminosidade(string nome, bool ligado, bool conectado, int valor):
            Sensor(nome, ligado, conectado, valor){}

        void setLimiarClaridade(int limiarClaridade){
            this -> limiarClaridade = limiarClaridade;
            
        }

        int getLimiarClaridade(){
            return limiarClaridade;
        }

        bool estaClaro(){
        if(getValor()>limiarClaridade){
            cout << "Esta claro" << endl;
            return true;
            }
        cout << "Esta escuro" << endl;    //3232
        return false;    
        }
        

        


};
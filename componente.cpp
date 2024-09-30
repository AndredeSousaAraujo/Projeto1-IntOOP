#include <iostream>
using namespace std;

class Componente{
    private:
        bool ligado;
        bool conectado;
        int valor;
        string nome; 

    public:
        Componente(string nome, bool ligado, bool conectado, int valor):
        nome{nome}, ligado{ligado}, conectado{conectado}, valor{valor}{}
        
        void ligar()
        {
            ligado = true;
            //cout << ligado << endl;
        }

        void desligar()
        {
            ligado = false;
            //cout << ligado << endl;
        }
        void conectar()
        {
            conectado = true;
            //cout << "Conectado" << endl;
        }

        void desconectar()
        {
            conectado = false;
            //cout << "Desconectado" << endl;
        }

        int getValor(){
            return valor;
        }
};

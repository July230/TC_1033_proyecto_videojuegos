/*
Ian Julián Estrada Castro - A01352823

Arhivo que corresponde a las clases mod y dlc.
Esta clase contiene los atributos y métodos correspondientes de las
clases mod y dlc. Tienen una relación de composición con la clase 
videojuego. No pueden operar individualmente.

*/

#include<iostream>
#include<string>

using namespace std;

//Aplicar composición a las clases mod y DLC
class DLC{
    private:
        string namedlc, description;
        float pricedlc;
    public:
        DLC(string namedlc, string description, float pricedlc){
            this->namedlc = namedlc; //Puntero this
            this->description = description;
            this->pricedlc = pricedlc;
        } //Constructor de DLC
        void muestra_dlc() const { //Declarar como constantes para el uso de this
            cout << "DLC: " << namedlc << endl;
            cout << "Descripción: " << description << endl;
            cout << "Precio: " << pricedlc << endl;
        }
        string get_name() const { //Delcarar como constante
            return namedlc; 
        }

};

class Mod{
    private:
        string modname, desc;
    public:
        Mod(string modname, string desc){ //Análogamente a la clase DLC
            this->modname = modname;
            this->desc = desc;
        } //Constructor de Mod
        void muestra_mod() const {
            cout << "Mod: " << modname << endl;
            cout << "Descripción del mod: " << desc << endl;
        }
        string get_name() const { 
            return modname; 
        } 
};


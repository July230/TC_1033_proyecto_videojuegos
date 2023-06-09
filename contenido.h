//Archivo que contiene el contenido
#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include"extras.h"

using namespace std;

class Contenido{
    private:
        string name, version;
        int year, rate;
        float price;
    public:
        Contenido(string name, int year, int rate, float price, string version); //Constructor de contenido (Videojuego)
        string get_name(){return name;}
        void set_name(string name);
        int get_year(){return year;}
        void set_year(int year);
        int get_rate(){return rate;}
        void set_rate(int rate);
        float get_price(){return price;}
        void set_price(float price);
        string get_version(){return version;}
        void set_version(string version);
        virtual void muestra_contenido();
};

//Constructor de la clase contenido
Contenido::Contenido(string _name, int _year, int _rate, float _price, string _version){
    name = _name;
    year = _year;
    rate = _rate;
    price = _price;
    version = _version;
}

void Contenido::set_name(string _name){
    name = _name;
}
void Contenido::set_year(int _year){
    year = _year;
}
void Contenido::set_rate(int _rate){
    rate = _rate;
}
void Contenido::set_price(float _price){
    price = _price;
}

void Contenido::set_version(string _version){
    version = _version;
}

void Contenido::muestra_contenido(){
    cout << "Nombre: " << get_name() << endl;
    cout << "Año de Salida: " << get_year() << endl;
    cout << "Calificación: " << get_rate() << endl;
    cout << "Precio:  $" << get_price() << endl;
    cout << "Versión " << get_version() << endl;

}


//Clase videojuego
class Videojuego : public Contenido{
    private:
        //Para la composición con Mods y DLC's
        vector<DLC> dlcs;
        vector<Mod> mods;

        //Atributos de videojuego
        string genre;
        string tag;
    public:
        //Constructor de la clase Videojuego (constructor de una clase que hereda)
        Videojuego(string _name, int _year, int _rate, float _price, string _version, string _genre, string _tag):Contenido(_name, _year, _rate, _price, _version){ //Sobrecarga de funciones
        //Contenido(): Constructor de padre, porque atributos son provados, para acceder a ellos, más las variables exclusivas de Videojuego    
            genre = _genre;
            tag = _tag; //Pido las variables de videojuego

        } 
        void muestra_videojuego(); //Sobreescritura de muestra_contenido

        //Para aplicar la composición y los buscadores de mods y dlc's
        void agregarDLC(const DLC& dlc); //Referencia constante usando "&" 
        void agregarMod(const Mod& mod);
        void buscarDLC(const string& nombreDLC);
        void buscarMod(const string& nombreMod);

};

void Videojuego::muestra_videojuego(){
    cout << "Género: " << genre << endl;
    cout << "Etiquetas: " << tag << endl;
    cout << "\n" << endl;

    if(dlcs.size()>0 || mods.size()>0){
        cout << "Contenido adicional disponible para este juego" << endl;
    }
        if(dlcs.size()>0){
        cout << "DLC's disponibles: " << endl;
        for(const DLC& dlc : dlcs){ //Variable const no se puede modificar
            cout << "- " << dlc.get_name() << endl;
        }
    }else{
        cout << "No hay DLC's disponibles para este juego" << endl;
    }
    if(mods.size()>0){
        cout << "Mods disponibles: " << endl;
        for (const Mod& mod : mods){ //Variable const, no se puede modificar
            cout << "- " << mod.get_name() << endl;
        }
    }else{
        cout << "No hay mods disponibles para este juego" << endl;
    }
    cout << "\n" << endl;
}

void Videojuego::agregarDLC(const DLC& dlc){ //Función para los DLC's
    dlcs.push_back(dlc);
}

void Videojuego::agregarMod(const Mod& mod){
    mods.push_back(mod);
}

void Videojuego::buscarDLC(const string& nombreDLC){ //Buscador de DLC's por nombre
    for(const DLC& dlc : dlcs){
        if(dlc.get_name() == nombreDLC){ //get_name método de contenido
            dlc.muestra_dlc();
            return;
        }
    }
    cout << "No se encontro el DLC" << endl;
}

void Videojuego::buscarMod(const string& nombreMod){ //Análogamente a los DLC's
    for(const Mod& mod : mods){
        if(mod.get_name() == nombreMod){
            mod.muestra_mod();
            return;
        }
        
    }
    cout << "No se encontró ningun mod con ese nombre: " << endl;
}

//Clase aplicación
class App : public Contenido{
    private:
        string use;
        string type;
    public:
        App(string _name, int _year, int _rate, float _price, string _version, string _use, string _type):Contenido(_name, _year, _rate, _price, _version){ //Sobrecarga de funciones
            use = _use;
            type = _type;
        }
        void muestra_app(); //Sobreescritura
};

void App::muestra_app(){ //funcion muestra_contenido
    cout << "Tipo de aplicación: " << type << endl;
    cout << "Uso de aplicación: " << use << endl;
    cout << "\n" << endl;
}



//Archivo que tiene el contenido en si
#include<iostream>

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
        int get_price(){return price;}
        void set_price(float price);
        string get_version(){return version;}
        void set_version(string version);

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

//Clase videojuego
class Videojuego : public Contenido{
    private:
        string genre;
        string tag;
    public:
        //Constructor de la clase Videojuego (constructor de una clase que hereda)
        Videojuego(string _name, int _year, int _rate, float _price, string _version, string _genre, string _tag):Contenido(_name, _year, _rate, _price, _version){ //Sobrecarga de funciones
        //Contenido(): Constructor de padre, porque atributos son provados, para acceder a ellos, más las variables exclusivas de Videojuego    
            genre = _genre;
            tag = _tag; //Pido las variables de videojuego
        } 
        void muestra_videojuego();
};

void Videojuego::muestra_videojuego(){
    cout << "Nombre: " << get_name() << endl;
    cout << "Año de Salida: " << get_year() << endl;
    cout << "Calificación: " << get_rate() << endl;
    cout << "Precio:  $" << get_price() << endl;
    cout << "Género: " << genre << endl;
    cout << "Etiquetas: " << tag << endl;
    cout << "Versión " << get_version() << endl;
    cout << "\n" << endl;
}

//Para los mods y dlcs, agregar una función del tipo 'agrega_dlc()'

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
        void muestra_app();
};

void App::muestra_app(){
    cout << "Nombre: " << get_name() << endl;
    cout << "Año de Salida: " << get_year() << endl;
    cout << "Calificación: " << get_rate() << endl;
    cout << "Precio:  $" << get_price() << endl;
    cout << "Tipo de aplicación: " << type << endl;
    cout << "Uso de aplicación: " << use << endl;
    cout << "Versión: " << get_version() << endl;
    cout << "\n" << endl;
}
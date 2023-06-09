//Arhivo que corresponde a la tienda, aplicación de agregación
#include<iostream>
#include<vector>
#include<string>
#include"contenido.h"

class Tienda{ //Aplicar agregación
    private:
        vector<Contenido*> contenidos; //vector que almacena objetos de tipo contenido
    public:
        //Constructor por default que almacena objetos del tipo contenido
        Tienda(){};
        
        //Para agregar objetos al catalogo
        
        void add_content(Contenido* contenido){
            contenidos.push_back(contenido);  //el apuntador contenido se agrega al final del vector contenidos, aumentando su tamaño en uno. 
        }
        
        Videojuego * get_videojuego(){
            for(Contenido * contenido : contenidos){ //for que busca cosas del tipo videojuego
                if(dynamic_cast<Videojuego *>(contenido)){
                    return dynamic_cast<Videojuego *>(contenido); //dynamic_cast para comprobar qu si sea videojuego
                }
            }
        }
        
        App * get_app(){
            for(Contenido * contenido : contenidos){ //for que busca cosas del tipo App
                if(dynamic_cast<App *>(contenido)){
                    return dynamic_cast<App *>(contenido); //dynamic_cast para comprobar qu si sea App
                }
            }
        }
        
        //Función que muestra el catalogo
        void show_contenido(){
            cout << "Catálogo disponibe" << endl;
            for(Contenido * contenido : contenidos){ //bucle for que buscar elementos en vector de Tienda y a cada uno se le da un apuntador
                cout << "-" << contenido->get_name() << endl; //Muestra el nombre de videojuego o app
            }
        }
        
        //Función para buscar el videojuego o app por su nombre
        void buscar_contenido(string nombreBuscado){
            bool encontrado = false; //bool iniciada en false
            for(Contenido * contenido : contenidos){ //mismo bucle for
                if(contenido->get_name() == nombreBuscado){ //busca un nombre de contenido* que coincida con nombreBuscado
                    contenido->muestra_contenido(); //Muestra el contenido del videojuego o app buscado

                    //Buscador de DLC's y Mods
                    if(dynamic_cast<Videojuego*> (contenido)){
                        cout << "¿Desea buscar un DLC o Mod? s/n: ";
                        string option;
                        cin >> option;
                        cin.ignore(); //Evitar que se "brinque" el buscador
                        if(option == "S" || option == "s"){ //operador "or" ||
                            cout << "Escribe el nombre del DLC o mod: ";
                            string nombreDLCMod;
                            getline(cin, nombreDLCMod);
                            cout << endl;
                            cout << "Resultados" << endl;
                            Videojuego* videojuegoEncontrado = dynamic_cast<Videojuego*>(contenido); //Muestra objetos del tipo videojuego
                            videojuegoEncontrado->buscarDLC(nombreDLCMod);
                            videojuegoEncontrado->buscarMod(nombreDLCMod);
                        }
                    }
                    encontrado = true; //Si se cumplen las condiciones, true
                }
            }
            if(!encontrado){
                cout << "El contenido no se encontro en la tienda. " << endl; //en caso de no hayar coincidencia
            }
        }
        
};

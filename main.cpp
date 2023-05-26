//Este es el código del proyecto de tienda de videojuegos y aplicaciones
//Avance 1 (Herencia)
//Ian Julián Estrada Castro - A01252823

#include<iostream>
#include<stdlib.h>
#include<contenido.h>

using namespace std;


int main(){
    //Agunos ejemplos, pueden ser diferentes a la realidad
    Videojuego starbound("Starbound", 2016, 4, 150, "1.4", "Sandbox", "Space, mining, 2D");
    Videojuego terraria("Terraria", 2011, 4, 150, "1.4.4.2", "Sandbox", "Mining, 2D, fantasy");
    Videojuego hollowknight("Hollow knight", 2017, 5, 250, "1.5", "Metroidvania", "2D");
    Videojuego minecraft("Minecraft Bedrock", 2011, 5, 400, "1.19.81", "Sandbox", "3D, Building, Mining");
    
    starbound.muestra_videojuego();
    terraria.muestra_videojuego();
    hollowknight.muestra_videojuego();
    minecraft.muestra_videojuego();

    cout << "Aplicaciones" << endl;
    
    //Inventada
    App paintX("PaintX", 2010, 2, 0, "3.2.1", "Dibujar", "Aplicación");
    
    paintX.muestra_app();
};
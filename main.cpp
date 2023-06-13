//Este es el código del proyecto de tienda de videojuegos y aplicaciones
//Ian Julián Estrada Castro - A01352823


#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include"tienda.h"
#include"usuario.h"
using namespace std;



int main(){
    string nombreBuscado;
    Usuario usuario1; //Objeto de la clase usuario

    usuario1.enter_user();

    Tienda tienda; //objeto tienda de la clase Tienda, agregar contenidos y mostrar los nombres de los contenidos

    Videojuego *cont0 = new Videojuego("Starbound", 2016, 4, 150, "1.4", "Sandbox", "Space, mining, 2D");
    Mod modS1("Fracking universe", "Nuevos mundos");
    Mod modS2("The Mandalorian", "The mandalorian experience in Starbound");
    cont0->agregarMod(modS1);
    cont0->agregarMod(modS2);
    //Seguir la sintaxis si se desean añadir mods o dlcs

    Videojuego *cont1 = new Videojuego("Terraria", 2011, 4, 150, "1.4.4.2", "Sandbox", "Mining, 2D, fantasy");
    Mod modT1("Calamity", "New bosses");
    cont1->agregarMod(modT1);

    Videojuego *cont2 = new Videojuego("Hollow knight", 2017, 5, 250, "1.5", "Metroidvania", "2D");
    DLC dlcH1("Grimm Troupe", "Introduce un jefe nuevo junto a misiones secundarias", 0.00);
    cont2->agregarDLC(dlcH1);

    Videojuego *cont3 = new Videojuego("Minecraft Bedrock", 2011, 5, 400, "1.19.81", "Sandbox", "3D, Building, Mining");

    App *cont4 = new App("PaintX", 2010, 2, 0, "3.2.1", "Dibujar", "Aplicación");

    //agregar más juegos a la tienda con Contenido *contn

    //tienda.addcontent(contn);
    tienda.add_content(cont0);
    tienda.add_content(cont1);
    tienda.add_content(cont2);
    tienda.add_content(cont3);
    tienda.add_content(cont4);

    //mostrar contenido de la tienda
    tienda.show_contenido();
    
    cout << "Ingrese el nombre del videojuego o app a buscar: ";
    getline(cin, nombreBuscado);
    
    tienda.buscar_contenido(nombreBuscado); //busqueda

    return 0;
};



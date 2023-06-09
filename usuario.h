//Archivo del usuario

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class Usuario{
    private:
        string username, password;
    public:
        void enter_user(){ //Función para introducir usuario
            cout << "Ingresa tu usuario: ";
            cin >> username;
            cin.ignore(); //cin.ignore() para evitar que se "brinque" el buscador

            cout << "Ingresar contraseña: ";
            cin >> password;
            cin.ignore();
        }
        void muestra_usuario(){ //Función que muestra el nombre
            cout << "Bienvenido " << username << "\n";
        }
};

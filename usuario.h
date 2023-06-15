/*
Ian Julián Estrada Castro - A01352823

Arhivo que corresponde a la clase usuario.
Esta clase contiene los atributos y métodos correspondientes de la 
clase usuario. El usuario introduce un nombre y constraseña de 
preferencia y se muestra sólo el nombre.

*/

#include<iostream>
#include<string>

using namespace std;

class Usuario{
    private:
        string username, password;
    public:
        void enter_user(){ //Función para introducir usuario
            cout << "Ingresa tu usuario: ";
            getline(cin, username);

            cout << "Ingresar contraseña: ";
            getline(cin, password);
        }
        void muestra_usuario(){ //Función que muestra el nombre
            cout << "Bienvenido " << username << "\n";
        }
};

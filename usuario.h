//Archivo del usuario

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

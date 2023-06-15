# TC_1033_proyecto_videojuegos
En este repositorio se encuentran los archivos correspondientes al proyecto de la materia "Programación Orientada a Objetos".
El proyecto consiste en una Tienda de videojuegos en formato digital, de manera similar a la programas como steam. Se pueden buscar videojuegos y aplicaciones desde este programa (siempre que estén en el catálogo), además se pueden añadir nuevos productos a la tienda. Los videojuegos además también cuentan con contenido descargable adicional.

#Funcionalidad
- Un usuario accede con un nombre y una contraseña que elige.
- El usuario busca algun videojuego o app por el nombre.
- Si encuentra el videojuego, da la opción de buscar contenido extra.
- El administrador puede añadir nuevos juegos y/o aplicaciones.

#Consideraciones
- No hay una base de datos de usuarios, por lo que cualquier nombre y contraseña permite entrar.
- Sólo se puede buscar entre las opciones disponibles, lo mismo con los extras.
- Sólo se pueden poner los juegos y apps, así como extras desde el código fuente ya que no hay una función que permita añadirlos en la consola.
- Las busquedas deben ser hechas con el mismo nombre, lo que significa que se debe introducir un nombre exactamente igual a los que aparezcan en el catálogo
- Utiliza extensiones de C++ 11, esto hará que aparezcan algunas advertencias
- Para hacer una nueva busqueda es necesario volver a iniciar el programa
- Compilar el archivo "main.cpp" con g++

#Casos donde no podría funcionar

- Debe escribirse el nombre específico del videojuego o aplicación, de lo contrario, ocurrirá un error ya que no encuentra coincidencia y obtiene un valor nulo (esto incluye espacios y mayusculas)
- Si en la pregunta "¿Desea buscar un DLC o Mod? s/n: ", se introduce cualquier otra cosa que no sea S o s, terminá el programa


#Correcciones
- El UML se modificó para ser consistente al programa

# TC_1033_proyecto_videojuegos
En este repositorio se encuentran los archivos correspondientes al proyecto de la materia "Programación Orientada a Objetos".
El proyecto consiste en una Tienda de videojuegos en formato digital, de manera similar a la programas como steam. Se pueden adquirir videojuegos y aplicaciones desde este programa, además se pueden añadir nuevos productos a la tienda. Los videojuegos además también cuentan con contenido descargable adicional.

#Funcionalidad
- Un usuario accede con un nombre y una contraseña que elige.
- El usuario busca algun videojuego o app por el nombre.
- Si encuentra el videojuego, da la opción de buscar contenido extra.
- El administrador puede añadir nuevos juegos y/o aplicaciones.

#Consideraciones
- No hay una base de datos de usuarios, por lo que cualquier nombre y contraseña permite entrar.
- Sólo se puede buscar entre las opciones dispobibles, lo mismo con los extras.
- Sólo se pueden poner los juegos y apps, así como extras desde el código fuente ya que no hay una función que permita añadirlos en la consola.

#Casos donde no podría funcionar

- Debe escribirse el nombre específico del videojuego o aplicación, de lo contrario, ocurrirá un error ya que no encuentra coincidencia y obtiene un valor nulo (esto incluye espacios y mayusculas)

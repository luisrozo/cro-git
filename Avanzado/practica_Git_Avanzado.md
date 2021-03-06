# Práctica Git - Avanzado

##### Luis Gonzaga Rozo Bueno (*alumno1*) & Manuel Rodríguez-Sánchez Guerra (*alumno2*) & Juan Antonio Rodicio López (alumno3) & Antonio Velez Estevez (alumno4)

&nbsp;

***
## In memoriam

Normalmente, nos tomamos las prácticas en un tono de humor. En esta ocasión, como puede comprobarse, no ha sido así. Esto es debido a la triste noticia del fallecimiento de *Tim*.
Una noticia sin lugar a dudas inesperada, aunque este hecho no sea notable solo queremos dejar un leve recuerdo a nuestro compañero y a su familia. No te conocíamos mucho, pero, 

**un saludo amigo**.
***


## 1.- Preparación del entorno (alumno2) 

&nbsp;

Se ha creado un documento llamado "READMECro-Git_HappyCroissant.md" con el contenido *"Grupo de prácticas formado por el equipo Cro-Git: Luis Gonzaga Rozo Bueno y Manuel Rodríguez-Sánchez Guerra y por el equipo HappyCroissant: Juan Antonio Rodicio López y Antonio Vélez Estévez"*

&nbsp;

El documento a subir por petición del *alumno1* será un **.md** en lugar del **.tex** que solicita el enunciado.

&nbsp;

## 2.-  No queremos tantos commits (alumno2 again)

&nbsp;

Debido a la *pereza inteligente* del *alumno2* este, utilizando sus habilidades premonitorias decidió hacer ambos comits en el mismo, para así ahorrarse un par de instrucciones.

Por esto, no ha sido posible realizar el *rebase*.

&nbsp;

## 3.- Creando la rama de tu equipo (todos)

&nbsp;

Mis compañeros y yo hemos realizado los pulls necesarios y hemos creado las ramas pertinentes con los ficheros necesarios. No ha habido ningún intento de sabotaje de la práctica esta vez, y los entornos de trabajo de cada equipo han quedado bien definidos.

&nbsp;

## 4.- Trabajando con un repositorio remoto

&nbsp;

Luis y Antonio han realizado los siguientes comandos para hacer push sobre los repositorios remotos de las ramas:

git push --set-upstream origin HappyCroissant
git push --set-upstream origin Cro-Git

&nbsp;

## 5.- Clave pública SSH(todos)

Las claves ssh las teníamos generadas ya que habíamos trabajado con Github anteriormente. Por otra parte hemos decidido hacer los cambios desde consola y no hemos usado Eclipse.

&nbsp;

## 6.- Generando números

Juan ha actualizado el directorio de trabajo realizando un git pull situado sobre su rama. Seguidamente ha modificado el fichero pb.c como se le indicaba y ha comprobado que compilaba y se ejecutaba y ha realizado el commit pertinente. Después ha realizado el push de la rama de su equipo.

Antonio ha actualizado la rama de HappyCroissant añadiendo una función nueva llamada checkwhiteballs() ha añadido los cambios, ha realizado el commit y ha realizado un push sobre la rama HappyCroissant.

&nbsp;

## 7.- Merge sin conflictos

El alumno2, comprueba que hay muchisimas diferencias entre el fichero *pb.c* de la rama *master* y la rama *HappyCroissant*. Al realizar git merge, el programa traga y resuelve los conflictos entre ambos ficheros automaticamente. 

Tras esto realiza una serie de cambios sobre el fichero *pb.c* y los sube a la rama de su equipo *Cro-Git*.

El alumno1 hace pull en ambas ramas y comprueba que existen numerosas diferencias entre ambas (haciendo uso de *git diff*). Decide hacer refactoring en el fichero *pb.c* y añade una función para separar el código y que quede más claro. Compila y funciona como antes.

Aunque después tiene varios conflictos para fusionar las ramas, lo consigue y hace un push de la rama master, cediendo el tesitgo al alumno4.

## 8.- Merge

Antonio actualiza la rama master y comprueba que la función que había implementado no está en el fichero pb.c. Así que fusiona su rama con la master escribiendo:

git merge master HappyCroissant

Pero Manolo y Luis han estado editando los fichero desde windows, y por alguna extraña razón se han añadido unos caracteres ^M que han impedido que la fusión se haga correctamente. Por lo tanto Antonio ha tenido que fusionar los cambios a mano arreglandolo todo para que funcione.

Luego ha usado los defines que estaban en la parte superior del fichero en las funciones que usaban los "números mágicos". Seguidamente ha hecho commit y push.

## 9.- Luis vs Juan (Conflictos)

Tanto Luis como Juan han actualizado la rama de sus respectivos equipos y la rama master, tras comparar las ramas de los distintos equipos con la rama master, han procedido a implementar la función lottery_numbers_simulation() la cual simula la tirada de 5 bolas blancas y 1 power ball. El primero que acabó fué Luis y éste tras resolver un conflicto con la rama master subió su versión al repositorio, más tarde, juan tuvo que arreglárselas para manejarse con el tkdiff y arreglar los conlfictos que se le habían presentado.

Por ser el último, juan decidió quedarse con su versión pero añadiéndole una funcion que tenía luis. Y por último Juan sube su versión a la rama master.

## 10.- Manolo vs Antonio

En este ejercicio nos separamos, haciendo dos cosas distintas:

- Por una parte Manolo se encarga de añadir y modificar el fichero *.gitignore* para excluir de este nuestro repositorio los ficheros con extensión *.o* o *.orig*.

- Por otra parte Antonio realiza diversas pruebas sobre el código guardando la salida en un fichero local en su PC este queda excluido del repositorio gracias al ficher "info/exclude". Sorprendentemente el programa funciona y las salidas de las pruebas se guardan en el fichero *pruebas*.

## 11.- Fetch + merge

Luis (Alumno 1) actualiza su rama de equipo y la compartida y modifica el fichero pb.c tal y como se le indica, comprueba que compila y se ejecuta y sube los cambios al repositorio.

Juan por otro lado, realiza un *git fetch* en la rama master, comprueba las diferencias y fusiona los cambios. Además ha sentido gran curiosidad por lo que estaba haciendo el otro equipo, con lo cual ha creado una rama localmente con el mismo nombre para luego descargarse en ella la última revisión y por último fusionar ésta con la rama master.

## 12.- Manolo vs Antonio

Ambos actualizamos el repositorio con los nuevos cambios, una vez hecho esto se realizarán todos los cambios indicados sobre el código. Se modifican las funciones pertinentes.

Manolo crea el fichero pb.bundle con los cambios realizados y se lo envía a antonio por email.

Antonio recibe el fichero mal, ya que en el pb.bundle enviado por Manolo solo incluia los cambios en la rama Cro-Git y no en la rama master. Así que ha clonado con Cro-Git y subido los cambios.

## 13.- Dividiendo commits

Juan edita el archivo tal y como se le especifica y se dispone a ejecutar el comando *git add -i*, tras ejecutarlo y pelearse con él, consigue saber que tiene que utilizar la opción *Path* y después de utilizarla no se le da la opción de subir los commits por separado, Juan desesperado por la imposibilidad de realizar el ejercicio y después de buscarlo por internet, no encuentra la solución a su problema, así que sube un commit general indicando tal problema. 

## 14.- Rebase manejo de ramas

Lo primero ha sido utilizar el comando **git rebase** para unir los commits en la rama compartida y así poder ver el progreso de las ramas utilizando **gitk**. Adjuntamos captura a continuación:
#### master
![](http://i68.tinypic.com/fwi0yt.png)

## 15.- ¿Quien ha hecho eso?

Para ver que cambios ha hecho cada uno utilizaremos el comando **git blame pb.c**, a continuación adjuntamos una captura del resultado:
#### git blame pb.c
![](http://i67.tinypic.com/2mg9gy9.png)

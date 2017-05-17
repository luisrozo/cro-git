# Práctica Git - Avanzao

##### Luis Gonzaga Rozo Bueno (*alumno1*) & Manuel Rodríguez-Sánchez Guerra (*alumno2*) & Juan Antonio Rodicio López (alumno3) & Antonio Velez Estevez (alumno4)

&nbsp;



## 1.- Preparación del entorno (alumno2) 

&nbsp;

Se ha creado un documento llamado "READMECro-Git_HappyCroissant.md" con el contenido *"Grupo de prрcticas formado por el equipo Cro-Git: Luis Gonzalo Rozo Bueno y Manuel Rodrьguez-Sрnchez Guerra y por el equipo HappyCroissant: Juan Antoni Rodicio Lзpez y Antonio Velez Estevez"*

&nbsp;

El documento a subir por petición del alumno independentista *alumno1* será un **.md** en lugar del **.tex** que solicita el enunciado.

&nbsp;

## 2.-  No queremos tantos commits (alumno2 again)

&nbsp;

Debido a la *pereza inteligente* del *alumno2* este, utilizando sus habilidades premonitorias decidió hacer ambos comits en el mismo, para así ahorrarse un par de instrucciones.

Por esto, no ha sido posible realizar el *rebase*, intentaremos limitar las premoniciones para futuros ejercicios.

&nbsp;

## 3.- Creando la rama de tu equipo (todos)

&nbsp;

Mis compañeros y yo hemos realizado los pulls necesarios y hemos creado las ramas pertinentes con los ficheros necesarios. No ha habido ningún intento de sabotaje de la práctica esta vez, y los entornos de trabajo de cada equipo han quedado bien definidos.

&nbsp;

## 4.- Trabajano con un repositorio remoto

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

El alumno1 hace pull en ambas ramas y comprueba que existen numerosas diferencias entre ambas (haciendo uso de *git diff*). Como él se ha leído el *Clean Code*, a diferencia de su compañero alumno2, decide hacer refactoring en el fichero *pb.c* y añade una función para separar el código y que quede más claro. Compila y funciona como antes (lógico haciendo *refactoring*, si no se llamaría de otra forma).

Aunque después tiene varios conflictos y demás movidas para fusionar las ramas, lo consigue y hace un push de la rama master, cediendo el tesitgo al alumno4.

## 8.- Merge

Antonio actualiza la rama master y comprueba que la función que había implementado no está en el fichero pb.c. Así que fusiona su rama con la master escribiendo:

git merge master HappyCroissant

Pero Manolo y Luis han estado editando los fichero desde windows, y por alguna extraña razón se han añadido unos caracteres ^M que han impedido que la fusión se haga correctamente. Por lo tanto Antonio ha tenido que fusionar los cambios a mano arreglandolo todo para que funcione.

Luego ha usado los defines que estaban en la parte superior del fichero en las funciones que usaban los "números mágicos". Seguidamente ha hecho commit y push.

## 9.- Luis vs Juan (Conflictos)

Tanto Luis como Juan han actualizado la rama de sus respectivos equipos y la rama master, tras comparar las ramas de los distintos equipos con la rama master, han procedido a implementar la función lottery_numbers_simulation() la cual simula la tirada de 5 bolas blancas y 1 power ball. El primero que acabó fué Luis y éste tras resolver un conflicto con la rama master subió su versión al repositorio, más tarde, juan al ser el más tardón tuvo que arreglárselas para manejarse con el tkdiff y arreglar los conlfictos que se le habían presentado. Por ser el último, juan decidió quedarse con su versión pero añadiéndole una funcion que tenía luis. Como dice el refrán, los últimos serán los primeros. Y por último Juan sube su versión a la rama master.

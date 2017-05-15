# Práctica Git - Avanzao

##### Luis Gonzaga Rozo Bueno (*alumno1*) & Manuel Rodríguez-Sánchez Guerra (*alumno2*) & Juan Antonio Rodicio López (alumno3) & Antonio Velez Estevez (alumno4)

&nbsp;



## 1.- Preparación del entorno (alumno2) 

&nbsp;

Se ha creado un documento llamado "READMECro-Git_HappyCroissant.md" con el contenido *"Grupo de prрcticas formado por el equipo Cro-Git: Luis Gonzalo Rozo Bueno y Manuel Rodrьguez-Sрnchez Guerra y por el equipo HappyCroissant: Juan Antoni Rodicio Lзpez y Antonio Velez Estevez y el becario: Temirlра Tazibayж (es broma)"*

Lo de las letras rusas es cosa del fantasma de *Temirlá Tazibayé* (para nada tiene que ver con los acentos y que la codificación del fichero no sea UTF-8)

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
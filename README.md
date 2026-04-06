## ¿Por qué es conveniente incluirlo?

Es conveniente porque evita subir archivos innecesarios o temporales, manteniendo el repositorio limpio y organizado.

## ¿Cuándo se debe hacer?

Se recomienda crearlo al inicio del proyecto, aunque puede agregarse en cualquier momento.

## ¿Cómo se configura?

Se crea un archivo llamado .gitignore y se agregan los nombres de los archivos o patrones que se desean ignorar.

## codigo sin funcionar:

_ Faltan puntos y coma (;) al final de la declaración de la variable suma y en la instrucción return 0

_ Falta incluir la librería stdio.h

_ En la línea scanf("%d", valor1) , se está pasando el valor de la variable en lugar de su dirección de memoria

_ Se agregó el operador de dirección & antes de valor1

_ Se modificó la función para que reciba un puntero (int *numero). De esta forma, la función accede directamente a la dirección de memoria de la variable original

## codigo misterioso:

_ Cambie f_alpha por invertir_numero ya que la funcion invierte el orden de los dígitos: El bucle extrae el ultimo digito con % 10 y lo añade a un acumulador multiplicado por 10, reconstruyendo el numero al reves

_ Cambie f_beta por calcular_mitad ya que la funcion realiza una division entera por 2: La operación *p / 2 reduce el valor de la variable original a la mitad 

_ Cambie f_gamma por sumar_digitos_al_total ya que la funcion suma la cifra de cada digito al valor original: El bucle calcula la suma de los digitos del numero y luego añade ese resultado al valor almacenado en el puntero

## ¿A qué se debe que los apartados 2 y 3 den el mismo resultado?

_ Se debe a la naturaleza misma del puntero. El apartado 2 pide la dirección almacenada en el puntero, mientras que el apartado 3 pide la dirección de la variable. Como el puntero fue inicializado con &variable, su valor interno es precisamente la ubicación física de esa variable

## ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? 

_ En el punto 4 se obtiene la dirección de memoria del propio puntero

_ No es igual a los anteriores, el puntero es, en sí mismo, una variable que necesita su propio espacio en la memoria para existir. Mientras que el puntero "guarda" la dirección de variable (puntos 2 y 3), él mismo reside en una dirección de memoria distinta
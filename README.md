# Programas en C.

## Tabla de contenido

- [Tabla de contenido](#tabla-de-contenido)
- [Objetivo](#objetivo)
- [Elección del IDE](#elección-del-ide)
- [Pasos de Compilación](#pasos-de-compilación)
- [Ejercicios 1 - Primeros Programas](#ejercicios-1---primeros-programas)
  - [Saludo](#saludo)
  - [Saludo 2](#saludo-20)
- [Ejercicios 2 - Entrada de Datos](#ejercicios-2---entrada-de-datos)
  - [Entrada de datos](#entrada-de-datos)
  - [Adivinar número](#adivinar-número)
  - [Problema de física](#problema-de-física)
  - [Distancia entre dos puntos](#distancia-entre-dos-puntos)
- [Ejercicios 3 - Estructuras Condicionales](#ejercicios-3---estructuras-condicionales)
  - [Par o Impar](#par-o-impar)
  - [Multiplos](#multiplo)
  - [Boletos de Avión](#boletos-de-avión)
  - [Cálculo de áreas de figuras](#cálculo-de-áreas-de-figuras)
- [Ejercicios 4 - Estructuras Iterativas](#ejercicios-4---estructuras-iterativas)
  - [Contador de Números](#contador-de-números)
  - [Contador de números pares e impares](#contador-de-números-pares-e-impares)
  - [Divisores de un número](#divisores-de-un-número)
  - [Números Primos](#números-primos)
  - [Figuras](#figuras)
  - [Números de Fibonacci](#números-de-fibonacci)
- [Ejercicios 5 - Procedimientos y Funciones](#ejercicios-5---procedimientos-y-funciones)
  - [Cantidad de billetes](#cantidad-de-billetes)
  - [Máximo Común Divisor](#máximo-común-divisor)
- [Ejercicios 6 - Manejo de Arreglos unidimensionales y bidimensionales](#ejercicios-6---manejo-de-arreglos-unidimensionales-y-bidimensionales)
  - [Números Random](#números-random)
  - [Números Random 1.1.0](#números-random-110)
- [Ejercicios Extras](#extras)
  - [Cálculo de importe y el IVA](#cálculo-del-importe-y-el-iva)
  - [Palíndromo](#palíndromo)
  - [Gestión de inventario y ventas de productos](#gestión-de-inventario-y-ventas-de-productos)

## Objetivo

En este repositorio se encuentran varios ejercicios de programación utilizando el `Lenguaje C`.

El objetivo es que sea usado con fines de estudio, práctica, autoaprendizaje o como guía para todos los programadores que estén aprendiendo C o que ya tengan conocimientos en este lenguaje.

El repositorio contiene ejercicios para resolver o consultar código. Se busca que los ejercicios aborden los conceptos básicos del lenguaje, tales como:

- Sentencias simples de escritura
- Declaración de variables
- Estructuras de control condicionales
- Estructuras de control iterativas
- Procedimientos y funciones con paso de parámetros
- Procedimientos y funciones con paso de parámetros por valor y por referencia
- Manejo de arreglos
- Definición de nuevos tipos de datos
- Manejo de archivos
- Manejo de arreglos bidimensionales (matrices)
- Estructuras de datos tipo registros y arreglos de registros

Se tratará de cubrir todos estos temas con ejercicios, y se fomentará el feedback constructivo para mejorar continuamente el contenido del repositorio.

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Elección del IDE

La elección del IDE depende de tus preferencias personales y del sistema operativo que estés utilizando. Si eres principiante, [Code::Blocks](http://www.codeblocks.org/) o [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/) pueden ser buenas opciones por su simplicidad.

Otra herramienta es [Visual Studio Code](https://code.visualstudio.com/) es un editor de código ligero pero potente, con soporte para una gran cantidad de lenguajes de programación, incluyendo C. Es altamente personalizable con extensiones.

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Pasos de Compilación

1. Abre una terminal.
2. Navega al directorio donde se encuentra el archivo `.c` que deseas compilar.
3. Usa el siguiente comando:

   ```bash
   gcc nombre_del_archivo.c -o nombre_del_programa
   ```

4. Ejecuta el programa con:

   ```bash
   ./nombre_del_programa
   ```

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 1 - Primeros Programas

### Saludo

#### Objetivo

Realizar un programa cuya tarea es desplegar un saludo y luego tu nombre.

#### Resultado esperado en consola

```bash
  Hola Mundo de GITHUB!
  Mi nombre es Eduardo
  Este es mi primer programa para GITHUB
```

[Solución - Saludo](Ejercicio%201%20-%20Hola%20Mundo/saludo.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Saludo 2.0

#### Objetivo

Imprimir en pantalla un marco rectangular de 30 espacios de ancho y 9 de alto, usando el carácter correspondiente a la primera letra de tu nombre.

#### Resultado esperado en consola

```bash
  EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
  EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
  EE                           EE
  EE                           EE
  EE ¡Bienvenido a Lenguaje C! EE
  EE                           EE
  EE                           EE
  EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
  EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE

  Sigue Programando :)
```

[Solución - Saludo 2.0](Ejercicio%201%20-%20Hola%20Mundo/saludo2.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 2 - Entrada de Datos

### Entrada de datos

#### Objetivo

Realizar un programa que pide al usuario datos referentes a su nombre, edad, promedio de su escuela,nombre de su escuela y primera letra de su pais, al final se despliega la infromación dada por el usuario.

#### Resultado esperado en consola

```bash
  ¡Hola!

  ¿Cual es tu nombre?
  Eduardo

  ¿Que edad tienes?
  23

  ¿Que promedio obtuviste en la prepa?
  8.89

  ¿Como se llama tu escuela?
  Universidad Autonoma Metropolitana Unidad Iztapalapa

  Escribe la primer letra de tu pais:
  M

  Eduardo tienes 23 años, estudias en Universidad Autonoma Metropolitana Unidad Iztapalapa y tienes 8.89 de promedio, la inicial de tu pais es: M
```

[Solución - Entrada de Datos](Ejercicio%202%20-%20Entrada%20de%20Datos/datos.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Adivinar número

#### Objetivo

Este programa tiene como objetivo adivinar un número pensado por el usuario a través de una serie de pasos interactivos. El usuario deberá seguir las instrucciones que se mostrarán en pantalla y, cada vez que realice un paso, presionará la tecla Enter. Al final, solo se pedirá el resultado final obtenido por el usuario, y el programa adivinará el número pensado.

Instrucciones:

1. Inicio: El usuario debe pensar en un número, pero no debe ingresarlo en el programa.

2. Pasos Interactivos: A continuación, se presentarán una serie de pasos que el usuario deberá seguir. Cada vez que el usuario complete un paso, deberá presionar Enter para avanzar al siguiente paso.

3. Ingreso del Resultado: El programa pedirá al usuario que ingrese el resultado final que obtuvo después de realizar las operaciones indicadas.

4. Cálculo para adivinar el numero:

   - Al número que resultó de las operaciones anteriores, réstale 250.
   - Luego, divide el resultado entre 100.

Nota:
Cada vez que el usuario oprime Enter, el programa capturará la acción, pero no se almacenará ningún valor específico. Para esto, se puede utilizar la instrucción:

```bash
getc(stdin);
```

Esta función detiene la ejecución del programa hasta que el usuario presione Enter, permitiendo que el programa avance sin capturar ni almacenar ningún valor.

#### Resultado esperado en consola

```bash
---------- ADIVINAR NUMERO ----------

Piensa en un numero y oprime enter cuando lo haya hecho


Multiplique el numero por 5 y oprime enter cuando lo haya hecho


Sume 12 a lo que quedo y oprime enter cuando lo haya hecho


Multiple por 10 lo que quedo y oprime enter cuando lo haya hecho


Sume 5 a lo que quedo y oprime enter cuando lo haya hecho


Multiplique lo que quedo por 2 y oprime enter cuando lo haya hecho


¿Que numero te quedo?
950

El numero pensado fue: 7
```

[Solución - Adivinar Número](Ejercicio%202%20-%20Entrada%20de%20Datos/adivinarNumero.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Problema de física

#### Objetivo

Haz un programa que resuelva el siguiente problem de física.

`Un avión parte de reposo y debe alcanzar los 80m/s en 50s. ¿Qué distancia debe tener la pista de despegue?`

Fórmula para el cálculo de la distancia:

![Fórmula distancia](assets/img/formula-distancia.png)

Para la aceleración calculada con la ecuación.

![Formula aceleración](assets/img/formula-aceleracion.png)

#### Resultado esperado en consola

```bash
---------- Problema de Fisica ----------

Un avion parte del reposo y debe alcanzar los 80m/s en 50s.
¿Que distancia debe tener la pista de despegue?

Aceleracion (a) = 1.60 m/s^2

La distancia es = 2000.00 m
```

[Solución - Problema de Física](Ejercicio%202%20-%20Entrada%20de%20Datos/mrua.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Distancia entre dos puntos

#### Objetivo

Hacer un programa para calcular la distancia entre dos puntos con coordenadas (x1, x2) y (y1, y2). Haciendo uso de la siguiente fórmula:

![Distancia entre dos puntos](assets/img/distancia-puntos.png)

Nota: Incluir la librería `<math.h>` para usar las funciones `pow` y `sqrt`:

- `pow(b,p)`: calcula `b` elevado a la potencia de `p`.
- `sqrt(x)`:calcula la raíz cuadrada de `x`.

#### Resultado esperado en consola

```bash
---------- Distancia Entre Dos Puntos ----------

Introude las coordenadas
x1 = 5
x2 = 1
y1 = 3
y2 = 1

La distancia entre los puntos es: 4.472136
```

[Solución - Distancia Entre Dos Puntos](Ejercicio%202%20-%20Entrada%20de%20Datos/distanciaDosPuntos.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 3 - Estructuras Condicionales

### Par o Impar

#### Objetivo

Realizar un programa que determina si un número ingresado por el usuario es PAR o IMPAR.

#### Resultado esperado en consola

```bash
---------- PAR o IMPAR ----------

Introduce un numero: 2

El numero 2 es PAR
```

```bash
---------- PAR o IMPAR ----------

Introduce un numero: 5

El numero 5 es IMPAR
```

[Solución - Par o Impar](Ejercicio%203%20-%20Estructuras%20Condicionales/par-impar.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Multiplos

#### Objetivo

Hacer un algoritmo para que dados dos enteros ingresados por el usuario, se diga si uno es multiplo del otro.

#### Resultado esperado en consola

```bash

Ingresa el primer numero: 5

Ingresa el segundo numero: 35

35 es multiplo de 5
```

```bash
---------- MULTIPLOS ----------

Ingresa el primer numero: 5

Ingresa el segundo numero: 2

5 y 2 no son multiplos
```

[Solución - Multiplos](Ejercicio%203%20-%20Estructuras%20Condicionales/multiplos.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Boletos de Avión

#### Objetivo

Escribir un programa para preguntar al usuario la edad de 3 personas que viajarán en un avión, luego indicar el costo a pagar por cada uno y el monto total, considerando que el costo del boleto es de 2000 pesos y se tienen los siguientes descuentos:

- niños menores de 2 años tienen un descuento del 100%
- niños de hasta 12 años tienen un descuento del 30%
- personas de 60 años o más tienen un descuento del 50%
- si la edad no cae dentro de alguno de los rangos anteriores, no hay descuento.

#### Resultado esperado en consola

```bash
---------- Costos de Boletos de Avión -----------

Introduce la edad de la persona 1: 1

Introduce la edad de la persona 2: 10

Introduce la edad de la persona 3: 69

Costo de boleto por persona: 2000
Costo persona 1 (100% descuento): 0 pesos
Costo persona 2 (30% descuento): 1400 pesos
Costo persona 3 (50% descuento): 1000 pesos

Total a Pagar: 2400 pesos

```

[Solución - Boletos de Avión](Ejercicio%203%20-%20Estructuras%20Condicionales/boletosAvion.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Cálculo de áreas de figuras

#### Objetivo

Realizar un algoritmo para calcular el área de un triángulo, rectángulo, cuadrado o círculo, según lo desee el usuario.

#### Resultado esperado en consola

```bash
Selecciona una opción para el cálculo del área
1) Triángulo
2) Rectángulo
3) Cuadrado
4) Círculo
Opción: 4

----- Área del Círculo -----

Ingresa la radio: 2

El área del Círculo es: 12.57
```

[Solución - Cálculo de área](Ejercicio%203%20-%20Estructuras%20Condicionales/areaFiguras.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 4 - Estructuras Iterativas

### Contador de Números

#### Objetivo

Hacer un algoritmo que pide varios números enteros al usuario y cuando el usuario da un cero el programa escribe cuántos números dio en total y termina. Haciendo uso de `mientras-haz` y `haz-mientras`

#### Resultado esperado en consola

```bash
---------- Contador de Números ----------

Da varios numeros y para terminar da un 0
1
2
3
4
5
6
7
8
9
0

Diste un total de 9 números
```

[Solución 1 - Contador de Números](Ejercicio%204%20-%20Estructuras%20Iterativas/contadorNumeros.c)

[Solución 2 - Contador de Números](Ejercicio%204%20-%20Estructuras%20Iterativas/contadorNumeros2.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Contador de números pares e impares

#### Objetivo

Analiza el siguiente pseudocódigo.

```c
Constante N ← 10
Algoritmo
Comienza
  Entero num,cont, npares, nimpares;
  npares ← 0;
  nimpares ← 0;
  Para cont←1 a N (conpaso + 1) hacer
  Comienza
    Escribe( “Ingresa un número positivo: “);
    Lee(num);
    Si (num >= 0) entonces
      Si( num MOD 2 == 0) entonces //es par
        npares ← npares +1;
      Otro //es impar
        nimpares ← nimpares +1;
    Otro
    Comienza
      Escribe(“ El numero “,num,” no es positivo”);
      cont ← cont -1;
    Termina
  Termina
Termina
```

El algoritmo le pide al usuario N números enteros positivos y al terminar dice al usuario cuántos fueron pares y cuántos impares.
Escribe un programa en C codificando el algoritmo presentado.

#### Resultado esperado en consola

```bash
---------- Contador de números Pares e Impares ----------

Ingresa un número positivo: 1

Ingresa un número positivo: 2

Ingresa un número positivo: 3

Ingresa un número positivo: 4

Ingresa un número positivo: 5

Ingresa un número positivo: -6
El número -6 no es poditivo

Ingresa un número positivo: 6

Ingresa un número positivo: 7

Ingresa un número positivo: 8

Ingresa un número positivo: 9

Ingresa un número positivo: 10

El numero de numeros pares es: 5

El numero de numeros impares es: 5
```

[Solución - Par e Impar](Ejercicio%204%20-%20Estructuras%20Iterativas/par-impar.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Divisores de un número

#### Objetivo

Escribe un programa en C en donde su tarea es desplegar todos los divisores de un número dado por el usuario. Un divisor será el que divide al numero, por lo que todos los divisores se encuentran en el intervalo de 1 a numero.

Por ejemplo, los divisores del número 28 son: 1, 2, 4, 7, 14 y 28.

Usando el tipo de estructura iterativa Repite-Hasta

#### Resultado esperado en consola

```bash
---------- Divisores de un Número ----------

Ingresa un número entero: 28

Los divisores del numero 28 son:
1 2 4 7 14 28

El número total de divisores de 28 es: 6

```

[Solución - Divisores de un número](Ejercicio%204%20-%20Estructuras%20Iterativas/divisores.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Números Primos

#### Objetivo

Desplejar todos los números mayores deb 50, menores que 1000 y que sean primos.

#### Resultado esperado en consola

```bash
---------- Números primos entre 50 y 1000 ----------
Los números primos entre el 50 y 1000 son:
53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 353 359 367 373 379 383 389 397 401 409 419 421 431 433 439 443 449 457 461 463 467 479 487 491 499 503 509 521 523 541 547 557 563 569 571 577 587 593 599 601 607 613 617 619 631 641 643 647 653 659 661 673 677 683 691 701 709 719 727 733 739 743 751 757 761 769 773 787 797 809 811 821 823 827 829 839 853 857 859 863 877 881 883 887 907 911 919 929 937 941 947 953 967 971 977 983 991 997
```

[Solución - Números Primos](Ejercicio%204%20-%20Estructuras%20Iterativas/primo.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Figuras

#### Objetivo

Hacer las siguientes figuras usando anidamiento de ciclos

#### Resultado esperado en consola

```bash
Primera figura

        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * * * * * * * *

Segunda figura

        * * * * * * * * * *
          * * * * * * * * *
            * * * * * * * *
              * * * * * * *
                * * * * * *
                  * * * * *
                    * * * *
                      * * *
                        * *
                          *
```

[Solución - Figuras](Ejercicio%204%20-%20Estructuras%20Iterativas/figuras.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Números de Fibonacci

#### Objetivo

Hacer un programa donde se le pida a el usuario un número, el programa debera calcular el número Fibonacci que pertenece el número dado.

#### Resultado esperado en consola

```bash
---------- Números de Fibonacci ----------

Que número de Fibonacci deseas obtener: 21


El número en Fibonacci es: 10946


¿Deseas obtener otro número? s/n
n

¡Adios!
```

[Solución - Números de Fibonacci](Ejercicio%204%20-%20Estructuras%20Iterativas/fibonacci.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 5 - Procedimientos y Funciones

### Cantidad de billetes

#### Objetivo

Dada una cantidad de dinero (en pesos) decir cuántos billetes con denominación 1000, 500, 200, 100, 50 y 20 pesos deben darse de tal forma que se entregue la mínima cantidad de billetes y el resto con monedas.

Modulariza el programa definiendo:

Una función que recibe como parámetro una cantidad de dinero y una denominación de billetes (1000, 500, 200, 100, 50 o 20) . El módulo desplegará cuántos billetes de la denominación pasada como parámetro deberá entregar al usuario, luego el módulo devolverá la cantidad de dinero que queda, después de dar dichos billetes.
Por ejemplo, si el módulo recibe los parámetros 24315 y 1000, desplegará:

“Se entregan 24 billetes de 1000 pesos.”

Y el valor regresado por la función será: 315

Un procedimiento que reciba una cantidad de dinero y despliegue que esa cantidad se regresará en monedas. Por ejemplo, si recibe 8 como parámetro, el módulo desplegará: “Se entregan 8 pesos en monedas.”

#### Resultado esperado en consola

```bash
Ingresa la cantidad de dinero: 12458

Se entregan 12 billetes de 1000 pesos
Se entregan 2 billetes de 200 pesos
Se entrega 1 billete de 50 pesos
Se entregan 8 pesos en monedas

¿Quieres dar otra cantidad? s/n
n

¡Adios!
```

[Solución - Cantidad de Billetes](./Ejercicio%205%20-%20Procedimientos%20y%20funciones/modularizar.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Máximo Común Divisor

#### Objetivo

Escribe una función que reciba dos números enteros, A y B, como parámetros formales y calcule el máximo común divisor de ellos. Realiza los siguientes pasos:

1.  En dicho módulo define dos apuntadores, apA y apB, e inicialízalos con las direcciones de A y B.

2.  Escribe el valor de A, B, &A, &B, apA, apB, *apA, *apB. Para escribir el valor de un apuntador (dirección) utiliza el formato: %p (para desplegar en código hexadecimal)

    - A y B: enteros
    - &A y &B : direcciones
    - apA y apB: direcciones *apA y *apB: enteros

3.  Codifica el pseudocódigo visto en clase para el cálculo del MCD, pero realiza el cálculo accesando a A y B únicamente desde sus apuntadores. Asegúrate de que A sea el número mayor y B el menor.

4.  Escribe el módulo main definiendo dos variables (num1 y num2) de tipo entero. Luego pide al usuario que ingrese dos enteros para calcular su MCD, leyendo las variables num1 y num2. Enseguida invoca a la función que calcula el MCD y escribe el resultado.

#### Resultado esperado en consola

```bash
---------- Máximo Común Divisor ----------

Introduce 2 números enteros

Número 1: 2
Número 1: 8

Valor de A = 2 B = 8

&A = 0x7ff7b05473ec &B = 0x7ff7b05473e8

apA = 0x7ff7b05473ec apB = 0x7ff7b05473e8

*apA = 2 *apB = 8

El MCD es: 2
```

[Solución - Máximo Común Divisor](./Ejercicio%205%20-%20Procedimientos%20y%20funciones/mcd.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 6 - Manejo de Arreglos unidimensionales y bidimensionales

### Números Random

#### Objetivo

Generar 20 numeros aleatorios y guardar los números dentro de una arreglo.

#### Resultado esperado en consola

```bash
---------- Números Aleatorios ----------
82 88 36 27 23 71 23 77 31 19 76 29 63 75 52 47 56 63 10 31
```

[Solución - Números Random](./Ejercicio%206%20-%20Manejo%20de%20Arreglos%20unidimensionales%20y%20bidimensionales/random.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Números Random 1.1.0

#### Objetivo

A continuación vamos a modularizar el ejercicio [Números Random](#números-random) de la manera siguiente:

1. Declara un procedimiento `Inicializa Arreglo` que se encarga de inicializar con números aleatorios las celdas (o casillas) de un arreglo y recibe los siguientes parámetros formales:

   ```c
   void Inicializa_arreglo(int Arreglo[], int size, int max_valor)
   ```

   El primer parámetro de salida (Arreglo) es el arreglo de enteros que será inicializado. El segundo parámetro (de entrada) indica el tamaño del arreglo Arreglo y el tercer parámetro (también de entrada) indica el máximo valor aleatorio que se asignará a las casillas del arreglo (el mínimo es 0).

2. A continuación declara el tipo cadena (abajo de la declaración de constantes):

   ```c
   typedef char cadena[256];
   ```

3. Luego escribe otro procedimiento llamado `Despliega Arreglo` que recibe tres parámetros formales (los tres son parámetros de entrada):

   ```c
   void Despliega_arreglo( int Arreglo [], int tamanio, cadena mensaje)
   ```

    El primer parámetro de entrada es el arreglo de enteros a escribir en pantalla. Los elementos del arreglo se separan con un espacio en blanco y sólo al final se salta línea. El segundo parámetro es el tamaño del arreglo y el tercero es un mensaje de encabezado que se debe escribir antes de desplegar los números.

4. Declara otra `constante MAX con valor 10`.
Modifica el módulo main: declara otro arreglo de enteros (DATOS) de tamaño MAX e invoca a los módulos escritos anteriormente, como se muestra a continuación

#### Resultado esperado en consola

```bash
---------- Números Aleatorios ----------

Arreglo con valores entre 0 y 100
31 80 11 77 53 91 12 35 18 42 64 33 4 100 33 0 73 86 33 16 

Arreglo con valores entre 0 y 20
5 7 3 7 17 2 8 1 0 6 1 14 5 2 15 15 17 15 4 20
```

[Solución - Números Random 1.1.0](./Ejercicio%206%20-%20Manejo%20de%20Arreglos%20unidimensionales%20y%20bidimensionales/random2.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios Extras

### Cálculo del Importe y el IVA

#### Objetivo

Elabora un programa que calcule el total a pagar por pedidos de platillos que realiza un cliente.

1. El usuario deberá solicitar al usuario.

   - Nombre del cliente
   - Nombre del platillo (sin IVA incluido)
   - Cantidad

2. El programa deberá.

- Calcular y mostrar el importe

  `importe = precio * cantidad`

- Calcular y mostrar el IVA

  `IVA = importe * 0.16`

- Calcular y mostrar el total a pagar

  `Total a pagar = importe * IVA`

#### Resultado esperado en consola

```bash
          ********** DATOS DEL ESTUDIANTE **********

Nombre del estudiante: XXXXX XXXXX XXXXX
Matricula: XXXXXXXXXX
Grupo: XXXXXX

Ingresa el nombre del cliente: Eduardo


          ********** DATOS DEL PEDIDO DE COMIDA **********

Ingrese el nombre del platillo: Pizza

Ingrese el precio del platillo sin IVA: 250

Ingrese la cantidad del platillo: 2

Importe sin IVA: 500.00

IVA: 80.00

          DATOS DEL CLIENTE Y TOTAL A PAGAR CON IVA

Nombre del cliente: Eduardo

Total a pagar del pedidio con IVA: 580.00
```

[Solución - Cálculo del Importe y el IVA](Ejercicios%20Extras/Calculo%20importe%20y%20el%20IVA/platillos.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Palíndromo

#### Objetivo

Realizar un código en C donde el usuario introduzca una frase. El algoritmo debe verificar si la frase del usuario es un palíndromo.

#### Resultado esperado en consola

```bash
---------- Palindromo ----------

Introduce una frase:
Anita lava la tina

La frase 'Anita lava la tina' es un Palindromo
```

```bash
---------- Palindromo ----------

Introduce una frase:
Hola como estas

La frase 'Hola como estas' no es un Palindromo
```

[Solución - Palíndromo](Ejercicios%20Extras/Palindromo/palindromo.c)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

### Gestión de inventario y ventas de productos

#### Objetivo

El programa deberá presentar un menu de la siguiente manera:

El programa debe permitir al usuario realizar las siguientes operaciones.

1. Inicialización de Inventario:

   Deberás definir un inventario inicial de 5 productos con nombres, precios de compra, precios de venta, cantidad disponible (stock) y el valor total del inventario.

   Ejemplo de productos:
   ![Tabla de productos](assets/img/tabla-producto.png)

2. Menú de opciones:

   ```bash
   Menú de opciones:
   1. Mostrar inventario actualizado
   2. Realizar venta
   3. Agregar stock a un producto
   4. Calcular total de ventas al día
   5. Salir

   Ingrese su opción:
   ```

3. Mostrar inventario actualizado:

   Mostrar el nombre del producto, precio de venta, cantidad disponible y valor total en inventario.

   `valor total de inventario = precio de venta * cantidad disponible`

   ![Tabla de productos](assets/img/ventas-inventario.png)

4. Realizar venta:

   Permitir al usuario seleccionar un producto para venta. Ingresar la cantidad de unidades a vender y calcular el precio total de la venta. Restar la cantidad vendida del stock disponible.

   `precio total de la venta = precio venta * cantidad de unidades vendidas`

   ```bash
   ---------- Ventas ----------

    Lista de Productos.

    1. Televisor
    2. Laptop
    3. Smartphone
    4. Tablet
    5. Camara

    Seleccione el producto a vender: 2

    Ingrese la cantidad de unidades a vender: 2

    Venta realizada exitosamente
    Monto total: 2400.00

   ```

5. Agregar stock a un producto:

   Permitir al usuario seleccionar un producto para agregar stock, ingresar la cantidad de unidades a agregar y sumar esta cantidad al stock disponible.

   ```bash
   ---------- Agregar stock a un producto ----------

   Lista de Productos.
   1. Televisor
   2. Laptop
   3. Smartphone
   4. Tablet
   5. Camara

   Seleccione el producto a vender: 2

   Ingrese la cantidad de unidades a agregar: 8

   Stock actualizado. Nuevo stock de Laptop: 11
   ```

6. Calcular total de ventas del día:

   Sumar todos los montos de las ventas realizadas y mostrar el total.

   ```bash
   ---------- Ventas del dia ----------

   Total de ventas del dia: 2400.00
   ```

7. Salir:

   Terminar la ejecución del programa

   ```bash
   Menú de opciones:
   1. Mostrar inventario actualizado
   2. Realizar venta
   3. Agregar stock a un producto
   4. Calcular total de ventas al día
   5. Salir

   Ingrese su opción: 5

   ¡Hasta luego!
   ```

[Solución - Gestion de inventario y ventas](Ejercicios%20Extras/Gestión%20de%20inventario%20y%20ventas)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Title

### Name Project

#### Objetivo

#### Resultado esperado en consola

```bash

```

[Solución](url)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

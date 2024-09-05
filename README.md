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
- [Extras](#extras)
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

## Extras

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

[Solución - Cálculo del Importe y el IVA](Extras/Calculo%20importe%20y%20el%20IVA/platillos.c)

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

[Solución - Palíndromo](./Extras/Palindromo/palindromo.c)

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

[Solución - Gestion de inventario y ventas](./Extras/Gestión%20de%20inventario%20y%20ventas)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Title

### Name Project

#### Objetivo

#### Resultado esperado en consola

```bash

```

[Solución](url)

[Volver a la Tabla de Contenido](#tabla-de-contenido)

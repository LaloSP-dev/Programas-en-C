# Programas en C.

## Tabla de contenido

 - [Tabla de contenido](#tabla-de-contenido)
 - [Objetivo](#objetivo)
 - [Elección del IDE](#elección-del-ide)
 - [Pasos de Compilación](#pasos-de-compilación)
 - [Ejercicios 1](#ejercicios-1)
    - [Saludo](#saludo)
    - [Saludo 2](#saludo-20)
 - [Ejercicios 2](#ejercicios-2)
    - [Entrada de datos](#entrada-de-datos)
    - [Adivinar número](#adivinar-número)
    - [Problema de física](#problema-de-física)
    - [Distancia entre dos puntos](#distancia-entre-dos-puntos)



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

## Ejercicios 1

### Saludo
#### Objetivo
Realizar un programa cuya tarea es desplegar un saludo y luego tu nombre.

#### Resultado esperado en consola
```bash
  Hola Mundo de GITHUB!
  Mi nombre es Eduardo
  Este es mi primer programa para GITHUB
```

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

[Volver a la Tabla de Contenido](#tabla-de-contenido)

## Ejercicios 2

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

[Volver a la Tabla de Contenido](#tabla-de-contenido)
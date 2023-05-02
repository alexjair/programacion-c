# Programación-C
Ejemplos y estructura en programacion en C, manejo de variables e tamaño de memoria.

-----------
<!-- Output copied to clipboard! -->

<!-- You have some errors, warnings, or alerts. If you are using reckless mode, turn it off to see inline alerts.
* ERRORs: 0
* WARNINGs: 0
* ALERTS: 2 -->


# **Programación en [ C](https://platzi.com/cursos/lenguaje-c/)**


# **Configuración**

Instalación en la ruta

**[https://sourceforge.net/projects/orwelldevcpp/](https://sourceforge.net/projects/orwelldevcpp/)**

Después de instalacion, configuracion de variables de entorno

En la ventana de “Variables de Sistema”	
![alt_text](images/image1.png "image_tooltip")


En la ventana de “en editar el Path de Windows”


![alt_text](images/image2.png "image_tooltip")



## Instalación de VSCODE y su complemento:


    Name: **C/C++ Compile Run**


    Id: danielpinto8zz6.c-cpp-compile-run


    Description: Compile & Run single c/c++ files easly


    Version: 1.0.44


    Publisher: danielpinto8zz6


    VS Marketplace Link: https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run

Para correr los programas con **F6**


# Estructura de un programa C

Entonces podríamos decir que la estructura esencial de cualquier programa en C consta de:



1. Directivas de Pre-Compilador (librerías)
2. Función main
3. Código dentro de la función main
4. Finalizacion de la función main (return)

**#include &lt;stdio.h> **

//Zona donde incluimos nuestras librerias. 

//Directivas de precompilador (Preprocessors Comands).

//Funcion principal, aqui es donde la ejecucion de mi programa comienza. Todo el codigo va aqui dentro.

**int main() ** 

{

    /*First hello world in C language*/

   ** printf("Hola Mundo");** //=> imprime en terminal

   ** return 0;**

}

 //=> return 0 termina la funcion. Siempre que ponga 0 en un return dentro de una funcion main, va a cerrar dicha funcion


# Tipos de Datos

 Aritmeticos:

    * (A) Valores enteros:

        * int: puede ser de 2 o 4 bytes, permite tener numeros negativos y positivos.

            * 2 Bytes -32,768 to 32,757

            * 4 bytes -2,147,483,648 to 2,147,483

            * unsigned int: puede ser de 2 o 4 bytes, no permite datos negativos.

                * 2 Bytes 0 to 65.535

                * 4 bytes 0 to 4,294,967,295

        * short 2 bytes

            * 2 bytes -32,768 to 32,767

            * unsigned short 2 bytes 0 to 65,535

        * long 8 Bytes

            * long 8 bytes -9223372036854775808 to 9223372036854775807

            * unsigned long 8 bytes 0 to 18446744073709551615

    * (B) De punto Flotante:

        * float 4 bytes 1.2E-38 to 3.4E+386 ( 6 decimal places)

        * double 8 bytes 2.3E-308 to1.7E+30815 (15 decimal places)

        * long double 10 bytes 3.4E-4932 to 1.1E+493219 (19 decimal places)


# Tipos de Enum

**void **: Especifica que no hay valor disponible, se usa en 3 escenarios

    1. - Función retorna un tipo de datos void        

 **void funcion()**

    2.- Función que tiene argumentos de tipo void         

**int rand(void)**

    3. - Puntero o apuntador que va a la dirección en memoria

        de un objeto, pero no le importa el tipo de dato que tenga.



* enum: guarda valores constantes en una lista, aunque puede incluir variables.

#**include** &lt;stdio.h>

enum **weekDays **{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}

int **main**()

{

    enum **weekDays **today;

    today = Wednesday;

    printf("Day %d", today + 1);

    return 0;

}

enum **designElements**

{

    ITALIC = 1;

    BOLD = 2;

    STRIKE = 3;

}



* "El tipo de datos **Enum **sirve para nombrar o identificar un determinado valor (usar un nombre que tengan algún sentido para el programador) , y así facilitar la lectura y mantenimiento del programa. En otras palabras es un apodo que se le da a un valor numérico, el cual tiene un sentido para el programador dentro del contexto del programa."
* "Los **nombres **o **identificadores **asignados dentro del enum, únicamente podrán ser cadenas de caracter que no empiecen por valores numéricos. (Tiene las mismas restricciones que los nombres de las variables). Si intenta asignar como identificador un valor numérico (int, float, double) o una cadena de caracteres que empiece por un número (por ejemplo 45a), el compilador arrojará un error. En este sentido, un nombre o identificador actuaría más como el nombre de una variable que como una variable de tipo string en sí misma. "
* 

“Nota: recuerde que el tipo de datos string no existe en C.”

Cómo plus:



* La función **sizeof**() : nos devuelve el tamaño de una variable en bytes.
    * sizeof(card)
* **\n** : hacemos retorno de carro y salto de línea.


# Variables y tamaños

VALORES ENTEROS:



* int = 4 Bytes (-2147483648 to 2147483647)
* unsigned int = 4 Bytes (0 to 4294967295)
* short = 2 Bytes (-32768 to 32767)
* unsigned short = 2 Bytes (0 to 65535)
* long = 8 Bytes (-9223372036854775808 to 9223372036854775807)
* unsigned long = 8 Bytes (0 to 18446744073709551615)

FLOTANTES:



* float = 4 Bytes (1.2E-38 to 3.4E+38) 6 decimal places
* double = 8 Bytes (2.3E-308 to 1.7E+308) 15 decimal places
* long double = 10 Bytes (3.4E-4932 to 1.1E+4932) 19 decimal places

CARÁCTER:



* char = 1 Byte (-128 to 127)
* unsigned char = 1 Byte (0 to 255)


```
#include <stdio.h>
//Variable Declarations
extern int a, b, c;
float f, g, h;
int main ()
{
    //Variable definition
    int a, b, c;
    //Variable inicialization
    g = 1000.999999;
    f = 1.111111;
    h = g + f;
    printf("Value of sum is: %f" , h);
    return 0;
}
```



# Constante

#include &lt;stdio.h>

const char letra = 77;

int main()

{

  printf("Hola, **%d** tiene un valor de **%c** en codigo ASCII", letra);

}

#include &lt;stdio.h>

#include &lt;stdlib.h>

#define PIZZACOST 1.5

#define p printf

const char NEWLINE = '\n';

int main (int argc, const char* argv[])

{

    float costPizza;

    float numberOfSlices = 3;

    costPizza = PIZZACOST * numberOfSlices;

    p("%.2f", costPizza);

    p("%c", NEWLINE);

    return 0;

}


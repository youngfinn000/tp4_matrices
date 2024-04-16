#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "string.h"

//& solo se usa adentro de los datos por parametro en el main cuando se trabaja con pilas ya que usan punteros

/// constante para la dimencion de las columnas
const int dimCol = 8;
const int dimFilas = 3;



///Trabajo Practico N 4: Matrices

/// //////////////////////////////                 Prototipo                  ////////////////////////////////////////////////////////////////////////////////////////////////////


///Hacer una funcion que reciba como parmetro una matriz de nmeros enteros y permita que el usuario ingrese valores al mismo por teclado. La funcion debe cargar la matriz por completo.
///1
void cargarMatrizInt (int Matriz[dimFilas][dimCol]);

///Hacer una funcion que reciba como parmetro una matriz de nmeros enteros y la muestre por pantalla (en formato matricial).
///2
void mostrarMatrizInt (int Matriz[dimFilas][dimCol]);
///Hacer una funcion que reciba como parmetro una matriz de numeros enteros y que cargue la misma con numeros aleatorios (sin intervencion del usuario). La funcion debe cargar la matriz por completo.
///3
void cargaRandomMatrizInt (int matriz[dimFilas][dimCol]);
///Hacer una funcion tipo int que sume el contenido total de una matriz de nmeros enteros.
///4
int sumaDatosMatrizInt (int matriz[dimFilas][dimCol]);

///Hacer una funcion tipo float que calcule el promedio de una matriz de nmeros enteros.
///5
int contadorDatosMatriz(int matriz[dimFilas][dimFilas]);//subfuncion para la funcion de promedio
float promedioMatrizInt (int matriz[dimFilas][dimCol]);

///Hacer una funcion que determine si un elemento se encuentra dentro de una matriz de numeros enteros. La funcion recibe la matriz y el dato a buscar.
///6
void encontrarDatoMatriz(int matriz[dimFilas][dimCol],int dato);

///Hacer una funcion que cargue un arreglo de palabras (strings). La funcion debe retornar cuantas palabras se cargaron.  (puede ser a traves del parametro como puntero)
///7
int cargarArregloPalabras (char matriz[dimFilas][dimCol]);

///Hacer una funcion que muestre un arreglo de palabras.
///8
void mostrarArregloPalabras (char matriz[][dimCol],int validos);

///Hacer una funcion que determine si un string se encuentra dentro de un arreglo de strings. La funcion recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar. ///devuelve el ndice de la fila en que se encuentra, de lo contrario retorna -1
///9
int busquedaPalabra (char matriz[][dimCol],int validos,char wanted[]);

///Hacer una funcion que determine si un string se encuentra dentro de un arreglo de strings ordenado alfabticamente. La funcion recibe el arreglo, la cantidad de palabras que contiene y el string a buscar.  ///devuelve el ndice de la fila en que se encuentra, de lo contrario retorna -1
///10
int buscarPalabraEnArrayOrden (char matriz[][dimCol],int validos,char wanted[]);
///Hacer una funcion (o varias) que ordene un arreglo de palabras por orden alfabtico. (Por seleccion o insercion, el que ms te guste).
///11

int posMenorPalabra (char A[][dimCol],int validos,int pos);
void ordenarXInsercionArregloPalabras (char A[][dimCol],int validos);
///Hacer una funcion que retorne el determinante de una matriz de 2x2.
///12

///Funcion que verifique si una matriz de 2x2 tiene inversa.
///13








int main()
{
    srand(time(NULL));

    /// declaracion de matrices
    int FirstMatrix [dimFilas][dimCol];
    char matrizPalabras [dimFilas][dimCol];
    char buscado[5]="duki";
    /// declaracion de variables

    char seguir = 's';
    int caso;
    int total=0;
    float promedioM;
    int contadorr;
    int wantedInt = 6;
    int resultado;




    do
    {



        printf("1 carga manual de matriz int \n2 muestra una matriz int\n3 carga una matriz int de forma aleatoria\n");
        printf("4 suma los datos de una matriz int \n5 calcula el promedio de una matriz \n6 encuentra dato en matriz\n");
        printf("7 carga arreglo palabra \n8 muestra arreglo palabras \n9 encuentra posicion de una palabra buscada\n");
        printf("10        \n11    \n12         \n");

        printf("ingrese el numero del ejercicio para verlo : ");
        scanf("%d",&caso);
        switch(caso)
        {
        case 1:
            cargarMatrizInt(FirstMatrix);


            break;

        case 2:

            mostrarMatrizInt(FirstMatrix);


            break;

        case 3:
            cargaRandomMatrizInt(FirstMatrix);
            printf("su matriz se cargo de forma aleatoria");

            break;

        case 4:
            total=sumaDatosMatrizInt(FirstMatrix);
            printf("\n el total de la matriz es [%i]\n",total);
            break;

        case 5:
            promedioM=promedioMatrizInt(FirstMatrix);
            printf("el promedio de la matriz es :%.2f\n",promedioM);

            break;

        case 6:
            encontrarDatoMatriz(FirstMatrix,wantedInt);


            break;

        case 7:
            contadorr=cargarArregloPalabras(matrizPalabras);
            printf("validos %d\n",contadorr);

            break;

        case 8:
            //contadorr=cargarArregloPalabras(matrizPalabras);
            // printf("validos %d\n",contadorr);
            mostrarArregloPalabras(matrizPalabras,contadorr);
            break;

        case 9:
            printf("carga----------------\n");
            contadorr=cargarArregloPalabras(matrizPalabras);

            mostrarArregloPalabras(matrizPalabras,contadorr);

            printf("--------------------------------\n");
            resultado=busquedaPalabra(matrizPalabras,contadorr,buscado);


            printf("ubicacion de la palabra buscada:|%d|\n",resultado);

            break;

        case 10:
            printf("carga----------------\n");
            contadorr=cargarArregloPalabras(matrizPalabras);

            mostrarArregloPalabras(matrizPalabras,contadorr);

            printf("--------------------------------\n");

            printf("|%s|",buscado);
            resultado=buscarPalabraEnArrayOrden(matrizPalabras,contadorr,buscado);

            printf("ubicacion %d\n",resultado);
            printf("|%s|",matrizPalabras[resultado]);

            break;

        case 11:


            printf("carga----------------\n");
            contadorr=cargarArregloPalabras(matrizPalabras);

            mostrarArregloPalabras(matrizPalabras,contadorr);

            printf("--------------------------------\n");
//            ordenarXInsercionArregloPalabras(matrizPalabras,contadorr);
            printf("------------------------\n");
            mostrarArregloPalabras(matrizPalabras,contadorr);

            break;

        case 12:

            break;

        case 13:

            break;

        case 14:

            break;

        case 15:

            break;

        default:
            printf("error, caso inexistente\n ingrese un numero del 1 al 13:");
            scanf("%d",&caso);

        }
        printf("si desea ver otro ejercicio presione s, si quiere finalizar presione algo distinto de s:\n");
        fflush(stdin);
        scanf("%c",&seguir);

    }
    while(seguir == 's');

    return 0;
}
/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// ////////////////////////////////////////////////////////////      funciones          /////////////////////////////////////////////////////////////////////////////////////////////

/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// 1

void cargarMatrizInt (int Matriz[dimFilas][dimCol])
{


    for(int f=0; f<dimFilas; f++)  // for para recorrer las flias
    {
        for(int c=0; c<dimCol; c++) //for para recorrer las columnas
        {
            printf("ingrese un numero entero\n");
            scanf("%d",&Matriz[f][c]);
        }
    }
}

/// 2
void mostrarMatrizInt (int Matriz[dimFilas][dimCol])
{


    for(int f=0; f < dimFilas; f++)
    {
        for(int c=0; c<dimCol; c++)
        {
            printf("|%i|",Matriz[f][c]);
        }
        printf("\n");
    }
}

/// 3
void cargaRandomMatrizInt (int matriz[dimFilas][dimCol])
{


    for (int f=0; f < dimFilas; f++)
    {
        for(int c=0; c < dimCol; c++)
        {
            matriz[f][c]=(rand()%10);
        }
    }
}
/// 4
int sumaDatosMatrizInt (int matriz[dimFilas][dimCol])
{
    int suma=0;
    for (int f = 0; f<dimFilas; f++)
    {
        for(int c = 0; c <dimCol; c++)
        {
            suma+= matriz[f][c];
        }

    }
    return suma;
}

/// 5
int contadorDatosMatriz(int matriz[dimFilas][dimFilas])
{
    int contador=0;

    for (int f =0; f<dimFilas; f++)
    {
        for(int c=0; c<dimCol; c++)
        {
            contador++;
        }
    }
    return contador;
}

float promedioMatrizInt (int matriz[dimFilas][dimCol])
{
    float promedio=0;
    int suma=sumaDatosMatrizInt(matriz);
    int contador=contadorDatosMatriz(matriz);


    promedio=(float)suma/contador;


    return promedio;
}

/// 6
void encontrarDatoMatriz(int matriz[dimFilas][dimCol],int dato)
{
    int busqueda=0;

    for(int f=0; f<dimFilas; f++)
    {
        for(int c=0; c<dimCol; c++)
        {
            if(dato== matriz[f][c])
            {
                busqueda=1;

            }
        }
    }
///--------------------------------------------------------
    if(busqueda==1)
    {
        printf("el dato buscado  si  se encontro\n");
    }
    else
    {
        printf("el dato buscado   no   se encontro\n");
    }
}

/// 7
int cargarArregloPalabras (char matriz[dimFilas][dimCol])
{

    int palabrasCargadas=0;
    char confirmar='s';
    while(confirmar=='s' && palabrasCargadas<dimFilas)
    {
        printf("ingrese una palabra:\n");
        fflush(stdin);
        scanf("%s",&matriz[palabrasCargadas]);
        palabrasCargadas++;
        printf("\npara cargar mas palabras presionar s\n");
        fflush(stdin);
        scanf("%c",&confirmar);

    }
    return palabrasCargadas;
}

/// 8
void mostrarArregloPalabras (char matriz[][dimCol],int validos)
{
    printf("\n---------------->%i\n",validos);
    for(int f=0; f<validos; f++)
    {
        printf("|%s|",matriz[f]);
        printf("\n");
    }
}

/// 9
int busquedaPalabra (char matriz[][dimCol],int validos,char wanted[])
{
    // si es -1 es que no esta
    int ubicacion = -1;


    for(int f=0; f<validos; f++)
    {
        if( strcmp(matriz[f],wanted)==0)
        {
            ubicacion=f;
        }
    }
    return ubicacion;// devuelve la ubicacion de la palabra buscada
}

/// 10
/// igual que la 9
int buscarPalabraEnArrayOrden (char matriz[][dimCol],int validos,char wanted[])
{
// si es -1 es que no esta
    int ubicacion = -1;
    int ubi=0;
    if(strcmp(matriz[ubi],matriz[ubi+1])== -1)
    {
        for(int f=0; f<validos; f++)
        {
            if( strcmp(matriz[f],wanted)==0)
            {
                ubicacion=f;
            }
        }
    }
    else
    {
        printf("la matriz no esta ordenada alfabeticamente\n");
    }

    return ubicacion;// devuelve la ubicacion de la palabra buscada
}
/// 11

int posMenorPalabra (char A[][dimCol],int validos,int pos)
{
    char menor=A[pos];
    int posMenor=pos;
    int index=pos+1;

    while(index < validos)
    {
        if(menor>A[index])
        {
            menor=A[index];
            posMenor=index;
        }
        index++;
    }
    return posMenor;
}

/*void ordenarXInsercionArregloPalabras (char A[][dimCol],int validos)
{
    char aux [dimCol];
    int posmenor;
    int i = 0;

    while(i < validos-1) // no se valida la ultima posicion porque es la mayor
    {
        posmenor = posMenorPalabra(A,validos,i);
        aux[] =A[posmenor];
        A[posmenor]=A[i];
        A[i] = aux;
        i++;
    }
}*/

/// /////////////////////////   anotaciones de funciones         ////////////////////////////////////////////////////

/// strcmp compara con dif de min y may, strcmpi compara palabras sin diferenciar may de min

/*
strcpy (arr2,arr1);
if (strcmp (arr1,arr2)==0)  // a arreglo 1 le resta letra por letra, si
printf son iguales
else
    son distintos


    ///agrega cadena de char o un array de char al final si es que queda espacio disponible
    strcat(arr2,"algo ")
    printf("%s",palabra)//%s muestra la cadena de caracteres completa
    scanf("%s",&muchaspalabras[f])*/



/*La librera string.h en C proporciona funciones para manipular cadenas de caracteres. Estas funciones son ampliamente utilizadas y estn garantizadas para funcionar en cualquier plataforma que admita C. A continuacion, se presentan algunas de las funciones ms comunes de la librera string.h:

Copiar y concatenar cadenas:
strcpy(destino, origen): Copia la cadena origen en destino.

strcat(destino, fuente): Concatena la cadena fuente al final de destino.

Comparar cadenas:
strcmp(cadena1, cadena2): Compara alfabticamente dos cadenas.

strncmp(cadena1, cadena2, n): Compara los primeros n caracteres de dos cadenas.

Obtener la longitud de una cadena:
strlen(cadena): Devuelve la longitud de la cadena (nmero de caracteres).

Buscar caracteres o subcadenas:
strchr(cadena, carcter): Localiza la primera ocurrencia del carcter en la cadena.

strstr(cadena, subcadena): Busca la primera aparicin de la subcadena dentro de la cadena.

Modificar caracteres en una cadena:
strncpy(destino, fuente, n): Copia los primeros n caracteres de la fuente en destino.

strncat(destino, fuente, n): Concatena los primeros n caracteres de la fuente al final de destino.

Otras funciones utiles:
memset(destino, valor, n): Llena los primeros n caracteres de destino con el valor especificado.
strtok(cadena, delimitador): Divide una cadena en tokens utilizando el delimitador*/

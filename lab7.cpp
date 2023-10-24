#include "iostream"
#include "string"
using namespace std; 


/*Dado el siguiente arreglo de caracteres {'F','E','R','C','A',’O’,’I’,’L’} formar las
siguientes palabras en consola:*/

 main()
{
    /*Variable STR para almacenar el array*/
    string palabra[5] = {"T", "E", "R", "M", "O"};


    /*Inicia el codigo*/
    cout<<"Palabras a imprimir \n";
    /*Literal A */
    string frase1 = palabra[0] + palabra[1] + palabra[2] + palabra[2] + palabra[1] + palabra[3] + palabra[4] + palabra[0] + palabra[4] + "\n";
    /*Literal B*/
    string frase2 = palabra[3] + palabra[1] + palabra[0] + palabra[2] + palabra[4];
    /*Literal C*/
    string frase3 = palabra[3] + palabra[4] + palabra[2] + palabra[0] + palabra[1] + palabra[2] + palabra[4];
    /*Literal D*/
    string frase4 = palabra[3] + palabra[4] + palabra[0] + palabra[4] + palabra[2];
    /*Literal E*/
    string frase5 = palabra[0] + palabra[1] + palabra[3] + palabra[4] + palabra[2];


    /* SALIDA  */
    cout<<"A. "<<frase1;
    cout<<"B. "<<frase2<<endl;
    cout<<"C. "<<frase3<<endl;

    cout<<"D. "<<frase4<<endl;
    cout<<"E. "<<frase5<<endl;





    return 0;
}

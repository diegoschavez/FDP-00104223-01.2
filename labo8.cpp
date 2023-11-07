#include "iostream"
 using namespace std; 


 /*Desarrollar un sistema de gestión de proyectos artísticos. Cada proyecto será un struct, y
dentro de esta estructura se incluirá otra struct para representar al artista principal.*/

struct Artista
{
    string nombre; 
    int edad; 
    int years_ex; 
};


struct pinturas
{
    string obra;
    string frase;
    int year; 
    Artista artista; 

};






int main()
{
    /* Variable para el for */
    int n = 0; 
    cout<< "Bienvenido para ingresar tu proyecto artistico "<<endl;
    cout<<"Ingresa el tamanio de lista : ";
    cin>>n;  
    /* Variable para tener el arreglo */
    Artista obrero[n];
    pinturas lista[n] ;

    /* For que toma datos en base numero de lista*/
    for (int i = 0; i < n; i++)
    {
    cout<<endl<<"Ingresa tu proyecto " + to_string (i + 1) + " : "; 
    cin>>lista[i].obra;

    cout<<endl<<"Ingresa tu palabra que mejor decribiria tu proyecto  " + to_string (i + 1) + " : "; 
    cin>>lista[i].frase;

    cout<<endl<<"Years que llevas con tu proyecto artistico: "  + to_string (i + 1) + " : "; 
    cin>>lista[i].year;

    /* Parte del usuario ( Segunda Structure )*/
    cout<<endl<<"ingresa tu nombre :";
    cin>>obrero[i].nombre;
    cout<<endl<<"ingresa tu edad :";
    cin>>obrero[i].edad;
    cout<<endl<<"ingresa tus anios de expereiencia :";
    cin>>obrero[i].years_ex;

    
    }
    cout<<endl;
    cout<<endl<<"Nuestras obras son : "<<endl;
    /* Cout de los datos */

    for (int i = 0; i < n; i++)
    {
        /* Datos mostrados a la pantalla */
        cout<<endl; 
        cout<<endl<< "Titulo   : " << lista[i].obra;
        cout<<endl<< "Frase  : " << lista[i].frase;
        cout<<endl<< "Years   : " << lista[i].year;
        cout<<endl<<"Datos de la persona  "<<obrero[i].nombre<<" , Edad : "<<obrero[i].edad<<" , Years de experiencia "<<obrero[i].years_ex;
    }
       





    return 0;
}

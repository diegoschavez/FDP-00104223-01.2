#include "iostream"
#include "fstream"
#include "string.h"

using namespace std; 

/*Ejercicio 20: Contar Palabras por Longitud:
Desarrolla un programa que lea un archivo de texto ("longitud.txt") y cuente la cantidad de
palabras de diferentes longitudes (por ejemplo, cuántas palabras tienen 3 letras, cuántas
tienen 4, etc.). Guarda el resultado en un nuevo archivo llamado "conteo_longitud.txt".*/

int main(){

    string linea;
    string nombre = "longitud.txt";
    ifstream archivo;

    archivo.open(nombre.c_str());

    /**/
    cout << "Estoy aqui" << endl;
    while (getline(archivo, linea))
    {
        
        int a = 0, b = 0; 
        
        for (int i = 0; i < linea.length(); i++)
        {
            if (linea[i] == ' ')
            {
                a ++;
            }
            
        }

        cout<< a << endl;
        string linea2;
        ofstream archivo2;
        string nombre2 = "conteo_longitud"; 
        archivo2.open(nombre2.c_str(), fstream::out);
        /*Agregando el contador al archivo*/
        

        archivo2 << " Esta linea de texto tiene " << a << endl;
            

        
        archivo2.close();
         
        
        
    }
    /**/
    archivo.close();



    return 0; 
}

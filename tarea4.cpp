#include"iostream"
#include "random"

using namespace std; 

/* Genere un arreglo con los primeros 10 numeros primos (los numeros deben de
calcularse en el momento) y luego realice las siguientes operaciones: suma, resta,
multiplicacion y división de las posiciones 7 y 9 del arreglo
*/

/*Funcion random */
int random(int min, int max){

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> distribution(min, max);

    return distribution(gen); 

}

/*Funcion Suma */
int sum( int a, int b){

    int result = 0; 
    result = a + b;  

    return result;
}

/*Funcion resta */
int rest( int a, int b){

    int result = 0; 
    result = a - b;  

    return result;
}


/*Funcion Multi */
int multi( int a, int b){

    int result = 0; 
    result = a * b;  

    return result;
}


/*Funcion divi */
float divi( float a, float b){

    int result = 0; 
    result = a / b;  

    return result;
}

int main(){

    /* Variables de almacenamiento */ 
    int a = 0 , b = 0 , c = 0 , d = 0, e = 0, f = 0, g = 0 , h =0, contador = 0;
     /* Arreglo de 10 para tomar solo los datos seleccionados  */  
    int array[10];

    /* Valor a ingresar del rango aleatorio  */  
    cout<<"Ingresa un valor minimo para el rango de numeros primos  "; 
    cin>>a; 
    cout<<endl<<"Ingresa el valor maximo  para el rango de numeros primos "; 
    cin>>b; 


/* Bucle while para tomar valores  */  
while(e <= 10 ){
    for (int i = 0; i <= b; i++)
    {
    c = random(a,b);
    d = c % 3;
    f = c % 2;
    g = c % 7;
    h =  c % 5;
    /* Este if es para calcular los factores primos y almacenarlos en el array  */  
    if (f != 0 && d != 0 && g != 0  && h != 0)
    {
        array[contador++]= c;
        e++;
    
        
    }
    }
    }
    
    /* Valor puesto en las funciones */  
    
    int suma = 0, resta = 0, mul = 0 , valor = 0, valor1 = 0; 
    float divisio = 0;
    
    /* aplicando los valores a las fnciones  */  
    suma = sum(array[6], array[8]);
    resta = rest(array[6], array[8]);
    mul = multi(array[6], array[8]);
    divisio = divi(array[6], array[8]);
    
    
        /* Datos mostrados a la pantalla */
        valor = array[6];
        valor1 = array[8];
        cout<<endl<< "Tus datos para hacer los valores son : "; 
        cout<< valor << "  "<< valor1; 
        cout<<endl<< "suma   : " << suma;
        cout<<endl<< "resta   : " << resta;
        cout<<endl<< "multiplicacion   : " << mul;
        cout<<endl<< "divisio   : " << divisio;
    

   return 0; 

}

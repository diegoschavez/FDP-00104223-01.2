#include "iostream"
#include "string"

using namespace std;

string espacio(int tam, int valor){

    int espacio = 0; 
    string texto = "";

    espacio = valor - tam;
    for (int i = 0; i < espacio; i++)
    {
        texto = texto + "  ";
    }
    
    return texto; 
}

void lunes();
void Martes();
void Miercoles();
void Jueves();
void Viernes(); 
void Sabado();
void Domingo();

main()
{
    

    lunes();
    Martes();
    Miercoles();
    Jueves();
    Viernes();
    Sabado();
    Domingo();


    /*El Faro - Robert Eggers
    Akira - Katsuhiro Ôtomo
    Cuentos de Terramar - Goro Miyazaki
    the hateful eight - Quentin tarantino 
    GodFellas - Martin Scorsese
    Island of dogs - Wes anderson 
    El infierno - Luis Estrada 
    Supercool - Greg Mottola*/


    return 0;
}


void lunes(){
    cout<<" _____________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula         |\n";
    cout<<" ---------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;
        string movie1;
        string movie2;
        string movie3;
        string movie4;
        string movie5;
        string movie6;
        string movie7;
        string movie8;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Ôtomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    for (int i = 0; i < 4; i++)
    {
        
        cout<< "Lunes " << espacio (2, 11)<< arrayL[i]<< espacio(1, 7)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}


void Martes(){
    cout<<" ____________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios  |\n";
    cout<<" ------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};

    for (int i = 0; i < 4; i++)
    {
        cout<< "Martes" << espacio (2, 10)<< arrayL[i]<< espacio(1, 7)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}

void Miercoles(){
    cout<<" ____________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios  |\n";
    cout<<" ------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};

    for (int i = 0; i < 4; i++)
    {
        
        cout<< "Miercoles " << espacio (2, 8)<< arrayL[i]<< espacio(1, 7)<< arrayLp[2]<<endl;
    }
    
    cout<<endl<<endl;

}
void Jueves(){
    cout<<" ____________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios  |\n";
    cout<<" ------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};

    for (int i = 0; i < 4; i++)
    {
        
        cout<< "Jueves" << espacio (2, 10)<< arrayL[i]<< espacio(1, 7)<< arrayLp[1]<<endl;
    }
    
    cout<<endl<<endl;

}

void Viernes(){
    cout<<" ____________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios  |\n";
    cout<<" ------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};

    for (int i = 0; i < 4; i++)
    {
        
        cout<< "Viernes " << espacio (2, 9)<< arrayL[i]<< espacio(1, 7)<< arrayLp[3]<<endl;
    }
    
    cout<<endl<<endl;

}

void Sabado(){
    cout<<" ____________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios  |\n";
    cout<<" ------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};

    for (int i = 0; i < 4; i++)
    {
        
        cout<< "Sabado" << espacio (2, 10)<< arrayL[i]<< espacio(1, 7)<< arrayLp[3]<<endl;
    }
    
    cout<<endl<<endl;

}

void Domingo(){
    cout<<" ____________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios  |\n";
    cout<<" ------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning;
        string lunch;
        string afternoon;
        string evening;
        float precio1;
        float precio2;
        float precio3;
        float precio4;
        float precio5;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};

    for (int i = 0; i < 4; i++)
    {
        
        cout<< "Domingo" << espacio (2, 9)<< arrayL[i]<< espacio(1, 7)<< arrayLp[2]<<endl;
    }
    
    cout<<endl<<endl;

}





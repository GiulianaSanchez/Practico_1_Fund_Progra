/******************************************************************************

9.	Construir un algoritmo que lea una cantidad de SEGUNDOS y los convierta en 
HORAS, MINUTOS Y SEGUNDOS 

*******************************************************************************/

#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

int main()
{
    cout<<"Conversión de segundos a horas, minutos y segundos."<<endl;
    
    int tiempo, horas, minutos, segundos;
    cout<<"Ingrese la cantidad de segundos: "<<endl;
    cin>>tiempo;
    
    if (tiempo%3600==0)
    {
        horas=tiempo/3600;
    }
    else
    {
        horas=tiempo/3600;
        tiempo=tiempo%3600;
    }   
        if (tiempo%60==0)
        {
            minutos=tiempo/60;
        }
        else 
        {
            minutos=tiempo/60;
            tiempo=tiempo%60;
            segundos=tiempo; 
        }
    
    cout<<"Son: "<<horas<<" hr(s) "<<minutos<<" minuto(s) "<<segundos<<" segundo(s)"; 
    return 0;
}


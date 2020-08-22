/******************************************************************************

6.	Construir un programa que permita convertir una hora dada en formato de 
24 horas (hora, minuto, segundo) a su equivalente en formato de 12 horas (AM o PM). 
Por ejemplo si se introduce 14, 45, 10 (formato de 24 horas), 
debe imprimirse 2, 45, 10 PM (formato 12 horas).

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;
    
int main()
{

    cout<<"Convertir horas en formato de 24 o 12 horas\n"<<endl;
    int hora, minuto, segundo, resultado;
    cout<<"Ingrese la hora: "<<endl;
    cin>>hora;
    
    cout<<"Ingrese los minutos: "<<endl;
    cin>>minuto;
    
    cout<<"Ingrese los segundos"<<endl;
    cin>>segundo;
    
    if (hora>12)
    {
        resultado=hora-12;
        cout<<"Son las "<<resultado<<":"<<minuto<<":"<<segundo<<endl;
        
    }
    else
        cout<<"Son las "<<hora<<":"<<minuto<<":"<<segundo<<endl;
       
       
    return 0;

}

/******************************************************************************

10.	Construir un algoritmo que lea dos horas del mismo día y halle la diferencia 
entre ellas. El ingreso de las horas debe ser en formato de 24 horas: HH, MM, SS, 
como así también la diferencia.
Ejemplo: 
                Hora Inicial:	    10 Hr    50 Min  40 Seg
                Hora Final:	        21 Hr    30 Min  10 Seg
                Diferencia:	        10 Hr    39 Min  30 Seg

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
    cout<<"Diferencia entre dos horas en formato de 24 horas."<<endl;
    int h1, m1, s1, h2, m2, s2, h3, m3, s3, d;
    cout<<"---INSTRUCCIONES---"<<endl;
    cout<<"1) Debe ingresar las dos horas en formato de 24 horas."<<endl;
    cout<<"2) Las horas ingresadas deben ser primera hora como cantidad inferior y segunda hora como cantidad superior. \n"<<endl;
    cout<<"Ingrese la primera hora en formato de 24 horas: "<<endl;
    cin>>h1;
    cout<<"Ingrese los minutos: "<<endl;
    cin>>m1;
    cout<<"Ingrese los segundos: "<<endl;
    cin>>s1;
    cout<<"Ingrese la segunda hora en formato de 24 horas: "<<endl; 
    cin>>h2;
    cout<<"Ingrese los minutos: "<<endl;
    cin>>m2;
    cout<<"Ingrese los segundos: "<<endl;
    cin>>s2;
    s1=s1+m1*60+h1*3600;
    s2=s2+m2*60+h2*3600;
    d=s2-s1;
    h3=d/3600;
    m3=(d%3600)/60;
    s3=(d%3600)%60;
    cout<<"La diferencia es de "<<h3<<" hr(s) ";
    if (m3<10)
    cout<<0;
    cout<<m3<<" min ";
    if (s3<10)
    cout<<0;
    cout<<s3<<" seg."<<endl; 
    
    
    return 0;
}


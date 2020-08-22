/******************************************************************************

5.	Calcular el interés  simple  que ganará un capital C en un periodo de N años,
conociendo que la tasa de interés es T. Suponer que el interés es pagadero por 
cada año y no es capitalizable.

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;


int main()
{
    
    float interes_simple, C, N, T; 
    cout<<"Interés Simple\n"<<endl;  

    cout<<"Ingrese el monto del capital: "<<endl;
    cin>>C; 
    
    cout<<"Ingrese el periodo de años: "<<endl;
    cin>>N;
    
    cout<<"Ingrese la tasa de interés: "<<endl;
    cin>>T;
    
    interes_simple=C*(T/100)*N;
    cout<<"El interés simple que ganará su capital en "<<N<<" años será de "<<interes_simple<<endl; 
    

    return 0;
}

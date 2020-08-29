/******************************************************************************

7.	Calcular el interés compuesto I que ganará un capital C en un periodo de 
N años, conociendo que la tasa de interés es T.

*******************************************************************************/

#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

int main()
{
    cout<<"Interés compuesto."<<endl; 
    float I, C, N, T, monto;
    cout<<"Ingrese el capital: "<<endl;
    cin>>C;
    cout<<"Ingrese el periodo de tiempo en años: "<<endl;
    cin>>N;
    cout<<"Ingrese la tasa de interés: "<<endl;
    cin>>T;
    monto=C*pow(1+T/100, T);
    I=monto-C;
    cout<<"El interés compuesto es: "<<endl<<I;
    
    
    
    
    
    return 0;
}


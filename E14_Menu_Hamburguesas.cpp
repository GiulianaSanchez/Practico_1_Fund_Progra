/******************************************************************************

14.	El siguiente es el menú de un restaurante de hamburguesas. Diséñese un 
algoritmo para calcular el total de la compras. 

		ITEM					           CANTIDAD 	  TOTAL PARCIAL
		Hamburguesas  (3Bs)				    xxxx			xxxxx.xx
		Hamburguesas  con queso (5Bs)	  	xxxx			xxxxx.xx
		Papas fritas (2Bs)				    xxxx			xxxxx.xx
		Soda	(2.5Bs)					    xxxx			xxxxx.xx
		T O T A L					        xxxx			xxxxx.xx

*******************************************************************************/

#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

int main()
{
    int ham, queso, papas, soda, opcion;
    float total1, total2, total3, total4, cuenta;
    
    cout<<"----------------MENÚ----------------"<<endl;
    cout<<"1) Hamburguesas simples:     3    Bs."<<endl;
    cout<<"2) Hamburguesas con queso:   5    Bs."<<endl;
    cout<<"3) Papas fritas:             2    Bs."<<endl;
    cout<<"4) Soda:                     2.50 Bs"<<endl;
    cout<<"0) Salir"<<endl;
    cout<<"Opción: ";
    cin>>opcion;
    switch (opcion)
    {
        case 1: cout<<"Ingrese cantidad: ";
                cin>>ham;
                total1=ham*3;
                break; 
        case 2: cout<<"Ingrese cantidad: ";
                cin>>queso;
                total2=queso*5;
                break;
        case 3: cout<<"Ingrese cantidad: ";
                cin>>papas;
                total3=papas*2;
                break;
        case 4: cout<<"Ingrese cantidad: ";
                cin>>soda;
                total4=soda*2.50;
                break;
        case 0: cout<<"Salir";
                break;
        default: cout<<"Error, no existe la opción.";
                break;
    }
    
    cuenta=total1+total2+total3+total4; 
    cout<<"CUENTA TOTAL: "<<cuenta<<" Bs."<<endl;

    return 0;
}

    

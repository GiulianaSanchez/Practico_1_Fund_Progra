/******************************************************************************

8.	Calcule la solución de un sistema de dos ecuaciones con 2 variables de la 
forma:

Ax + By = C 
Dx + Ey = F 

El algoritmo debe leer como entrada los 6 coeficientes de la ecuación, y dar 
como salida la solución X, Y, considerando todos los tipos de solución posibles
para todos los valores. 

*******************************************************************************/
#include <iostream>
#include "conio.h" 
#include "math.h"

using namespace std;

int main()
{
    cout<<"Sistema de dos ecuaciones"<<endl;
    float A, B, C, D, E, F, X, Y;
    cout<<"Ingrese el valor de A: "<<endl;
    cin>>A;
    cout<<"Ingrese el valor de B: "<<endl;
    cin>>B;
    cout<<"Ingrese el valor de C: "<<endl;
    cin>>C;
    cout<<"Ingrese el valor de D: "<<endl;
    cin>>D; 
    cout<<"Ingrese el valor de E: "<<endl;
    cin>>E;
    cout<<"Ingrese el valor de F: "<<endl;
    cin>>F;
    
    X = (-B*E+F*C)/(-B*D+A*F);
	Y = (-C*D+A*E)/(-B*D+A*F);
    
    cout<<"La solución del sistema de ecuaciones es: "<<endl;
    cout<<"x = "<<X<<endl;
    cout<<"y = "<<Y<<endl; 
    
    return 0; 
}

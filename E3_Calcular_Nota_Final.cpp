/******************************************************************************

3.	Construir un algoritmo para calcular la nota de final de un alumno sabiendo 
que rindió 3 exámenes parciales ponderados como 40 puntos, un examen final de 
40 puntos, un proyecto final de 20 puntos.  La nota final es la suma de los tres 
conceptos.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f, g, p, n;
    cout<<"Nota final del alumno \n"<<endl; 
    cout<<"Ingrese la calificacion del primer parcial: "<<endl; 
    cin>>a;
    
    cout<<"Ingrese la calificacion del segundo parcial: "<<endl;
    cin>>b;
    
    cout<<"Ingrese la calificacion del tercer parcial: "<<endl;
    cin>>c;
    d=((a+b+c)/3)*0.4;
   
    cout<<"Ingrese la calificacion del examen final: "<<endl;
    cin>>e;
    f=e*0.4;
   
    cout<<"Ingrese la calificacion de su proyecto final: "<<endl;
    cin>>g;
    p=g*0.2;
  
    n=p+f+d;
    cout<<"Su nota final de la materia es: "<<n<<endl;
    
    
    return 0;
}

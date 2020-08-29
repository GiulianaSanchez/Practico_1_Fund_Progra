/******************************************************************************

12.	Dada una fecha en día, mes y año, hacer un programa que determine si es
‘primavera’, ‘verano’, ‘otoño’ o ‘invierno’. Se sabe que la primavera comienza
el 21 de septiembre, el verano el 21 de diciembre, el otoño el 21 de marzo, y 
el invierno el 21 de junio.

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;

int main()
{   
    cout<<"Determinar si es primavera, verano, otoño o invierno."<<endl;
    int dia, mes, ano;
    cout<<"Introduzca el día en forma numeral y sin ceros por delante: "<<endl;
    cin>>dia;
    cout<<"Introduzca el mes en forma numeral: "<<endl;
    cin>>mes;
    cout<<"Introduzca el año en forma numeral: "<<endl;
    cin>>ano;
    if (mes==1)
        cout<<"Es Verano."<<endl; 
    else
        if (mes==2)
            cout<<"Es Verano."<<endl;
        else
            if (mes==3)
            {
                if (dia<21)
                    cout<<"Es Verano."<<endl;
                else
                    cout<<"Es Otoño."<<endl;
            }
            else 
                if (mes==4)
                    cout<<"Es Otoño."<<endl;
                else 
                    if (mes==5)
                        cout<<"Es Otoño."<<endl;
                    else 
                        if (mes==6)
                        {
                            if (dia<21)
                                cout<<"Es Otoño."<<endl;
                            else 
                                cout<<"Es Invierno."<<endl; 
                        }
                        else 
                            if (mes==7)
                                cout<<"Es Invierno."<<endl;
                            else 
                                if (mes==8)
                                    cout<<"Es Invierno."<<endl;
                                else 
                                    if (mes==9)
                                    {
                                        if (dia<21)
                                            cout<<"Es Invierno."<<endl;
                                        else 
                                            cout<<"Es Primavera."<<endl;
                                    }
                                    else 
                                        if (mes==10)
                                            cout<<"Es Primavera."<<endl;
                                        else
                                            if (mes==11)
                                                cout<<"Es Primavera."<<endl;
                                            else
                                                if (mes==12)
                                                {
                                                    if (dia<21)
                                                        cout<<"Es Primavera."<<endl;
                                                    else
                                                        cout<<"Es Verano."<<endl;
                                                }
    return 0;
}


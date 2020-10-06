/*Ejercicio 2. Determinar si u numero es primo o no, con punteros y ademas indicar en que posicion de
memoria se guardó el numero*/
#include <iostream>
using namespace std;
int main()
{
    int numero, c=0; 
    int *dir;
    cout<<"Digite un numero: ";
    cin>>numero;
    dir = &numero;

    for(int i=2; i<*dir; i++) //*dir es lo mismo que escribir numero
    {
        if(*dir%i == 0)
        {
            c++;
        }
    }
    if(c != 0)
    {
        cout<<"El numero "<<*dir<<" el numero no es primo"<<endl;
    }
    else
    {
        cout<<"El numero "<<*dir<<" es primo"<<endl;
        cout<<"La direccion de memoria es: "<<dir<<" es primo"<<endl; //escribir dir es lo mismo que &numero
    }
    
    return 0;
}
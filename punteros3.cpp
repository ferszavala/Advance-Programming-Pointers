/*Ejercicio 3. Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor 
elemento del vector*/
#include <iostream>
using namespace std;
int main()
{
    //en c++ en arreglos, las dimensiones de memoria de cada valor dentro del arreglo serán consecutivas
    int n, menor=999999; //menor es de una dimensión muy grande para que en el if si encuentra uno menor lo reemplace (se pone un numero muy grande porque es muy dificil que encuentre un numero mas grande que el que ya es menor, por lo tanto puede seguir asignando)
    int numeros[100];
    int *dir;
    cout<<"Digite el numero de elementos: "<<endl; cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<" Digite un numero: "; cin>>numeros[i];
    }
    dir = numeros; //es lo mismo que hacer dir = &numeros para una variable (en el caso de arreglos no es necesario)
    cout<<numeros<<endl; //va a imprimir la direccion de memoria por la linea  anterior
    cout<<dir<<endl; //va a imprimir la direccion en memoria
    cout<<*dir<<endl; //va a imprimir el valor en el array
    //solo va a imprimir ya sea el PRIMER valor de memoria (en la primera y segunda impresión) o el valor de la PRIMERA variable
    
    cout<<*(dir+3)<<endl; //imprime el valor en la posicion 3 del arreglo, o sea el numero 4
    cout<<(dir+3)<<endl; //imprime la tercera dirección del array

    for(int i=0; i<n; i++) //la n la tenemos controlada con el for (hasta donde llega *dir en length)
    {
        if(*dir < menor)
        {
            menor = *dir;
        }
        dir++; //para que vaya cambiando de lugar de memoria
    }

    cout<<"El numero menor es: "<<menor<<endl;
    return 0;
}
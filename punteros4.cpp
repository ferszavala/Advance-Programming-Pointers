/*Ejercicio 4. Punteros 2d (matrices con doble puntero)*/
#include <iostream>
using namespace std;
int main()
{
    //memoria dinamica: (fuerte en c++ por el uso de punteros) solo usar la memoria que necesitas
    int **pm;  //puntero doble, punero que apunta a otro puntero
    int cols, rows;
    cout<<"Ingrese el numero de filas: "; cin>>rows;
    cout<<"Ingresa el numero de columnas: "; cin>>cols;

    //introducción al uso de memoria dinámica
    pm = new int*[rows]; //genera un arreglos de una soladimesion que mida lo que mide rows y guardarlo en pm
    for(int i=0; i<rows; i++)
    {
        pm[i] = new int[cols]; //la palabra new guarda o aparta, un puntero por cada row y un puntero apuntando de se row a cada posicion del row(cada columna)
    }

    //forma de hacerlo de manera normal
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            pm[i][j] = i+j;
            cout<<pm[i][j]<<"-->";
            cout<<&pm[i][j]<<endl;
        }
        cout<<endl;
    }
    cout<<endl;

    //aritmetica de punteros (hace lo mismo que la parte de arriba)
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            *(*(pm+i)+j) = i+j; //con el pm+i suma en filas y la j para columnas (con los * accedes a los valores)
            cout<<*(*(pm+i)+j)<<"-->";
            cout<<&pm[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
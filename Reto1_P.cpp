/*Reto 1.  Realice un programa que lea una matriz dinámica de NxM y cree su 
matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
|1 2 3|       |1 4 7|
|4 5 6|  -->  |2 5 8|
|7 8 9|       |3 6 9|*/
#include<iostream>
using namespace std;
int main()
{
    //memoria dinamica: aparta el espacio en la memoria que necesitas
    int **pm;  
    int cols, rows;
    cout<<"Ingrese el numero de filas: "; cin>>rows;
    cout<<"Ingresa el numero de columnas: "; cin>>cols;

    pm = new int*[rows]; //genera un arreglos de una soladimesion que mida lo que mide rows y guardarlo en pm
    for(int i=0; i<rows; i++)
    {
        pm[i] = new int[cols]; //la palabra new guarda o aparta, un puntero por cada row y un puntero apuntando de se row a cada posicion del row(cada columna)
    }

    //Llenado de la matriz
    cout<<"Ingrese los valores de la matriz: ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>(*(*(pm+i)+j));
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<*(*(pm+i)+j)<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Impresión de la traspuesta
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            cout<<*(*(pm+j)+i)<<" ";
        }
        cout<<endl;
    }

    return 0; 
}
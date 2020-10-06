#include <iostream>
using namespace std;
int main()
{
    int *dir, numero = 10;
    dir = &numero;

    cout<<dir<<endl; //imprime el valor en memoria
    cout<<*dir<<endl; //desencripta e imprime el valor de la variable
    cout<<&dir<<endl; //imprime el valor en memoria

    numero = numero + 5; //operacion normal
    numero = *dir +5; //el astedisco desencripta (dereferencia) por o tanto se convierte en lo que trae numero
    *dir = *dir + 5; //las tres operaciones anteriores hacen exactamente lo mismo
    cout<<numero<<endl;

    int var = 500;
    int *p1;
    int **p2;
    int ***p3;
    p1 = &var; //para acceder a la variable de memoria de var
    p2 = &p1; //para acceder a la memoria del puntero 1
    p3 = &p2; //para acceder a la memoria del puntero 2

    return 0;
}
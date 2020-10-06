/*Reto 2. Pedir una cadena de caracteres (string) al usuario, e indicar cuantas 
veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar aritmetica de punteros*/
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char cad[200]={};
    char *dir_cad;
    int a=0, e=0, i=0, o=0, u=0;
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cad, 20, '\n');
    int l = strlen(cad);
    cad[l];
    cout<<l<<endl;
    dir_cad=cad;
    for(int j=0; j<l;j++)
    {
        if(*dir_cad == 'a')
        {
            a++;
        }
        else if(*dir_cad == 'e')
        {
            e++;
        }
        else if(*dir_cad == 'i')
        {
            i++;
        }
        else if(*dir_cad == 'o')
        {
            o++;
        }
        else if(*dir_cad == 'u')
        {
            u++;
        }
        dir_cad++; 
    }
    cout<<"La cadena "<<cad<<" tiene: "<<endl;
    cout<<a<<" letras a"<<endl;
    cout<<e<<" letras e"<<endl;
    cout<<i<<" letras i"<<endl;
    cout<<o<<" letras o"<<endl;
    cout<<u<<" letras u"<<endl;
    return 0; 
}
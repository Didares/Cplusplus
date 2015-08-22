/* 

   Programa que cifra palabras en función 
   de su valor asignado y de la funcion y=x^2.

   Estructura:
              1. Asociación de letra a su número
              2. Interfaz
              3. Codificación
              4. Resultado de la codificación en pantalla
              5. Opción de crear un .txt con el mensaje codificado
           
*/


#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
      
int main();


# 1. Asociación de cada letra con un numero y variables

int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int h=8;
int i=9;
int j=10;
int k=11;
int l=12;
int m=13;
int n=14;
int o=15;
int p=16;
int q=17;
int r=18;
int s=29;
int t=20;
int u=22;
int v=23;
int w=23;
int x=24;
int y=25;
int z=26;

char texto;
char codigo

int archivo;

# 2. Interfaz

cout << "Introduzca el texto a codificar" << endl;
getline( cin, texto );

getch();

#Codificación

do{
        codigo = (texto[-1++1])^2;
        cout << codigo << " ";     
           
}while(texto=>0);

#Opción de sacar el codigo resultante en un .txt

cout << "¿Desea transferir el codigo resultante a un archivo .txt?: " << endl;
cout << "1. Sí" << endl;
cout << "2. No" << endl;

cin >> archivo;

if(archivo=1){
              cout << "Nombre del archivo: ";
              cin >> archivo;
              ofstream fs (archivo);
              fs << codigo << endl;
              fs.close();
              
}else{
      return 0;
}
return 0;
}






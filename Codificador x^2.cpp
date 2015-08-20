/* 

   Programa que cifra/descifra palabras en funci�n 
   de su valor y de la funcion y=x^2

   Estructura:
              1. Asociaci�n de letra a su n�mero
              2. Interfaz
              3. Codificaci�n
              4. Resultado de la codificaci�n en pantalla
              5. Opci�n de crear un .txt con el mensaje codificado//Todavia en desarrollo
           
*/


#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
      
int main();


# 1. Asociaci�n de cada letra con un numero y variables

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

int nLetras;

char texto[];
char codigo[];

int archivo;

# 2. Interfaz

cout << "Introduzca el texto a codificar"endl;
cin >> texto;


#Codificaci�n

nLetras = sizeof(texto);

do{
        codigo = (texto[-1++1])^2;
        cout << codigo << " ";     
           
}while(texto=>0);

#Opci�n de sacar el codigo resultante en un .txt

cout << "�Desea transferir el codigo resultante a un archivo .txt?: " << endl;
cout << "1. S�" << endl;
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

}






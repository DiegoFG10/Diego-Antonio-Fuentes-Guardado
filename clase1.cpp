#include <iostream>
using namespace std ;
int suma (int num1 , int num2) ;
int main () {
    float num1 , num2 ;
    cout << " Ingresar el primer valor : " << endl ;
    cin >> num1 ;
    cout << " Ingresar el segundo valor : " << endl ;
    cin >> num2 ;
    cout << " El resultado de sumar los numeros es : " << suma ( num1 , num2 ) << endl ;
   }
int suma ( int num1 , int num2 ) {
    int resultado ;
    resultado = num1 + num2 ;
    return resultado ;
  }
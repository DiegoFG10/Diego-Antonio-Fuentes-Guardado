#include <iostream>

using namespace std ;

int main ( ) {
    int n , x , c = 0 , cp = 0 ;
    cout << " ingresar cantidad de numeros : " ;

    cin >> n ;
   while ( c < n )
   {
    cout << " Ingresar numero : " << endl ;
    cin >> x ;
    if ( x > 0 )
    cp = cp + 1 ;
    c = c + 1 ;
   }
    cout << " la cantidad de positivos : " << cp << endl ;
    getchar() ;
    return 0 ;

  }
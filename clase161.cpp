#include <iostream>
using namespace std ;

int num(int a) {
    if ( a < 0 ) {
    return -1 ;
}
   
    else if ( a > 0 ) {
    return 1 ;
}
    
    else {
    return 0 ;
    }
  }
int main ( ) {
    int a , b ;
    cout << " \n Ingrese un numero : \n \n " ;
    cin >> a ;
    cout << " \n \n \n \t " << num ( a ) ;
    return 0 ;
  }
                                         
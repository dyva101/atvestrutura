#include <iostream> 

using std:: cin; 
using std:: cout; 
using std:: endl; 
using std:: string;


int calcula_valor_absoluto ( int &iNumero); 

int calcula_valor_absoluto ( int &iNumero)
{

    if ( iNumero < 0) {
        iNumero *= -1; 
    }
    else {
        iNumero *= 1; 
    }

    return iNumero; 
}

int main()
{ 
    int iNumero = -5; 
    printf(" O valor absoluto de %d é: %d\n", iNumero, calcula_valor_absoluto(iNumero) );
    return 0; 
}
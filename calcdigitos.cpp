#include <iostream> 

using std:: cin; 
using std:: cout; 
using std:: endl; 
using std:: string;

void encontrarContagem(int &);

void encontrarContagem(int &iN)
{
    int iContar = 0;
  
    //Remove o último dígito do número
    //até que o número seja 0
    while (iN != 0) {
  
    //Incrementa a contagem
        iContar++;
        iN /= 10;
    }
  
    //retorna a contagem de dígitos
    iN = iContar;
}
  
int main()
{
    int iN = 98562;
    std::cout<<iN;
    encontrarContagem(iN);
    std::cout<<"Numero de digitos:"<<iN;
    return 0;
}
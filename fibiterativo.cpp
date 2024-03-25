#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void fibo_iter(int &iNum);

int main() {
    int iNum = 10;

    cout << "Antes de chamar a função: " << iNum << endl;
    fibo_iter(iNum);
    cout << "Fibonacci: " << iNum << endl;
    return 0;
}

void fibo_iter(int &iNum) {
    //fibonacci começando em 1 e 1
    int iTempX = 1;
    int iTempY = 1;
    int iTempZ = 0;
   for (int i = 0; i < iNum; i++) {
      iTempZ = iTempX + iTempY;
      iTempX = iTempY;
      iTempY = iTempZ;
   }
   iNum = iTempX;
}
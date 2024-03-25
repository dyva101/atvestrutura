#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void fatorial_iter(int&);

int main() {
    int iNum = 5;
    cout << "Antes de chamar a função: " << iNum << endl;
    fatorial_iter(iNum);
    cout << "Fatorial: " << iNum << endl;
    return 0;
}

void fatorial_iter(int &iNum) {
    int iTempNum = 1;
    for (int i = iNum; i >= 1; i--) {
        iTempNum *= i;
    }
    iNum = iTempNum;
}
#include <iostream>
using std::cout;

int progressao(float, int, float);

float progressao (float &fNum_0, int iNum, float fRazao) {
    float fSoma = 0;
    
    for (int i = 1; i <= iNum; i++) {
        fSoma += fNum_0;
        fNum_0 += fRazao;
    }
    
    return fSoma;

}

int main() {
    float fNum_0 = 1;
    int iNum = 100;
    float fRazao = 1;
    
    cout << progressao(fNum_0, iNum, fRazao);

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    
    int pontos;
    cin >> pontos;

    int modalidades = 0;

    while (pontos >= 8) {
        pontos -= 8; 
        modalidades++;
    }
    while (pontos >= 4) {
        pontos -= 4; 
        modalidades++;
    }
    while (pontos >= 2) {
        pontos -= 2; 
        modalidades++;
    }
    while (pontos >= 1) {
        pontos -= 1; 
        modalidades++;
    }

    cout << modalidades << endl;

    return 0;
}
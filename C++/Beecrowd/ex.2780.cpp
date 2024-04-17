#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ponto; 

    cin >> n;

    if (n <= 800) {
        ponto = 1;
    } else if (n <= 1400) {
        ponto = 2;
    } else if (n <= 2000) {
        ponto = 3;
    }

    cout << ponto << endl;
    
    return 0;
}
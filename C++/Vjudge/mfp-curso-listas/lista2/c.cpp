#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, resto, quociente;

    cin >> N;

    resto = N % 5;
    quociente = N / 5;

    if (resto == 0){
        cout << N << endl;
    } else if (resto < 3){
        cout << quociente*5 << endl;
    } else {
        cout << (quociente+1)*5 << endl;
    }

    return 0;
}
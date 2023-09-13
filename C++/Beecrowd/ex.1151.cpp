#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i = 0, valor = 0;

    cin >> N;
    int valores[N];

    while (i<N){
        if (i>=2){
            valores[i] = valores[i-1] + valores[i-2];
        } else {
            valores[i] = valor;
            valor++;
        }
        i++;
    }

    for(i=0; i<N; i++){
        if (i==(N-1)){
            cout << valores[i] << endl;
        } else {
            cout << valores[i] << " ";
        }
    }
    
    return 0;
}
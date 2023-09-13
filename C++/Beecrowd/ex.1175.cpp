#include <bits/stdc++.h>

using namespace std;

int main(){
    int total=20;
    int N[total], aux=0;

    for (int i=0; i<20; i++){
        cin >> N[i];
    }

    for (int i=0; i<10; i++){
        aux = N[i];
        N[i] = N[19-i];
        N[19-i] = aux;
    }

    for (int i=0; i<20; i++){
        cout << "N[" << i << "]" << " = " << N[i] << endl;
    }

    return 0;
}
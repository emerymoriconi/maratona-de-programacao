#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i=1, valor=1;

    cin >> N;

    while (i<=N*2){
        if (i%2==0){
            cout << valor << " " << ((valor*valor)+1) << " " << ((valor*((valor*valor)))+1) << endl;
            valor++;
        } else {
            if(i!=1){
                cout << valor << " " << (valor*valor) << " " << (valor*((valor*valor))) << endl;
            } else {
                cout << valor << " " << valor << " " << valor << endl;
            }
        }
        i++;
    }
    

    return 0;
}
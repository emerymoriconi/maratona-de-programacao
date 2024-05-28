#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

bool numPrimo(int v){
    if (v < 2) return false;
    for (int i = 2; i * i <= v; ++i) {
        if (v % i == 0) return false;
    }
    return true;
}

int main(){ 
    optimize;
    int quant; 
    cin >> quant;

    for(int i = 0; i < quant; i++){
        int valor;
        cin >> valor;
        bool encontrado = false;

        for(int j = 1; j <= valor/2; j++){
            int v1, v2;
            v2 = valor - j;
            v1 = j;

            if(!numPrimo(v1) && !numPrimo(v2)){
                cout << v1 << " " << v2 << endl;
                encontrado = true;
                break;
            }
        }

        if(!encontrado){
            cout << -1 << endl;
        }
    }

    return 0;
}
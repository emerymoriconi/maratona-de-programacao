#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

int main(){
    optimize;
    int n;
    string resp = "";
    vector<string> respostas;
    // para cada número de 0 a 2^n - 1
    // eu faço um xor com ele mesmo deslocado 1 bit para a direita
    // e imprimo o resultado
    cin >> n;

    for (int i = 0; i < (1 << n); i++){
        // operação XOR: ^
        int gray = (i ^ (i >> 1));
        resp = "";
        for (int j = n - 1; j >= 0; j--){
            // operação AND: &
            // se o bit j de gray for 1, imprimo 1
            // se não, imprimo 0
            resp += ((gray & (1 << j)) ? '1' : '0');
        }
        respostas.push_back(resp);
    }
     
    for (string x : respostas)
        cout << x << endl;

    return 0;
}
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
    vector<ll> v;

    cin >> n;

    for (int i = 0; i < n; i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    int anterior = 0;
    ll moves = 0;
    ll valor = 0;
    for (int atual = 1; atual < n; atual++){
        ll dif = v[atual] - (v[anterior] + valor);
        if (dif < 0) {
            valor = abs(dif);
            moves += valor;
        } else {
            valor = 0;
        }
        anterior = atual;
    }

    cout << moves << endl;

    return 0;
}
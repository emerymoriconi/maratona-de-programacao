#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

ll bin_exp(ll base, ll expoente, int M){
    if (expoente == 0) return 1;
    if (expoente == 1) return base%M;
    ll metade = (bin_exp(base, expoente/2, M)%M);
    if (expoente%2==0) return (metade * metade)%M;
    else return ((base)%M * metade * metade)%M;
}

int main(){
    optimize;
    ll base, expoente, z, M;

    int c;
    vector<ll> resp;

    cin >> c;

    for (int i = 0; i < c; i++){
        cin >> base >> expoente >> M;
        z = bin_exp(base, expoente, M);
        resp.push_back(z);
    }

    int zero;
    cin >> zero;

    for (ll x : resp){
        cout << x << endl;
    }

    return 0;
}
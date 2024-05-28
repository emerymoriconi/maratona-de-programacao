#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

// mod é usado para não estourar os altos valores da exponenciação

ll exp(ll base, ll expoente, int M){
    if (expoente == 0) return 1;
    ll metade = exp(base, expoente/2, M);
    if (expoente%2==0) return metade * metade;
    else return base * metade * metade;
}

int main(){
    optimize;
    ll base, expoente, R;
    int M;

    cin >> base >> expoente >> M;



    return 0;
}
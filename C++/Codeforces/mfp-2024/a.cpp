#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ft first
#define sd second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = 2e5 + 10; // tam max pra vetores
const ll INF = 1e18; // valor muito grande (infinito)
const ll SMALL = -1e9; // valor muito pequeno
const int MOD = 1e9+7; // numero primo muito utilizado como modulo

ll n, p;
ll v[MAXN];

bool f(ll chute){
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (sum >= p - chute/v[i]) return true;
        sum += chute/v[i];
    }
    return sum>=p;
}

ll busca_binaria(ll l, ll r){
    ll resp, mid;
    while (l <= r){
        mid = (l + r)/2;
        if (f(mid)){
            resp = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return resp;
}

int main(){
    optimize;
    cin >> n >> p;
    
    for (ll i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << busca_binaria(1, INF) << endl;    

    return 0;
}
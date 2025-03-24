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

const int MAXN = 1e5 + 10; // tam max pra vetores
const ll INF = 1e18; // valor muito grande (infinito)
const ll SMALL = -1e9; // valor muito pequeno
const int MOD = 1e9+7; // numero primo muito utilizado como modulo

int main(){
    optimize;
    ll n;
    cin >> n;
    vector<ll> v(n), aux(n);
    ll tam = 0, tam_max = 0;

    for (ll i = 0; i < n; i++){
        cin >> v[i];
    }

    // mapa com a ultima ocorrencia (indice) de cada numero
    map<ll, ll> mp;
    ll l = 0;

    for (ll r = 0; r < n; r++){
        if (mp.find(v[r]) == mp.end()){
            mp.insert({v[r], r});
        } else {
            if (mp[v[r]] >= l){
                l = mp[v[r]] + 1;
            }
            mp[v[r]] = r;
        }
        tam = r - l + 1;
        tam_max = max(tam, tam_max);
    }

    cout << tam_max << endl;

    return 0;
}
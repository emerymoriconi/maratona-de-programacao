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
    int t; cin >> t;
    ll k;
    vector<ll> v, res;
    set<ll> set;

    for (int i = 0; i < t; i++){
        v.clear();
        set.clear();
        
        for (int j = 0; j < 3; j++){
            cin >> k;
            v.push_back(k);
            set.insert(k);
        }
        ll resp;

        for (int i : set){
            int n = count(v.begin(), v.end(), i);
            if (n == 1) resp = i;
        }
        res.push_back(resp);
    }

    for (int a : res){
        cout << a << endl;
    }

    return 0;
}
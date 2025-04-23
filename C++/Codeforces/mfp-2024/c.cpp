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

int dfs(vector<int> &v, int k){
    if (2*k >= v.size()) return v[k];
    int sum = v[k] + max(dfs(v, 2*k), dfs(v, 2*k+1));
    return sum;
}

int main(){
    optimize;
    int n, coins; cin >> n;
    vector<int> v(1<<n);

    v[0] = 0;

    for (int i = 1; i <= (1 << n)-1; i++){
        cin >> v[i];
    }

    int resp = dfs(v, 1);

    cout << resp << endl;

    return 0;
}
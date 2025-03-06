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

// como N é pequeno, testamos todas as possibilidades com arvore de decisão
ll solve(int index, ll sum1, ll sum2, const vector<int>& array, int n){
    if (index == n) return abs(sum1 - sum2);

    ll escolher = solve(index+1, sum1+array[index], sum2, array, n);

    ll n_escolher = solve(index+1, sum1, sum2+array[index], array, n);

    return min(escolher, n_escolher);
}

int main(){
    optimize;
    int n;
    cin >> n;
    vector<int> pesos(n);

    for (int i = 0; i < n; i++){
        cin >> pesos[i];
    }

    ll resp = solve(0, 0, 0, pesos, n);

    cout << resp << endl;

    return 0;
}
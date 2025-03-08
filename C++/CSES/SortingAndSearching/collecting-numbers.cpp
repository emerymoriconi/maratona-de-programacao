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
    int n; cin >> n;
    vector<int> v(n);
    unordered_set<int> s;
    int rounds = 0;

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    stack<int> pilha;

    for (int i = n-1; i >= 0; i--){
        pilha.push(v[i]);
    }

    while (!pilha.empty()) {
        int a = pilha.top(); 
        
        if (s.find(a - 1) == s.end()) rounds++;
        
        s.insert(a);
        pilha.pop();
    }

    cout << rounds << endl;

    return 0;
}
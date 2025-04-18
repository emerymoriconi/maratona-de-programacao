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

// pra determinar se um grafo tem um CAMINHO euleriano
// verificamos se ele tem apenas 0 ou 2 vertices de grau impar,
// e se é conexo

// pra determinar se o grafo tem um CICLO euleriano
// verificamos se ele é conexo e se todos os seus vértices têm grau par

int main(){
    optimize;
    int a, b, grau = 0;
    vector<vector<int>> adj(5);

    for (int i = 0; i < 3; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= 4; i++){
        if (adj[i].size() % 2 != 0) grau++;
    }

    if (grau == 0 || grau == 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
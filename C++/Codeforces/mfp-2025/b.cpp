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

int n, m;
vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN);
vector<int> comp(MAXN);

void dfs(int s, int c_id){
    if (visited[s] == true) return;
    visited[s] = true;
    comp[s] = c_id;
    for (int viz : adj[s]){
        dfs(viz, c_id);
    }
}

int main(){
    optimize;
    cin >> n >> m;
    int componente = 0, dest, cons;

    // construindo o grafo
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if(visited[i] == false){
            dfs(i, componente);
            componente++;
        }
    }

    if ((componente > 1) || (m != n - 1)) 
    {
        cons = componente - 1;
        int arestas = cons + m;
        dest = arestas - (n-1);

        cout << "RUIM" << " " << dest << " " << cons << endl;
    } else 
    {
        cout << "BOM" << endl;
    }

    return 0;
}
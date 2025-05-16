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
const ll INF = (int)1e18; // valor muito grande (infinito)
const ll SMALL = -1e9; // valor muito pequeno
const int MOD = 1e9+7; // numero primo muito utilizado como modulo

vector<vector<pii>> adj(MAXN);
vector<int> dist(MAXN, INF);
vector<bool> visited(MAXN, false);

void dijkstra(int start) {
    dist[start] = 0;
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (auto [viz, peso] : adj[u]) {
            if (visited[viz]) continue;

            if (dist[u] + peso < dist[viz]) {
                dist[viz] = dist[u] + peso;
                pq.push({dist[viz], viz});
            }
        }
    }
}

int main(){
    optimize;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int s, t, b;
        cin >> s >> t >> b;
        adj[s].pb({t, b});
        adj[t].pb({s, b});
    }

    dijkstra(0);

    cout << dist[n+1] << endl;

    return 0;
}
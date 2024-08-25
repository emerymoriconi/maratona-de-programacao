#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define MAX 112

typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pi;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

vector<vector<int>> grafo(MAX);
vector<bool> visitados(MAX);    

void dfs (int v) {
    visitados[v] = true;

    // para cada vértice w na lista de adjacência de v
    for (auto w : grafo[v]) {
        if (!visitados[w]) {
            dfs(w);
        }
    }
}

int main(){
    optimize;
    int N, M, i, j;

    cin >> N >> M;

    for (int k = 0; k < M; k++){
        cin >> i >> j;
        grafo[i].push_back(j);
        grafo[j].push_back(i);
    }

    int times = 0;

    for (int l=1; l<=N; l++){
        if (!visitados[l]){
            dfs(l);
            times++;
        }
    }

    cout << times << endl;

    return 0;
}
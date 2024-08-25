#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pi;

const int MAX = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

vector<vector<int>> grafo(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void bfs(int s){
    queue<int> q;
    q.push(s); vis[s] = true;

    pai[s] = s; // para recuperar o caminho até o pai
    while (!q.empty()){
        int v = q.front(); 
        q.pop();
        vis[v] = true;

        for (auto w : grafo[v]){
            if (vis[w] != true){
                q.push(w); vis[w] = true;
                pai[w] = v;
            }
        }
    }   
}

vector<int> path(int v){
    vector<int> ret;
    if(!vis[v]) return ret;

    ret.push_back(v);
    while(v != pai[v]){
        v = pai[v];
        ret.push_back(v);
    }

    reverse(ret.begin(), ret.end());
    return ret; 
}

int main(){
    optimize;
    
    int N, M;

    cin >> N >> M;

    for (int i = 1; i <= M; i++){
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    bfs(1);
    vector<int> ans = path(N);

    if(ans.size() == 0) cout << "IMPOSSIBLE" << endl;
    else {
        cout << ans.size() << endl;
        for (auto u : ans) cout << u << " ";
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    vector<bool> visited(f + 1, false);
    vector<int> dist(f + 1, -1);
    queue<int> q;

    q.push(s);
    dist[s] = 0;
    visited[s] = true;

    while(!q.empty()){
        int atual = q.front();
        q.pop();

        if(atual == g) {
            cout << dist[atual] << endl;
            return 0;
        }

        if(atual + u <= f && !visited[atual + u]){
            visited[atual + u] = true;
            dist[atual + u] = dist[atual] + 1;
            q.push(atual + u);
        }

        if(atual - d > 0 && !visited[atual - d]){
            visited[atual - d] = true;
            dist[atual - d] = dist[atual] + 1;
            q.push(atual - d);
        }
    }

    cout << "use the stairs" << endl;

    return 0;
}
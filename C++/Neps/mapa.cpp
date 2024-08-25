#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pi;

const int MAX = 110;
const ll INF = 1e18;

using namespace std;

int L, C;
char mat[MAX][MAX];
bool vis[MAX][MAX];
// cima, baixo, esquerda, direita
vector<pair<int, int>> movimentos = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valido(pair<int, int> v){
    if (v.first > 0 && v.second > 0 && v.first <= L && v.second <= C && mat[v.first][v.second] == 'H' && vis[v.first][v.second] == false) return true;
    return false;
}

pair<int, int> bfs(pair<int, int> s){
    queue<pair<int, int>> q;
    pair<int, int> v;
    q.push(s), vis[s.first][s.second] = true; 

    while (!q.empty()){
        v = q.front(); 
        q.pop();
        
        for (auto m : movimentos){
            m.first += v.first;
            m.second += v.second;
            if (valido(m)){
                q.push(m);
                vis[m.first][m.second] = true; 
            }
        }
    }  
    return v; 
}

int main(){
    optimize;

    cin >> L >> C;

    for (int i = 1; i <= L; i++) for (int j = 1; j <= C; j++) cin >> mat[i][j];
    
    pair<int, int> inicio;
    pair<int, int> ans;

    for (int i = 1; i <= L; i++) for (int j = 1; j <= C; j++) {
        if (mat[i][j] == 'o'){
            inicio.first = i; inicio.second = j;
            ans = bfs(inicio);
        }
    }

    cout << ans.first << " " << ans.second << endl;

    return 0;
}
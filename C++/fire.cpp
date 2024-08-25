#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pi;

const int MAX = 1010;
// constante hexadecimal
// 0x3f corresponde a 63 em decimal
// o valor total é 1052688531, um valor grande o suficiente e pequeno o suficiente para permitir somas sem ultrapassar os limites dos tipos de dados
const ll INF = 0x3f3f3f3f;

using namespace std;

// n e m globais por conta da função de validação
int n, m;
char M[MAX][MAX];
bool vis[MAX][MAX];
int dist[MAX][MAX];
// cima, baixo, esquerda, direita
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u){
    return u.first >=0 && u.second >= 0 && u.first < n && u.second < m && M[u.first][u.second] != '#' && vis[u.first][u.second] == false;
}

// função que coordena o movimento da pessoa. a pessoa só se move para uma certa coordenada se não tiver fogo naquela posição (podemos verificar na matriz dist construída na função bfs_multisource())
int bfs(pair<int, int> s){
    // memset é uma função que seta todas as posições de uma matriz com um certo valor pré-definido
    // memset é necessário pois são executadas duas BFS's e são múltiplos casos de teste
    memset(vis, 0, sizeof vis);

    queue<pair<int, int>> q;
    q.push(s); vis[s.first][s.second] = true; dist[s.first][s.second] = 0;

    while (!q.empty()){
        pair<int, int> v = q.front(); 
        q.pop();

        if(v.first == 0 || v.second == 0 || v.first == n-1 || v.second == m-1) return dist[v.first][v.second] + 1;

        for(auto u : mov){
            u.first += v.first;
            u.second += v.second;
            
            if (val(u) && dist[v.first][v.second] + 1 < dist[u.first][u.second]){
                q.push(u); vis[u.first][u.second] = true;
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
            }
        }
    }   
    return -1;
}

// define as posições na matriz de distância -> matriz dist salva em qual momento o fogo chegou em cada uma das posições
void bfs_multisource(vector<pair<int, int>> ms){
    // memset é uma função que seta todas as posições de uma matriz com um certo valor pré-definido
    // memset é necessário pois são executadas duas BFS's e são múltiplos casos de teste
    memset(vis, 0, sizeof vis);
    memset(dist, INF, sizeof dist);

    queue<pair<int, int>> q;
    for(auto s : ms) q.push(s), vis[s.first][s.second] = true, dist[s.first][s.second] = 0; // distância dos elementos da multisource pra fonte é zero (os elementos da multisource são as fontes)

    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();

        for(auto u : mov){
            u.first += v.first;
            u.second += v.second;
            
            if (val(u)){
                q.push(u); vis[u.first][u.second] = true;
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
            }
        }
    }
}

int main(){
    optimize;
    
    int t; cin >> t;

    while(t--){
        cin >> m >> n;
        // BFS Multisource para os focos de incêndio ('*')
        // BFS para a pessoa ('@')

        vector<pair<int, int>> ms;
        pair<int, int> s;
        for(int i=0; i<n; i++) for (int j=0; j<m; j++){
            cin >> M[i][j];
            if (M[i][j] == '*') ms.push_back({i, j});
            if (M[i][j] == '@') s = {i, j};
        }
        bfs_multisource(ms);

        int ans = bfs(s);
        if(ans == -1) cout << 'IMPOSSIBLE' << endl;
        else cout << ans << endl;
    }

    return 0;
}
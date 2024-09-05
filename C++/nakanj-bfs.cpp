#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;
using namespace std;

const int MAX = 8;
const ll INF = 1e18;

bool vis[MAX][MAX];
// Movimentos do cavalo no tabuleiro
vector<pair<int, int>> movimentos = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {1, 2}, {-1, 2}};

bool valido(int x, int y) {
    // Verifica se a posição está dentro dos limites do tabuleiro e não foi visitada
    return x >= 0 && y >= 0 && x < MAX && y < MAX && !vis[x][y];
}

int bfs(pair<int, int> start, pair<int, int> dest) {
    queue<pair<pair<int, int>, int>> q;  // Fila que armazena a posição e o número de movimentos
    q.push({start, 0});
    vis[start.first][start.second] = true;

    while (!q.empty()) {
        auto [v, dist] = q.front(); // Desempilha o primeiro elemento
        q.pop();

        if (v == dest) {
            return dist; // Se alcançou o destino, retorna a distância
        }

        for (auto m : movimentos) {
            int nx = v.first + m.first;
            int ny = v.second + m.second;

            if (valido(nx, ny)) {
                vis[nx][ny] = true;
                q.push({{nx, ny}, dist + 1}); // Adiciona a nova posição e a nova distância na fila
            }
        }
    }

    return -1; // Caso não encontre o destino (não deveria ocorrer)
}

int main() {
    optimize;

    int t;
    cin >> t;

    while (t--) {
        string s_start, s_dest;
        cin >> s_start >> s_dest;

        // Convertendo as coordenadas do tabuleiro para índices de matriz (0 a 7)
        pair<int, int> start = {s_start[0] - 'a', s_start[1] - '1'};
        pair<int, int> dest = {s_dest[0] - 'a', s_dest[1] - '1'};

        // Resetando o vetor de visitados
        memset(vis, false, sizeof(vis));

        int ans = bfs(start, dest);
        cout << ans << endl;
    }

    return 0;
}
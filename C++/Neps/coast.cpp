#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pi;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    
    int M, N;

    cin >> M >> N;

    char grafo[M][N];
    int coast = 0;

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cin >> grafo[i][j];
        }
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (grafo[i][j] == '#'){
                if (i == 0 || j == 0 || i == M-1 || j == N-1) {
                    coast++; 
                    continue;
                }
                if (grafo[i][j+1] == '.' || grafo[i+1][j] == '.' || grafo[i][j-1] == '.' || grafo[i-1][j] == '.'){
                    coast++;
                }
            }
        }
    }

    cout << coast << endl;

    return 0;
}
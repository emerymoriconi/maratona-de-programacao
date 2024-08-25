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

int main(){
    optimize;
    int A = 1, V = 1, X, Y, n = 1, grau;
    list<int> aerop;

    cin >> A >> V;

    while (A != 0 && V != 0) {
        vector<vector<int>> grafo(MAX);  // lista de adjacência
        for (int i = 0; i < V; i++){
            cin >> X >> Y;
            // construindo a lista de adjacência
            grafo[X].push_back(Y);
            grafo[Y].push_back(X);
        }

        int maiorGrau = -1;

        for (int l = 1; l <= A; l++){
            grau = 0;
            for (auto w : grafo[l]){
                grau++;
            }
            if (grau > maiorGrau){
                maiorGrau = grau;
                aerop.clear();
                aerop.push_back(l);
            } else if (grau == maiorGrau){
                aerop.push_back(l);
            }
        }

        aerop.sort();

        cout << "Teste " << n << endl;

        for (auto a : aerop){
            cout << a << " ";
        }

        cout << endl << endl;
        aerop.clear();
        n++;
        cin >> A >> V;
    }

    return 0;
}
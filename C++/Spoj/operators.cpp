#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

// QUESTAO EM STAND BY

int main(){
    optimize;

    int N, S, valor = 0;
    vector<string> res;
    res.push_back("1");

    cin >> N >> S;

    for (int i = 1; i <= N; i++) {
        auto a = to_string(i);
        if (valor <= 0) {
            valor += i;
            if (i > 1) res.push_back("+");
        } else if (valor > 0 && valor < S) {
            valor -= i;
            res.push_back("-");
        }
        if (i > 1){
            res.push_back(a);
        }
    }

    if (valor == S){
        for (auto e : res)
            cout << e;
        cout << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
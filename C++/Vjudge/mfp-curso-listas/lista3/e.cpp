#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int n, m, tam = 0;

        cin >> n >> m;

        string a, b;
        vector<int> v(n), w(m);

        cin >> a >> b;

        for (int j = 0; j < n; j++){
            v[j] = a[j] - '0';
        }

        for (int j = 0; j < m; j++){
            w[j] = b[j] - '0';
        }

        int aux = 0;
        
        for (int j = 0; j < m; j++){
            if (aux >= n) break;
            if (w[j] == v[aux]){
                tam++;
                aux++;
            }
        }
        cout << tam << endl;
    }

    return 0;
}
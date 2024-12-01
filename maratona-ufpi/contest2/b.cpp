#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

int main(){
    optimize;
    int n; cin >> n;
    vector <int> c;
    int dif = 361;

    int v; cin >> v;
    c.push_back(v);

    for(int i = 1; i < n; i++){
        int ant = c[i-1];
        int aux = 0;

        int v1; cin >> v1;
        c.push_back(v1);

        if(ant < c[i])
            aux = c[i] - ant + 1;
        else
            aux = (360 - ant) + c[i] + 1;
        
        if (aux < dif)
            dif = aux;
    }

    cout << dif << endl;

    return 0;
}
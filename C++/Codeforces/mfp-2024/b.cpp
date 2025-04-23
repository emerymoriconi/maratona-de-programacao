#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ft first
#define sd second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = 1e5 + 10; // tam max pra vetores
const ll INF = 1e18; // valor muito grande (infinito)
const ll SMALL = -1e9; // valor muito pequeno
const int MOD = 1e9+7; // numero primo muito utilizado como modulo

int main(){
    optimize;
    vector<pii> v(4);

    for (int i = 0; i < 4; i++){
        cin >> v[i].first >> v[i].second;
    }

    int xi, yi;
    int x = v[0].first;
    int y = v[0].second;

    for (int i = 1; i < 4; i++){
        int x_aux = v[i].first;
        int y_aux = v[i].second;
        if (x_aux != x){
            xi = abs(x - x_aux);
        }
        if (y_aux != y){
            yi = abs(y - y_aux);
        }
    }    

    cout << xi*yi << endl;

    return 0;
}
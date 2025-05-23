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
    int n, x;
    
    cin >> n >> x;
    
    vector<int> coins(n);
    vector<ll> resp(x+1);

    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    resp[0] = 0;

    for (int i = 1; i <= x; i++){
        resp[i] = INF;
        for (auto c : coins){
            if ((i - c) >= 0){
                resp[i] = min(resp[i], resp[i-c] + 1);
            }
        }
    }

    if (resp[x] == INF){
        cout << -1 << endl;
    } else {
        cout << resp[x] << endl;
    }

    return 0;
}
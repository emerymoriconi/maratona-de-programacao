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
    int n, m;
    
    cin >> n >> m;
    vector<int> v(n), resp(m);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 1; i <= m; i++){
        auto it = lower_bound(v.begin(), v.end(), i);
        int num = v.end() - it;
        resp[i-1] = num;
    }

    for (int i = 0; i < resp.size(); i++){
        if (i == resp.size()-1){
            cout << resp[i] << endl;
            break;
        }
        cout << resp[i] << " ";
    }

    return 0;
}
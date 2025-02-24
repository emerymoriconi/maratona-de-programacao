#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;
const int MOD = 1e9+7;

using namespace std;

int main(){
    optimize;
    int n, m;
    
    cin >> n >> m;
    
    multiset<ll> tick;
    vector<ll> customer(m);

    for (int i = 0; i < n; i++){
        ll a;
        cin >> a;
        tick.insert(a);
    }
    
    for (int i = 0; i < m; i++) cin >> customer[i];

    for (int i = 0; i < m; i++){
        /* complexidade logn, diferente de aplicar 
        upper_bound(tick.begin(), tick.end(), customer[i]), que
        tem complexidade n.*/
        auto it = tick.upper_bound(customer[i]);

        if (it == tick.begin()){
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            tick.erase(it);
        }
    }

    return 0;
}
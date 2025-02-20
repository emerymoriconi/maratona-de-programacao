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
    ll n, m, k, resp = 0;

    cin >> n >> m >> k;

    vector<ll> a(n), b(m);

    for (ll i = 0; i < n; i++) cin >> a[i];
    
    for (ll i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end());
    sort(a.begin(), a.end());

    ll j = 0; 

    for (ll i = 0; i < n; i++){
        ll min = a[i] - k;
        ll max = a[i] + k;

        auto it = lower_bound(b.begin() + j, b.end(), min);

        if ((it != b.end()) && (*it <= max)){
                resp++;
                j = (it - b.begin()) + 1;
        }
    }

    cout << resp << endl;

    return 0;
}
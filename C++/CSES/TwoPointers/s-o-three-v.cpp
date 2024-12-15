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
    int n, l, r;
    vector<pair<ll, int>> v;
    vector<int> ans;
    ll x;

    cin >> n >> x;

    for (int j = 0; j < n; j++) {
        ll a;
        cin >> a;
        v.push_back({a, j + 1});
    }

    sort(v.begin(), v.end());

    for (r = 0; r < n; r++) {
        l = 0;

        while (l < r) {
            ll comp = x - (v[l].first + v[r].first);
            auto it = lower_bound(v.begin() + r + 1, v.end(), make_pair(comp, 0));

            if (it != v.end() && it->first == comp) {
                cout << v[l].second << " " << v[r].second << " " << it->second << endl;
                return 0;
            }
            l++;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}
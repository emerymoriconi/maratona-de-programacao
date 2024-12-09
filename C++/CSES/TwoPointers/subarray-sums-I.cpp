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
    int n, r = 0, l = 0, ans = 0;
    ll x;
    vector<ll> v;

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    ll sum = 0;

    for (r = 0; r < n; r++){
        sum += v[r];

        while (sum > x && l <= r) {
            sum -= v[l];
            l++;
        }

        if (sum == x) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
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
    ll n, q, a, b;

    cin >> n >> q;

    vector<ll> array(n+1, 0);
    vector<ll> prefix(n+1, 0);

    for (int i = 1; i <= n; i++){
        cin >> array[i];
        prefix[i] = prefix[i-1] + array[i];
    }

    for (int i = 0; i < q; i++){
        ll sum = 0;
        cin >> a >> b;
        sum = prefix[b] - prefix[a-1];
        cout << sum << endl;
    }

    return 0;
}
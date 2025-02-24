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
    int n, gondolas = 0; 
    ll x;

    cin >> n >> x;

    vector<ll> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int l = 0, r = v.size() - 1;
    
    while (l <= r){
        if (v[l] + v[r] <= x){
            gondolas++;
            l++;
            r--;
        } else {
            gondolas++;
            r--;
        }
    }

    cout << gondolas << endl;

    return 0;
}
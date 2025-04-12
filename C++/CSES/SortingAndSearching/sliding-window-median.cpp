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
    int n, k;
    
    cin >> n >> k;
    vector<ll> v(n);
    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int l = 0, r = k - 1;

    while (r < v.size())
    {
        

        l++;
        r++;
    }
    

    return 0;
}
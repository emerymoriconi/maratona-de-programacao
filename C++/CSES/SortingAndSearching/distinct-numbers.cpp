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
    int n; 
    ll x;
    set<ll> s;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;

    return 0;
}
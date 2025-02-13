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
    ll resp = 1;
    ll M = 1000000007;

    cin >> n;

    for (int i = 0; i < n; i++){
        resp = (resp*2)%M;
    }

    cout << resp << endl;

    return 0;
}
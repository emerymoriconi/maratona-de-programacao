#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int n, k, ans=0, r, q;
    vector<int> v;

    cin >> n >> k;

    for (int i=0; i<n; i++){
        cin >> r;
        v.push_back(r);
    }

    q = v[k-1];

    for (int a : v){
        if (a >= q && a > 0){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

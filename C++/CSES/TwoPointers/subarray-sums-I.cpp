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
    int n, x, r = 0, l = 0, ans = 0;
    vector<int> v;
    vector<int> pref;

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        if (i == 0) pref.push_back(a);
        else pref.push_back(a+pref[i-1]);
    }

    while ((l < n) && (r < n)){
        int sum = (pref[r] - pref[l]) + (pref[l] - pref[0]);
        if (sum < x) r++;
        else if (sum > x) l++;
        else {
            ans++;
            r++;
        }
    }

    cout << ans << endl;

    return 0;
}
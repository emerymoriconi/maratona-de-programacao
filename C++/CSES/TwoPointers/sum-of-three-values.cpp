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
    int n, i, l, r;
    vector<pair<int, int>> v;
    vector<int> ans;
    ll x;

    cin >> n >> x;

    for (int j = 0; j < n; j++) {
        int a;
        cin >> a;
        v.push_back({a, j + 1});
    }

    sort(v.begin(), v.end());

    for (i = 0; i < n; i++) {
        int complemento = x - v[i].first;
        l = i+1;
        r = n - 1;

        while (l < r) {
            if ((v[l].first + v[r].first) < complemento) l++;
            else if ((v[l].first + v[r].first) > complemento) r--;
            else {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << endl; 
                return 0;
            }
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}
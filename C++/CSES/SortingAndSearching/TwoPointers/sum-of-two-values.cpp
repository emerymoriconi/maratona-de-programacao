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
    int n, x, l = 0;
    vector<pair<int, int>> v;

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back({a, i + 1});
    }

    sort(v.begin(), v.end());

    int r = n - 1;

    while (l < r){
        if ((v[l].first + v[r].first) < x) l++;
        else if ((v[l].first + v[r].first) > x) r--;
        else {
            cout << v[l].second << " " << v[r].second << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
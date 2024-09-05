#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int n, c, ans = 0;

    cin >> n;

    for (int i=0; i<n; i++){
        vector<int> v;
        for (int j=0; j<3; j++){
            cin >> c;
            v.push_back(c);
        }
        if (count(v.begin(), v.end(), 1) >= 2){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
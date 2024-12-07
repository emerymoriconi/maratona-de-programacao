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
    int n, q, time = 0;
    queue<pair<string, int>> que;
    queue<pair<string, int>> ans;

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        string p;
        int t;

        cin >> p >> t;
        que.push({p, t});
    }

    while (!que.empty()){
        int t = que.front().second - q;
        if (t <= 0) {
            time += que.front().second;
            que.front().second = time;
            ans.push(que.front());
            que.pop();
        } else {
            que.front().second = t;
            que.push(que.front());
            que.pop();
            time+=q;
        }
    }

    while (!ans.empty()){
        cout << ans.front().first << " " << ans.front().second << endl;
        ans.pop();
    }

    return 0;
}
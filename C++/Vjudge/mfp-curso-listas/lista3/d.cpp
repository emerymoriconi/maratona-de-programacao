#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int n, q;

    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i] = x;
    }

    for (int i = 0; i < q; i++){
        int a;
        cin >> a;
        // quero saber se a está no vetor
        auto it = lower_bound(v.begin(), v.end(), a);
        if (*it == a){
            cout << it - v.begin() << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
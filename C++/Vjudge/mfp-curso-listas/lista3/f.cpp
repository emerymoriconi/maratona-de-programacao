#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int n;

    cin >> n;

    vector<int> v(n);
    multiset<int> ms;

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    ms.insert(v[0]);
    int torres = 1;

    for (int i = 1; i < n; i++){
        auto it = ms.upper_bound(v[i]);
        if (it == ms.end()){
            torres++;
        } else {
            ms.erase(ms.find(*it));
        }
        ms.insert(v[i]);
    }

    cout << torres << endl;

    return 0;
}
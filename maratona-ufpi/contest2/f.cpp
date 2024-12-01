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
    int R, G, B, resp;
    string C;

    cin >> R >> G >> B >> C;

    if (C.compare("Blue") == 0) {
        resp = min(R, G);
    } else if (C.compare("Red") == 0){
        resp = min(G, B);
    } else if (C.compare("Green") == 0){
        resp = min(R, B);
    }

    cout << resp;

    return 0;
}
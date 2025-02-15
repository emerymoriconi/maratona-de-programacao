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
    int t, a, b;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> a >> b;
        // int dois, um;
        // um*1 + dois*2 = a; 
        // um*2 + dois*1 = b;
        // logo...
        // um = (2*b - a)/3;
        // dois = (2*a - b)/3;
        if ((2*b - a) >= 0 && (2*b - a)%3 == 0 && (2*a - b) >= 0 && (2*a - b)%3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
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
    int n;
    ll resp;

    cin >> n;

    for(int k = 1; k <= n; k++){
        if (k == 1) cout << 0 << endl;
        else if (k == 2) cout << 6 << endl;
        else {
            resp = (((pow(k, 2))*((pow(k, 2)-1)))/2)-((k - 1)*(k - 2)*4);
            cout << resp << endl; 
        }
    }

    return 0;
}
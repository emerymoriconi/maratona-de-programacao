#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    long long int n, m, a;

    cin >> n >> m >> a;
    
    cout << ((n + a - 1)/a) * ((m + a - 1)/a) << endl;

    return 0;
}
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;

    long long int n;
    vector<ll> resp;

    cin >> n;

    while (n != 1){
        resp.push_back(n);
        if (n % 2 != 0) n = n * 3 + 1;
        else n /= 2;
    }

    resp.push_back(1);

    for (long long int a : resp)
        cout << a << " ";
    
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

// using kadane's algorithm

int main(){
    optimize;
    int n;

    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<ll> sum(n);
    sum[0] = v[0];

    for (int i = 1; i < n; i++){
        if (max(v[i], v[i] + sum[i-1]) == v[i]){
            sum[i] = v[i];
        } else {
            sum[i] = v[i] + sum[i-1];
        }
    }

    cout << *max_element(sum.begin(), sum.end()) << endl;

    return 0;
}
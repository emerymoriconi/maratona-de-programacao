#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int N;
    ll ans = 0, mediana; 
    vector<ll> sticks;
    
    cin >> N;

    for (int i = 0; i < N; i++){
        ll a;
        cin >> a;
        sticks.push_back(a);
    }

    sort(sticks.begin(), sticks.end());

    if (N % 2 != 0){
        mediana = sticks[N/2];
    } else {
        mediana = (sticks[N/2] + sticks[(N-1)/2])/2;
    }

    for (ll el : sticks){
        ans += abs(el - mediana);
    }
    cout << ans << endl;

    return 0;
}
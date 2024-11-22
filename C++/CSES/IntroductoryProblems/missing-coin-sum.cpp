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

    cin >> N;

    vector<ll> moedas(N);

    for(int i = 0; i < N; i++)
        cin >> moedas[i];

    sort(moedas.begin(), moedas.end());

    ll ans = 1;

    for(int i = 0; i < N; i++)
        if(ans < moedas[i])
            break;
        else
            ans += moedas[i];  
    
    cout << ans << endl;

    return 0;
}
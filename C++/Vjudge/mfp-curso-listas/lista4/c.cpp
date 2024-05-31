#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int mach, prod;
    vector<int> times;

    cin >> mach >> prod;

    for (int i = 0; i < mach; i++){
        int a;
        cin >> a;
        times.push_back(a);
    }

    sort(times.begin(), times.end());

    int maior = times[mach-1];

    maior = maior * prod;

    int l = 0, r = maior, resposta;

    while (l <= r) {
        if (l == r) {
            resposta = l;
            break;
        }
        int mid = (l + r)/2;
        int soma = 0;
        for (int x : times){
            soma += (mid / x);
        }
        if (soma > prod) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << resposta << endl;

    return 0;
}
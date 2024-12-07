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
    int N, X;
    ll W, resp = SMALL;
    ll empregados[24] = {0};

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> W >> X;
        for (int j = 0; j < 24; j++){
            int h = (X + j)%24;
            if ((h >= 9) && ((h + 1) <= 18)){
                empregados[j] += W;
            }
            resp = max(empregados[j], resp);
        }
    }

    cout << resp << endl;

    return 0;
}
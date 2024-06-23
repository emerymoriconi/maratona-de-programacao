#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int distancia(int a, int b){
    if (a == b) return 0;
    return 1 + distancia(a / 2, b / 2);
}

int main(){
    optimize;
    int K, L, ans;

    cin >> K >> L;

    ans = distancia(K-1, L-1);

    if (ans == 1) cout << "oitavas" << endl;
    else if (ans == 2) cout << "quartas" << endl;
    else if (ans == 3) cout << "semifinal" << endl;
    else if (ans == 4) cout << "final" << endl;

    return 0;
}
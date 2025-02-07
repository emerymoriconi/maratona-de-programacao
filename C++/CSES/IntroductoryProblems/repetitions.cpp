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
    string S;

    cin >> S;

    char letra = S[0];
    int maior = 1, atual = 1;

    for (int i = 1; i < S.size(); i++) {
        if (letra == S[i]) atual++;
        else {
            atual = 1;
            letra = S[i];
        }
        maior = max(maior, atual);
    }

    cout << maior << endl;

    return 0;
}
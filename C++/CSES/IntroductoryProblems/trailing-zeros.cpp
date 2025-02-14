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
    int n, zeros = 0;

    cin >> n;
    int aux = -1;

    for (int i = 5; aux != 0; i=i*5){
        aux = n / i;
        zeros += aux;
    }

    cout << zeros << endl;

    return 0;
}
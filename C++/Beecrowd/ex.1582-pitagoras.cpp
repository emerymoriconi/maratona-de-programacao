#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int euclides(int a, int b){
    if (b == 0) return a;
    return euclides(b, a % b);
}

int main(){
    optimize;
    int x, y, z, ans;

    while (cin >> x >> y >> z) {
        ans = 0;
        if (x > y) swap(x, y);
        if (x > z) swap(x, z);
        if (y > z) swap(y, z);
        if (z * z == x * x + y * y) {
            ans = 1;
            if (euclides(x, y) == 1 && euclides(x, z) == 1 && euclides(y, z) == 1) ans = 2;
        }

        if (ans == 0) {
            cout << "tripla" << endl;
        } else if (ans == 1) {
            cout << "tripla pitagorica" << endl;
        } else if (ans == 2) {
            cout << "tripla pitagorica primitiva" << endl;
        }
        
    }

    return 0;
}
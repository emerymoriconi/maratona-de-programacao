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
    ll t, y, x, resp;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> y >> x;
        if ((x == 1) && (y == 1)) resp = 1;
        else if (y % 2 == 0){
            if (y >= x){
                resp = ((y-1)*(y-1) + (2*y - x));
            } else {
                if (x % 2 == 0) resp = (((x-1)*(x-1)) + y);
                else resp = ((x-1)*(x-1) + ((2*x) - y)); 
            }
        } else if (y % 2 != 0){
            if (y >= x){
                resp = (((y-1)*(y-1)) + x);
            } else {
                if (x % 2 != 0) resp = (((x-1)*(x-1)) + ((2*x) - y)); 
                else resp = (((x-1)*(x-1)) + y);
            }
        }
        cout << resp << endl;
    }

    return 0;
}
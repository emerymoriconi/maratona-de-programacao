#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int n, x=0;

    cin >> n;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for (int j=0; j<3; j++){
            if (a[j] == '+'){
                x++;  
                break;
            }
            if (a[j] == '-'){
                x--;
                break;
            }
        }
    }

    cout << x << endl;

    return 0;
}
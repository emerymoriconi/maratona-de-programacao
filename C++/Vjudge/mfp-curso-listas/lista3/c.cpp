#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
    optimize;
    int n, q;

    cin >> n;

    vector<long long int> v(n), prefix(n+1), prefix_sorted(n+1);

    prefix[0] = 0;
    prefix_sorted[0] = 0;

    for (int i = 0; i < n; i++){
        long long int x;
        cin >> x;
        v[i] = x;
        prefix[i+1] = prefix[i] + x;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++){
        prefix_sorted[i+1] = prefix_sorted[i] + v[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++){
        int type, a, b;
        cin >> type >> a >> b;
        if (type == 1){
            cout << prefix[b] - prefix[a-1] << endl;
        } else if (type == 2){
            cout << prefix_sorted[b] - prefix_sorted[a-1] << endl;
        }
    }

    return 0;
}
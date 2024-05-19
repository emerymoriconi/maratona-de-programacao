#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    vector<int> v;

    cin >> n >> q;

    long long int prefix[n+1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        prefix[i+1] = prefix[i] + x;
    }

    for (int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    map<int, int> m;
    vector<int> v;

    cin >> n;

    for (int i=0; i<n-1; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i=0; i<n; i++){
        m[i+1] = v[i];
    }

    for (auto it = m.begin(); it != m.end(); it++){
        if (it->first != it->second) {
            cout << it->first << endl;
            break;
        }
    }

    return 0;
}
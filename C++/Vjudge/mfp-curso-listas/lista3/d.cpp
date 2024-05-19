#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    vector<int> v;

    cin >> n >> q;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < q; i++){
        int a;
        cin >> a;
        // quero saber se a está no vetor
        if (find(v.begin(), v.end(), a) != v.end()){
            cout << lower_bound(v.begin(), v.end(), a) - v.begin() << endl;
        } else {
            cout << "-1" << endl;
        }

    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y;
    vector<int> v;

    cin >> n >> x;

    for (int i=0; i<n; i++){
        cin >> y;
        v.push_back(y);
    }

    sort(v.begin(), v.end());

    for (int j=0; j<n; j++){ 
        for (int i=1; i<n; i++){
            if (v.back() + v.front() != x){
                v.erase(v.begin());
            } else {
                cout << v[0] << " " << v[v.back()] << endl;
                break;
            }
        }
        v.pop_back();
    }

    return 0;
}
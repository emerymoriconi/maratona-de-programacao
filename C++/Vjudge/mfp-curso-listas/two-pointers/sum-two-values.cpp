#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, x, aux;
    vector<pair<int, int>> vect;
 
    cin >> n >> x;

    int a = 0, b = n - 1;
 
    for (int i = 0; i < n; i++){
        cin >> aux;
        vect.push_back({aux, i + 1});
    }
 
    int sum = 0;

    sort(vect.begin(), vect.end());
 
    while (sum != x && b > a) {
        sum = vect[a].first + vect[b].first;
        if (sum == x){
            cout << vect[a].second << " " << vect[b].second << endl;
            return 0;
        } else if (sum > x){
            b--;
        } else {
            a++;
        }
    }
 
    cout << "IMPOSSIBLE" << endl;
 
    return 0;
}
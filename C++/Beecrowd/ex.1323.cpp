#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, r;
    vector<int> resp;

    cin >> N;

    while (N != 0){
        r = 0;

        while (N >= 1){
            r = r + pow(N, 2);
            N--;
        }
        resp.push_back(r);
        cin >> N;
    }

    for (int r : resp){
        cout << r << endl;
    }

    return 0;
}
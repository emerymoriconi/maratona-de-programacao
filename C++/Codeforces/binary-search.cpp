#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, num;

    cin >> n >> k;

    int array[n];

    for (int i=0; i<n; i++){
        cin >> array[i];
    }

    for (int i=0; i<k; i++){
        bool resp = false;
        int l = 0, r = n - 1;
        cin >> num;

        while (l <= r){
            if (num == array[(r+l)/2]){
                resp = true;
                break;
            } 

            if (num < array[(r+l)/2]){
                r = (r+l)/2 - 1;
            }

            if (num > array[(r+l)/2]){
                l = (r+l)/2 + 1;
            }
        }

        if (resp == false){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
    
    
    return 0;
}
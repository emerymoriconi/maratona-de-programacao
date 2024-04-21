#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;

    cin >> N;

    if (N%5 == 0) {
        cout << N;
    } else if ((N%5) <= 2) {
        int i = N / 5;
        cout << i*5 << endl;
    } else {
        int i = N / 5;
        cout << (i+1)*5 << endl;
    }

    return 0;
}
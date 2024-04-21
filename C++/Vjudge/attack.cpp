#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    optimize;
    long long int A, B, ataques = 0, resto = 0;

    cin >> A >> B;

    if (A%B==0){
        ataques = A/B;
    } else {
        ataques = A/B;
        resto = A%B;
        while (resto>0) {
            ataques++;
            resto -= B;
        }
    }

    cout << ataques << endl;

    return 0;
}
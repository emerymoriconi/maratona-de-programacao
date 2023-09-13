#include <bits/stdc++.h>

using namespace std;

int main(){
    int X, Y, sum=0;

    cin >> X;
    cin >> Y;

    if (X<Y){
        X++;
        while (X<Y){
            if (X%2!=0){
                sum = sum + X;
            }
            X++;
        }
    } else if (Y<X){
        Y++;
        while (Y<X){
            if (Y%2!=0){
                sum = sum + Y;
            }
            Y++;
        }
    } else if (X==Y){
        sum = 0;
    }

    cout << sum << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, resp;
    
    cin >> N;
    
    if (N == 3 || N == 5 || N == 9 || N == 6 || N == 10 || N == 12){
        resp = 2;
    } else if (N == 1 || N == 2 || N == 4 || N == 8){
        resp = 1;
    } else if (N == 7 || N == 11 || N == 13 || N == 14){
        resp = 3;
    } else if (N == 15){
        resp = 4;
    }
    
    cout << resp << endl;
    
    return 0;
}
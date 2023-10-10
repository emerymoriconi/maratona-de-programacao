#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int h, op, r;
    vector<long long int> respostas;
    
    while(cin >> h >> op){
        r = 0;
        r = h - op;
        if(h < op){
            r = r * (-1);
        }
        respostas.push_back(r);
    }

    for (long long int r : respostas){
        cout << r << endl;
    }

    return 0;
}
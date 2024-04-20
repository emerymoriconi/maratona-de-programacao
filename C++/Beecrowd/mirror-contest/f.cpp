#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, time, p1=0, p2=0;
    string frase;
    
    cin >> n;
    
    cin.ignore();
    
    for (int i = 0; i < n; i++){
        getline(cin, frase, '\n');
        time = (frase[5] - '0');
        if (time == 1){
            p1 += (frase[8] - '0');
        } else if (time == 2){
            p2 += (frase[8] - '0');
        }
    }
    
    cout << p1 << " x " << p2 << endl;
    
    return 0;
}
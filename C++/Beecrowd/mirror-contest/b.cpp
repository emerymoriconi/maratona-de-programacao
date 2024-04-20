#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, m, n;
    
    cin >> m >> n;
    
    a = (m*m) - (n*n);
    b = 2*m*n;
    c = (m*m) + (n*n);
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}
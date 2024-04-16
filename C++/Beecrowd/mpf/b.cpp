#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> x, y, d;
    long long int area = 0;
    int j = 0, c = 0, lado, a, b, i = 0;

    while (true){
        cin >> a >> b;
        if (i < 4){
            x[i] = a;
            y[i] = b;
            i++;
        } else {
            break;
        }
    }    

    for (int i = 1; i < 4; i++){
        d[j] = sqrt(pow((x[0] - x[i]), 2) + pow((y[0] - y[i]), 2));
        j++;
    }

    for (auto distancia : d){
        c = count(d.begin(), d.end(), distancia);
        if (c > 1) {
            lado = distancia;
            break;
        }
    }

    area = pow(lado, 2);

    cout << area << endl;
    
    return 0;
}
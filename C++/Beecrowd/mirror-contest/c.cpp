#include <bits/stdc++.h>

using namespace std;

int main(){
    int x[4], y[4], d[3];
    unordered_map<int, int> countMap;
    long long int area = 0;
    int j = 0, c = 0, lado, a, b, i = 0;

    while (true){
        if (i < 4){
            cin >> a >> b;
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

    for (j = 0; j < 3; j++){
        countMap[d[j]]++;
    }

    for (const auto& pair : countMap) {
        if (pair.second >= 2) {
            lado = pair.first;
        }
    }

    area = pow(lado, 2);

    cout << area << endl;
    
    return 0;
}
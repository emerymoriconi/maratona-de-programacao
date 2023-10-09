#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, vf, vg;
    vector<char> resp;

    while(cin >> d >> vf >> vg){
        double v1 = 12/(double)vf;
        double v2 = (double)(sqrt(pow(d, 2) + pow(12, 2)))/(double)vg;

        if (v1 >= v2){
            resp.push_back('S');
        } else {
            resp.push_back('N');
        }

    }

    for (char r : resp){
        cout << r << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, vf, vg;
    vector<char> resp;

    while(cin >> d >> vf >> vg){

        if (12/vf >= sqrt(pow(d, 2) + pow(12, 2))/vg){
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
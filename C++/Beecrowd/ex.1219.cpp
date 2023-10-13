#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, aux = 1;
    double areaT, p, areaC, areac, R, r;
    vector<double> resp;


    while (cin >> a >> b >> c){
        p = (a + b + c) / 2.0;
        areaT = sqrt(p * (p - a) * (p - b) * (p - c));
        R = (a * b * c) / (4 * areaT);
        r = areaT / p;
        areaC = M_PI * pow(R , 2);
        areac = M_PI * pow(r , 2);
        resp.push_back(areaC - areaT);
        resp.push_back(areaT - areac);
        resp.push_back(areac);
    }

    cout << fixed << setprecision(4);

    for (int i = 0; i < resp.size(); i++) {
        cout << resp[i];

        if ((i + 1) % 3 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}
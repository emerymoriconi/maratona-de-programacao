#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, aux1, aux2;
    vector<int> a, b, resp;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> aux1;
        a.push_back(aux1);
    }

    for (int i = 0; i < m; i++){
        cin >> aux2;
        b.push_back(aux2);
    }

    int x = 0, y = 0;

    while (x < n && y < m){
        if (a[x] < b[y]){
            resp.push_back(a[x]);
            x++;
        } else {
            resp.push_back(b[y]);
            y++;
        }
    }

    if (x != n){
        while (x < n){
        resp.push_back(a[x]);
        x++;
        }
    } else if (y != m){
        while (y < m){
        resp.push_back(b[y]);
        y++;  
        }
    }

    for (int i = 0; i < resp.size(); i++){
        cout << resp[i] << " ";
    }

    return 0;
}
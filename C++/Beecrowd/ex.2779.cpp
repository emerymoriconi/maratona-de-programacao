#include <bits/stdc++.h>

using namespace std;

int main(){

    set<int> album;
    int fig, N, M;

    cin >> N >> M;

    while(M > 0) {
        cin >> fig;
        album.insert(fig);
        M--;
    }

    cout<<(N - album.size())<<endl;
    
    return 0;
}